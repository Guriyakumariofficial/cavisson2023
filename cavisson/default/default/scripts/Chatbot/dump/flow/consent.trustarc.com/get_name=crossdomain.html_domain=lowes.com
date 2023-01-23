<html>
<head>
    <script>
        (function() {
            var COOKIE_NS = "truste.consent.";
            var PARAM_MAP = initParameterMap(location.href);
            var GROUP_PREF_NAME = PARAM_MAP.domain;

            function initParameterMap(url) {
                var map = {};
                var i,url = map["_url"] = url;
                url = (map["_query"] = url.replace(/^[^;?#]*[;?#]/,"")).replace(/[#;?&]+/g,"&");
                if (url) {
                    for ( url = url.split('&'), i = url.length; i-- > 0;) {
                        var s = url[i].split('='),
                                param = s.shift();
                        if (!map[param]) {
                            map[param] = (s.length) ? decodeURIComponent(s.join('=')): "";
                        }
                    }
                }
                return map;
            }

             function postMessageToParent(msg, data) {
               var ob = JSON.stringify({
                            source: "preference_manager",
                            message: msg,
                            data: data
                        });
                 top.postMessage(ob,"*");
                 parent.postMessage(ob,"*");
            }

            function addEventListener(ob,eventName,fxn,callOnFail, useCapture) {
                useCapture = useCapture ? true : false;
                if(ob && typeof eventName == "string" && fxn instanceof Function){
                    if(ob.addEventListener){
                        ob.addEventListener(eventName, fxn, useCapture);
                    }else if(ob.attachEvent){
                        ob.attachEvent("on"+eventName, fxn);
                    }else if(callOnFail) fxn();
                }
            }

            function getStorage(key) {
                var _item = null;
                try {
                    var _storage = self.localStorage;
                    _item = (_storage.getItem) ? _storage.getItem(key):_storage[key];
                } catch (e) {
                    //console.log("Current browser does not support HTML5 Local Storage");
                }
                return _item && JSON.parse(_item) || null;
            }

            function readCookieStorage(name) {
                try{
                    var _key = COOKIE_NS+name;
                    var _cookieObj = getStorage(_key);
                    if(!_cookieObj) return null;

                    //Check for cookie expiration
                    var _cookieExp = new Date(_cookieObj.expires);
                    var _now = new Date();
                    if(_cookieExp < _now)
                        try{
                            self.localStorage.removeItem(_key);
                            return null;
                        }catch(e){/*do nothing*/ return null; }
                    return _cookieObj;

                }catch(e){
                    //truste.util.trace(e.message, e.stack);
                }
                return null;
            }

            function setStorage(key, value) {
                //get previous poptime
                var item = getStorage(key);
                if (!value.popTime && item && !!item.popTime) {
                    value.popTime = item.popTime;
                }
                var _value = (typeof value == "string" || value instanceof String)? value: JSON.stringify(value);
                try{
                    var _storage = self.localStorage;
                    if(_storage.setItem)
                        _storage.setItem(key,_value);
                    else
                        _storage[key] = _value;
                }catch(e){
                   // console.log("Current browser does not support HTML5 Local Storage");
                }
            }

            function createCookieStorage (name, value, exp, popTime) {
                var _cookie = {};

                _cookie.value = value;

                //?If expiration equals '0' set as session cookie
                if(exp=='0'){ _cookie.expires = exp; }
                //?If is a custom value, use that value
                else if(exp)
                {
                    var _date = new Date();
                    _date.setDate(_date.getDate() + exp);
                    if(isNaN((_date=_date.getTime() + (_date.getTimezoneOffset() * 60000)))) throw new Error("Invalid Date String");
                    _cookie.expires = _date;
                } else {
                    var _date = new Date();
                    _date.setDate(_date.getDate() + 395);
                    _cookie.expires = _date;
                }

                if (popTime) {
                    _cookie.popTime = popTime;
                }

                setStorage(COOKIE_NS + name, _cookie);
            }


            function actMessage(prefData) {
                if (prefData && typeof GROUP_PREF_NAME !== 'undefined') {
                    try {
                        prefData = (typeof prefData.data === 'string') ? JSON.parse(prefData.data) : prefData.data;
                    }catch(exp) {
                        //if data cannot be parsed don't proceed
                        return;
                    }
                    if (prefData.source == 'notice_js') {
                        switch (prefData.message) {
                            case 'setPreference':
                                if (prefData.data){
                                    var consent = prefData.data.split(':');
                                    if (/^[0-9]([,|][0-9])*$/.test(consent[0])) {
                                        if (!consent[2] || (consent[2] && /^(expressed|implied).(eu|us)?$/.test(consent[2]))){
                                            createCookieStorage(GROUP_PREF_NAME, prefData.data, prefData.cookieExpiry, prefData.popTime);
                                        }
                                    }
                                }
                                break;
                            case 'getPreference':
                                var droppedCookie = readCookieStorage(GROUP_PREF_NAME);
                                    postMessageToParent('cookie_data', droppedCookie || {});
                                break;
                            case 'updatePreference':
                                var oldData = readCookieStorage(GROUP_PREF_NAME);
                                if (oldData) {
                                    oldData.cmapiPrvcy = prefData.cmapiPrvcy;
                                    oldData.cmapiBl = prefData.cmapiBl;

                                    setStorage(COOKIE_NS + GROUP_PREF_NAME, oldData);
                                }

                                break;
                        }
                    }
                }
            }

            if (typeof GROUP_PREF_NAME !== 'undefined') {
                var droppedCookie = readCookieStorage(GROUP_PREF_NAME);
                postMessageToParent('cookie_data', droppedCookie || {});
            }
            addEventListener(window,'message',actMessage);
        })();
    </script>
</head>
<body>
</body>
</html>
