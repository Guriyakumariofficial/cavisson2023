/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Sakshi
    Date of recording: 01/16/2023 12:18:42
    Flow details:
    Build details: 4.10.0 (build# 42)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{

    /*
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=https://perf.lowes.com/",
        "HOST=va.msg.liveperson.net",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "Snapshot=webpage_1673849558583.png",
        INLINE_URLS,
            "URL=https://ppmobileimages.lowes.com/test/marketingimages/b3284992-20d9-4f50-be8f-e93f01b912f1/10609029-94948363.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://ppmobileimages.lowes.com/test/marketingimages/96ac4d84-80de-4707-b4df-c5e8bf6d36cd/10609029-94948363.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://s.go-mpulse.net/boomerang/6RXN8-RBUJN-58E9V-E7P3V-ZGGXP", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/homepage-web-app//0.1.181/vendors.584cb440.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/homepage-web-app//0.1.181/engagecomp.8f14575d.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/homepage-web-app//0.1.181/lcomp.d7d801a5.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/homepage-web-app//0.1.181/react.e5ca3a57.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/homepage-web-app//0.1.181/client.3575d910.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ppmobileimages.lowes.com/test/marketingimages/7ed1c028-a08d-4817-a16f-1f2b58382239/D-857x482-66pct-66-33-v2.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/30264050-fabe-4909-bfcc-138c2bfca3fc/DP18-272239-D-1600px-FullWidth.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/0c9016d6-6397-4fba-aba5-0de3194a8018/D-969x250-75pct-75-25.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/7fb4cf1a-2694-456b-af92-2674c43d0f8f/D-323x250-25pct-75-25.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/b070134f-2265-425c-9d70-b4a993745aa0/appliance-savings-dp18-201623-dtv2.jpg?im=Resize,width=702&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/b070134f-2265-425c-9d70-b4a993745aa0/appliance-savings-dp18-201623-dtv2.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://lowesnp500z.btttag.com/btt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/p13n/V3.8.0-B142/clientlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/global-header-footer/5.580.26/header-v2.eb0501c5.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/visualsearchplugin/1.1.73/index.backyard.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/purchase/cartpreview/22.41.5/cartpreview.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://mobileimages.lowes.com/marketingimages/2c8d433b-268b-411c-b71e-8e066aed03e3/how-to-design-a-closet-dp18-246952.jpg?im=Scale,width=1,height=1&fmt=webp", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/global-header-footer/5.580.26/footer-v2.ab615fb5.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/notice?domain=lowes.com&c=teconsent&pn=1&text=true&pcookie&gtm=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/purchase/atc/22.48.0/atc.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/recs/micro-app//recommendations.umd.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/launch-fc37eefd9eb3-development.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/asset/notice.js/v/v1.7-10255", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/tag/js/gpt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/googleadmanagerlibrary/V1.01.89-B119/gamlibrary.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/exp-target/2.0.22/exp.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/get?name=crossdomain.html&domain=lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://consent.trustarc.com/log?domain=lowes.com&country=us&state=&behavior=implied&c=09bd", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lwscomsit4.lowes.com/baymax/v2/experiments?content=true&appId=7679876983&env=stage&sdk=rsdk&sdkVersion=0.7.3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dev.lowescdn.com/gauge/dev/js/index.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://edge.fullstory.com/s/fs.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/gpt/pubads_impl_2023011202.js?cb=31071608", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://securepubads.g.doubleclick.net/pagead/ppub_config?ippd=perf.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=stage&sdkVersion=2.0.22", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:GET", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://perf.lowes.com/client-services/loc.json", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;akaalb_perf_dual;region;notice_behavior;RT", END_INLINE,
            "URL=https://perf.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=&userType=&dbidv2=7b934de9-e8da-4b70-a5a4-c29ed3fa0316", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;akaalb_perf_dual;region;notice_behavior;RT", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=globalheader-message&targetMap=%7B%22zipCode%22:null,%22storeId%22:null,%22state%22:null,%22userType%22:%22diy%22,%22audienceList%22:[]%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;akaalb_perf_dual;region;notice_behavior;RT", END_INLINE,
            "URL=https://www.lowes.com/baymax/experiments?content=true&appId=7679876983&env=stage&sdk=rsdk&sdkVersion=0.6.3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowes.com/baymax/experiments?sdk=jssdk&appId=7679876983&env=stage&sdkVersion=2.0.22", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Content-Type:application/json", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://perf.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=&userType=&dbidv2=7b934de9-e8da-4b70-a5a4-c29ed3fa0316", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/googleadmanagerlibrary/V1.01.89-B119/js/prebid-ads.js?time=1673849558", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=globalheader-footer&targetMap=%25257B%252522zipCode%252522%25253Anull%25252C%252522storeId%252522%25253Anull%25252C%252522state%252522%25253Anull%25252C%252522userType%252522%25253A%252522diy%252522%25252C%252522audienceList%252522%25253A%25255B%25255D%25257D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;akaalb_perf_dual", END_INLINE,
            "URL=https://lwscomsit4.lowes.com/_sec/cp_challenge/sec-3-8.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;notice_behavior;RT", END_INLINE,
            "URL=https://lwscomsit4.lowes.com/_sec/cp_challenge/sec-cpt-3-8.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;notice_behavior;RT", END_INLINE,
            "URL=https://www.lowes.com/_sec/cp_challenge/sec-3-8.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;notice_behavior;RT", END_INLINE,
            "URL=https://www.lowes.com/_sec/cp_challenge/sec-cpt-3-8.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;notice_behavior;RT", END_INLINE,
            "URL=https://perf.lowes.com/store/api/search?maxResults=1&searchTerm=42.8954,-78.8862&responseGroup=large", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;akaalb_perf_dual", END_INLINE,
            "URL=https://dev.lowescdn.com/sit4/node/googleadmanagerlibrary/V1.01.89-B119/js/prebid-ads.js?time=1673849558", END_INLINE,
            "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1673849558", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("page");
    ns_web_url ("page",
        "URL=https://rs.fullstory.com/rec/page",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "Snapshot=webpage_1673849559594.png",
        BODY_BEGIN,
            "{"OrgId":"Q8RZE","UserId":"","Url":"https://perf.lowes.com/","Base":"https://perf.lowes.com/","Width":775,"Height":473,"ScreenWidth":8192,"ScreenHeight":4096,"SnippetVersion":"1.2.0","Referrer":"","Preroll":5282,"Doctype":"<!DOCTYPE html>","CompiledVersion":"29190eb2d8","CompiledTimestamp":1672826540,"AppId":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","TabId":"e74288c7fa5018"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1673849559", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC900f629f333e44f99c4a3a04a640615f-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC7d24d86c42aa4a128fd1a0ebe0734106-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=globalheader-shopflyoutv2&targetMap=%7B%22zipCode%22:null,%22storeId%22:null,%22state%22:null,%22userType%22:%22diy%22,%22audienceList%22:[]%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;_lgsid;akaalb_perf_dual", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=npc-flyoutv2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;_lgsid;akaalb_perf_dual", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=globalheader-installationflyout", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;_lgsid;akaalb_perf_dual", END_INLINE,
            "URL=https://perf.lowes.com/globalweb/teslacontent?ids=globalheader-savingsflyout", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;RT;_lgsid;akaalb_perf_dual", END_INLINE,
            "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1673849559", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=demdex", END_INLINE,
            "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1673849558", END_INLINE,
            "URL=https://perf.lowes.com/favicon.ico", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;RT;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg", END_INLINE,
            "URL=https://trial-eum-clientnsv4-s.akamaihd.net/eum/getdns.txt?c=ptk85f8at", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://yabqh2qx3ygbuy6e5lla-ptk85f-2b8b36c8b-clientnsv4-s.akamaihd.net/eum/results.txt", END_INLINE,
            "URL=https://trial-eum-clienttons-s.akamaihd.net/eum/getdns.txt?c=ptk85f8at", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=https://192-3-3-234_s-23-56-5-72_ts-1673849558-clienttons-s.akamaihd.net/eum/results.txt", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=DC-6450450&l=googleDataLayer", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dpm.demdex.net/id?d_visid_ver=3.3.0&d_rtbd=json&d_ver=2&d_orgid=5E00123F5245B2780A490D45%40AdobeOrg&d_fieldgroup=MC&d_nsid=0&ts=1673849559", END_INLINE,
            "URL=https://yabqh2qx3ygbuy6e5lla-ptk85f-2b8b36c8b-clientnsv4-s.akamaihd.net/eum/results.txt", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:null", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.googletagmanager.com/gtag/js?id=AW-1031919983&l=googleDataLayer&cx=c", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC06bff9264f314f2f94d9d2bc35360818-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://6450450.fls.doubleclick.net/activityi;src=6450450;type=lowes002;cat=unive0;ord=1;num=3086370334531;gtm=2od1a1;auiddc=1905259846.1673849559;u21=https%3A%2F%2Fperf.lowes.com%2F;u24=;u25=;u26=;u28=null;~oref=https%3A%2F%2Fperf.lowes.com%2F?", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://192-3-3-234_s-23-56-5-72_ts-1673849558-clienttons-s.akamaihd.net/eum/results.txt", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:null", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC96306548307844a7920dda4bb0b6b118-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://adservice.google.com/ddm/fls/i/src=6450450;type=lowes002;cat=unive0;ord=1;num=3086370334531;gtm=2od1a1;auiddc=1905259846.1673849559;u21=https%3A%2F%2Fperf.lowes.com%2F;u24=;u25=;u26=;u28=null;~oref=https%3A%2F%2Fperf.lowes.com%2F", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1673849559063&cv=11&fst=1673849559063&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&auid=1905259846.1673849559&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uap=Linux&uapv=5.4.0&uaw=0&data=event%3Dgtag.config&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=test_cookie", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1673849559096&cv=11&fst=1673849559096&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&auid=1905259846.1673849559&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uap=Linux&uapv=5.4.0&uaw=0&data=event%3Dpage_view%3Becomm_pagetype%3Dhp&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=test_cookie", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCfe4beeb91a1744488a915b1192b3080e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC818be7030eb24613b49337b854ea5e3c-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1673849559063&cv=11&fst=1673848800000&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&data=event%3Dgtag.config&fmt=3&is_vtc=1&random=464446924&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1673849559096&cv=11&fst=1673848800000&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&data=event%3Dpage_view%3Becomm_pagetype%3Dhp&fmt=3&is_vtc=1&random=2861662804&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC3db3bd2e38c54b5e9e45b89adec32c26-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCc3a363c553a1445bb1f6237e3e6c76c9-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("page", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("baymax");
    ns_web_url ("baymax",
        "URL=https://perf.lowes.com/gauge/link/baymax",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;RT",
        "Snapshot=webpage_1673849559621.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:39.346Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"1","scenarioTest":"","collectionTest":"","eventId":"a0a269c8-5619-4277-8d99-775a2506d481","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":2},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}]}},"track":{"baymaxId":"FF-66:variant"},"path":"/link/baymax","method":"POST"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC3f6ab89cc0484f1c96069889541439f2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCcc9fd9701ae947e485b55e958d27e352-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC223675a865a34d3bb74f35df50f9f41a-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://fdz.flashtalking.com/services/lowes/FBI-2422_segment/?&U1=&U2=&U3=1883&U4=14228&U5=&U6=&U7=&U8=&U9=&U10=&U11=&U14=&U15=hp&U16=hp&U17=hp&U19=&U20=", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.revlifter.io/0l554347-da15-447f-9091-6e8941024cdc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC841a80f77aae42e8bd17f5a2fb0bd75c-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("baymax", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("homepage");
    ns_web_url ("homepage",
        "URL=https://perf.lowes.com/gauge/pageview/homepage",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;RT;prodNumber",
        "Snapshot=webpage_1673849559726.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:39.529Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"2","scenarioTest":"","collectionTest":"","eventId":"09c7e34f-227d-4739-8dbd-1388867095a8","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":2},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}]}},"track":{},"path":"/pageview/homepage","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://connect.facebook.net/en_US/fbevents.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCb32d075eb17e431ca780452f6fa7981a-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://servedby.flashtalking.com/segment/modify/ai30;;pixel/?valuePairs=LHpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC840afdcbd3504ba1b812a4448329688c-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("homepage", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("cmsComponent");
    ns_web_url ("cmsComponent",
        "URL=https://perf.lowes.com/gauge/link/cmsComponent",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;RT;prodNumber;akaalb_perf_single",
        "Snapshot=webpage_1673849559872.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:39.637Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"3","scenarioTest":"","collectionTest":"","eventId":"70315a1a-4c71-47e0-8d73-a015612127de","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":2},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}]}},"track":{"linkName":"component_impression","technicalComponentName":"HeroBannerCarousel","businessComponentName":"na","parentSpot":"na","componentTitle":"na","componentType":"cms","isCMS":true},"path":"/link/cmsComponent","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://connect.facebook.net/signals/plugins/identity.js?v=2.9.92", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://connect.facebook.net/signals/config/625799750871183?v=2.9.92&r=stable", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC2fbabc39970e42eeba6a3a79b471cfe9-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC97991d7530804966918438e18d9a2db9-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api.official-deals.co.uk/v1/pixel?c=%7B%22w%22:%220l554347-da15-447f-9091-6e8941024cdc%22,%22u%22:%2200a3a0bb-cfd5-45d2-be9a-3c0e25c45045%22,%22s%22:%223ccefea4-a0ad-4fc4-956a-ef942fd149be%22,%22se%22:1676441559%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCc21cd6f11f8e4f67b562ba58458ab889-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC6e095553f0464f2bba21af7f12f49570-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCd1d3e1b0a0a2453faa57017778db1a79-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=PageView&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849559774&sw=8192&sh=4096&v=2.9.92&r=stable&ec=0&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&eid=09c7e34f-227d-4739-8dbd-1388867095a8&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("cmsComponent", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("autoZipSuccess");
    ns_web_url ("autoZipSuccess",
        "URL=https://perf.lowes.com/gauge/link/autoZipSuccess",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;RT;akaalb_perf_single;REVLIFTER;_fbp;prodNumber",
        "Snapshot=webpage_1673849561170.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"2","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:39.782Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"4","scenarioTest":"","collectionTest":"","eventId":"a939db0e-294c-4424-9e0b-73f7d9d969cf","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":2},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}]}},"track":{},"path":"/link/autoZipSuccess","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC50c863d948db4619b1e969e52de056dc-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC38e3440617184a31b552f62c332c59f7-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC339838c9929c407583d6af62b03ed2f9-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCaf866ca3479f4ae6bca9397acd64b0d2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://api.official-coupons.com/v1/pixel?r=1&c=%7B%22w%22%3A%220l554347-da15-447f-9091-6e8941024cdc%22%2C%22u%22%3A%2200a3a0bb-cfd5-45d2-be9a-3c0e25c45045%22%2C%22s%22%3A%223ccefea4-a0ad-4fc4-956a-ef942fd149be%22%2C%22se%22%3A1676441559%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCe32be01e80774a62bf3f2397b7c0ebf2-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCd18ff19aac664916896d20fdadc57a2a-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC4efca769c14e4e64a592adcd68af29b1-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC82917961b3ed43708285d28aa0d3d184-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCb454e44df3a944da9752136c7baae90d-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1673849560303&cv=11&fst=1673849560303&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&auid=1905259846.1673849559&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uap=Linux&uapv=5.4.0&uaw=0&data=event%3Dform_start&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1031919983/?random=1673849560317&cv=11&fst=1673849560317&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&auid=1905259846.1673849559&uaa=x86&uab=64&uafvl=%2520Not%2520A%253BBrand%3B99.0.0.0%7CChromium%3B104.0.5112.124&uap=Linux&uapv=5.4.0&uaw=0&data=event%3Dform_submit&rfmt=3&fmt=4", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=IDE", END_INLINE,
            "URL=https://www.facebook.com/tr/", "METHOD=POST", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Origin:https://perf.lowes.com", "HEADER=Content-Type:application/x-www-form-urlencoded", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9",
            BODY_BEGIN,
            "id=625799750871183&ev=Microdata&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849560281&cd%5BDataLayer%5D=%5B%5D&cd%5BMeta%5D=%7B%22title%22%3A%22smart%22%2C%22meta%3Adescription%22%3A%22meta%22%7D&cd%5BOpenGraph%5D=%7B%22og%3Atitle%22%3A%22Lowe%27s+Home+Improvement%22%2C%22og%3Adescription%22%3A%22Shop+tools%2C+appliances%2C+building+supplies%2C+carpet%2C+bathroom%2C+lighting+and+more.+Pros+can+take+advantage+of+Pro+offers%2C+credit+and+business+resources.%22%2C%22og%3Atype%22%3A%22Website%22%2C%22og%3Aurl%22%3A%22https%3A%2F%2Fwww.lowes.com%22%2C%22og%3Asite_name%22%3A%22Lowe%27s%22%2C%22og%3Aimage%22%3A%22https%3A%2F%2Fppmobileimages.lowes.com%2Ftest%2Fmarketingimages%2F88d19b1e-9603-46fd-9e3a-d9c5c9afee2d%2F50MBTO100MB-GHW.jpg%22%2C%22twitter%3Atitle%22%3A%22Lowe%27s+Home+Improvement%22%2C%22twitter%3Adescription%22%3A%22Shop+tools%2C+appliances%2C+building+supplies%2C+carpet%2C+bathroom%2C+lighting+and+more.+Pros+can+take+advantage+of+Pro+offers%2C+credit+and+business+resources.%22%2C%22twitter%3Aimage%22%3A%22https%3A%2F%2Fppmobileimages.lowes.com%2Ftest%2Fmarketingimages%2F88d19b1e-9603-46fd-9e3a-d9c5c9afee2d%2F50MBTO100MB-GHW.jpg%22%7D&cd%5BSchema.org%5D=%5B%5D&cd%5BJSON-LD%5D=%5B%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%2F%22%2C%22%40type%22%3A%22Organization%22%2C%22name%22%3A%22Lowe%27s%22%2C%22alternateName%22%3A%22Lowe%27s+Home+Center%22%2C%22LegalName%22%3A%22Lowe%27s+Companies%2C+Inc%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22logo%22%3A%22https%3A%2F%2Fwww.lowescdn.com%2Fimages%2Fui%2FLowesLogo_DT.svg%22%2C%22contactPoint%22%3A%7B%22%40type%22%3A%22ContactPoint%22%2C%22contactType%22%3A%22customer+support%22%2C%22telephone%22%3A%221-800-445-6937%22%2C%22email%22%3A%22%22%7D%2C%22sameAs%22%3A%5B%22https%3A%2F%2Fwww.facebook.com%2Flowes%22%2C%22https%3A%2F%2Ftwitter.com%2Flowes%22%2C%22https%3A%2F%2Fwww.pinterest.com%2Flowes%2F%22%2C%22https%3A%2F%2Finstagram.com%2Floweshomeimprovement%22%2C%22https%3A%2F%2Fwww.youtube.com%2Fuser%2FLowes%22%5D%7D%2C%7B%22%40context%22%3A%22http%3A%2F%2Fschema.org%22%2C%22%40type%22%3A%22WebSite%22%2C%22url%22%3A%22https%3A%2F%2Fwww.lowes.com%2F%22%2C%22potentialAction%22%3A%7B%22%40type%22%3A%22SearchAction%22%2C%22target%22%3A%22https%3A%2F%2Fwww.lowes.com%2Fsearch%3FsearchTerm%3D%7BsearchTerm%7D%22%2C%22query-input%22%3A%22required+name%3DsearchTerm%22%7D%7D%5D&sw=8192&sh=4096&v=2.9.92&r=stable&ec=1&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=formPOST",
        BODY_END,
             END_INLINE,
            "URL=https://static.ads-twitter.com/uwt.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC94378c5a25b4438e9652812c8662dc16-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCb285f13c132e491c956c70e69a12e744-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1673849560317&cv=11&fst=1673848800000&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&data=event%3Dform_submit&fmt=3&is_vtc=1&random=192017854&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCdb13880f30134400a2f7f64107823394-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://t.co/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=eb2e20ce-0993-4957-b5dc-c6ba28868c2f&integration=advertiser&p_id=Twitter&p_user_id=0&pl_id=57bb771d-f28d-4ecc-9141-0e35a3d0411b&tw_document_href=https%3A%2F%2Fperf.lowes.com%2F&tw_iframe_status=0&txn_id=nv09u&type=javascript&version=2.3.29", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://analytics.twitter.com/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=eb2e20ce-0993-4957-b5dc-c6ba28868c2f&integration=advertiser&p_id=Twitter&p_user_id=0&pl_id=57bb771d-f28d-4ecc-9141-0e35a3d0411b&tw_document_href=https%3A%2F%2Fperf.lowes.com%2F&tw_iframe_status=0&txn_id=nv09u&type=javascript&version=2.3.29", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://t.co/1/i/adsct?bci=4&eci=4&event=%7B%22contents%22%3A%5B%5D%7D&event_id=f45a3b1f-a8ee-43b7-90d0-9f7f0aa5a84f&integration=advertiser&p_id=Twitter&p_user_id=0&pl_id=57bb771d-f28d-4ecc-9141-0e35a3d0411b&tw_document_href=https%3A%2F%2Fperf.lowes.com%2F&tw_iframe_status=0&txn_id=tw-nv09u-och8j&type=javascript&version=2.3.29", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://analytics.twitter.com/1/i/adsct?bci=4&eci=4&event=%7B%22contents%22%3A%5B%5D%7D&event_id=f45a3b1f-a8ee-43b7-90d0-9f7f0aa5a84f&integration=advertiser&p_id=Twitter&p_user_id=0&pl_id=57bb771d-f28d-4ecc-9141-0e35a3d0411b&tw_document_href=https%3A%2F%2Fperf.lowes.com%2F&tw_iframe_status=0&txn_id=tw-nv09u-och8j&type=javascript&version=2.3.29", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.google.com/pagead/1p-user-list/1031919983/?random=1673849560303&cv=11&fst=1673848800000&bg=ffffff&guid=ON&async=1&gtm=2oa1a1&u_w=8192&u_h=4096&frm=0&url=https%3A%2F%2Fperf.lowes.com%2F&tiba=smart&data=event%3Dform_start&fmt=3&is_vtc=1&random=444568302&rmt_tld=0&ipr=y", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://trkn.us/pixel/conv/ppt=18259;g=universal_lowes_tag;gid=41844;ord=6899637060566151", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "REDIRECT=YES", "LOCATION=/pixel/conv/ppt=18259;g=universal_lowes_tag;gid=41844;ord=6899637060566151;ip=192.3.3.234;cuidchk=1", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC870d0e9d6cb94baeb79a623eb7357ea3-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC93c935fa0c2740a9b70da11429082621-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://trkn.us/pixel/conv/ppt=18259;g=universal_lowes_tag;gid=41844;ord=6899637060566151;ip=192.3.3.234;cuidchk=1", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=barometric[cuid]", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC104d0d2c7a0445efbdae57826a890daf-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCd201afc7d50e4137a0fa2b459dd02aeb-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/core.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC1d450c67f3ef4b82aca6687381dc0234-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC92a5f26d85494b0d9e9b5f299db1bbc1-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCb13d91436b1b48f0ae0cf3693b80b05e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC33cbae1f31904d8aa8ed1fe02e59a66e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.pinimg.com/ct/lib/main.f6304d83.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.agkn.com/pixel/9458/?che=5853354836117342&mcvsid=33059927376531299702538043148294114209", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCfdf360ecad134daa96c3da4d9cba2b9d-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCdf12da8f624746178796d237850e1a64-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC2432c9b179d547588462694a2781211a-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.btttag.com/analytics.rcv?pgNm=Home&trSeg=eCommerce-perf.lowes.com&navStart=1673849553184", "METHOD=OPTIONS", "HEADER=Access-Control-Request-Method:POST", "HEADER=Access-Control-Request-Headers:content-type", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://d.impactradius-event.com/A2490986-6272-4119-80d2-3e11fba8509a1.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC7d67956b41834a4ab0b4cc962b61c059-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("autoZipSuccess", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("analytics_rcv");
    ns_web_url ("analytics_rcv",
        "URL=https://d.btttag.com/analytics.rcv?pgNm=Home&trSeg=eCommerce-perf.lowes.com&navStart=1673849553184",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:application/json;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "Snapshot=webpage_1673849561771.png",
        BODY_BEGIN,
            "eyJ0aGlzVVJMIjoiaHR0cHM6Ly9wZXJmLmxvd2VzLmNvbS8iLCJwYWdlTmFtZSI6IkhvbWUiLCJuc3QiOiIxNjczODQ5NTUzMTg0IiwidW5sb2FkRXZlbnRTdGFydCI6IjAiLCJyZWRpcmVjdFN0YXJ0IjoiMCIsImNfY291bnQiOiIwIiwiY29fY291bnQiOiIwIiwidG90UkQiOiIwIiwiZmV0Y2hTdGFydCI6IjE2NzM4NDk1NTMyMDAiLCJkb21haW5Mb29rdXBTdGFydCI6IjE2NzM4NDk1NTMyMDAiLCJjb25uZWN0U3RhcnQiOiIxNjczODQ5NTUzMjAwIiwic2VjdXJlQ29ubmVjdGlvblN0YXJ0IjoiMCIsInJlcXVlc3RTdGFydCI6IjE2NzM4NDk1NTMzODMiLCJyZXNwb25zZVN0YXJ0IjoiMTY3Mzg0OTU1NDY4OSIsIlJFRSI6IjE2NzM4NDk1NTQ3MTYiLCJCUFQiOiIyNyIsImRvbUxvYWRpbmciOiIxNjczODQ5NTU0NzE2IiwiZG9tSW50ZXJhY3RpdmUiOiIxNjczODQ5NTU3MTE0IiwiZG9tQ29udGVudExvYWRlZFN0YXJ0IjoiMTY3Mzg0OTU1Nzk1MSIsImRvbUNvbnRlbnRMb2FkZWRFbmQiOiIxNjczODQ5NTU3OTU2IiwibG9hZEV2ZW50U3RhcnQiOiIxNjczODQ5NTU4NTA5IiwibmF2aWdhdGlvblR5cGUiOiIxIiwicmVkaXJlY3RDb3VudCI6IjAiLCJwYWdlVHlwZSI6IkdDUCBIRWxpeCBTdGFibGUiLCJwYWdlVmFsdWUiOiIwIiwicGdUbSI6IjUzMjUiLCJkbnMiOiIwIiwidGNwIjoiMCIsImRvbSI6IjM3OTIiLCJmQnl0ZSI6IjEzMDYiLCJzc2wiOiIwIiwiZmlyc3RQYWludCI6IjIwMzUiLCJmQ1BudCI6IjIwMzUiLCJmbXAiOiIwIiwidHRpIjoiMjMzNSIsImx0X3R0aSI6IjAiLCJmcHNfdHRpIjoiMjMzNSIsImZwcyI6IjAiLCJGSURzIjoiMCIsIkZJRGQiOiIwIiwiTENQIjoiMjMyMSIsIkNMU2UiOiI1NTkxIiwiQ0xTIjoiMC4wMjAxODg2MjEzNDg4ODU2MDUiLCJUQlQiOiIwIiwiU2NybkgiOiI0MDk2IiwiU2NyblciOiI4MTkyIiwicFdTeiI6IjM5ODQyOCIsInBTeiI6IjExNDAzOTQiLCJJTUFHRV9TSVpFIjoiMTY4IiwiSlNfU0laRSI6IjMyMzU4NCIsImVsZW1lbnRDb3VudCI6IjEzNSIsImNhcnRWYWx1ZSI6IjAiLCJPTnVtQnIiOiIwIiwib3JkZXJUTkQiOiIwIiwiZVQiOiI1Iiwic2l0ZUlEIjoibG93ZXNucDUwMHoiLCJ0eG5OYW1lIjoiZUNvbW1lcmNlLXBlcmYubG93ZXMuY29tIiwiY2FtcGFpZ24iOiIiLCJBQiI6IkRlZmF1bHQiLCJEQ1RSIjoiZWFzdCIsInRvcCI6Ii0xNjczODQ5NTU4NjI2IiwiYnYiOiIwIiwiYnZ6biI6IkNocm9taXVtLTEwNCIsIm9zIjoiTGludXgiLCJkZXZpY2UiOiJEZXNrdG9wIiwiYnJvd3NlciI6IkNocm9taXVtIiwidHVsIjoiMCIsIkVVT1MiOiJMaW51eCA1IiwiY3VycmVuY3lDb2RlIjoiIiwic0lEIjoiNjk5ODkzNDI5NzkwOTM1Nzg4IiwiZ0lEIjoiNjk5ODkzNDI5NzkwOTM1Nzg4IiwiU0hpIjoiNDA5NiIsIlNXaSI6IjgxOTIiLCJDU0lEIjoiMCIsIkNWMSI6IjdiOTM0ZGU5LWU4ZGEtNGI3MC1hNWE0LWMyOWVkM2ZhMDMxNiIsIkNWMiI6Im51bGwiLCJDVjMiOiIwIiwiQ1Y0IjoiMCIsIkNWNSI6IjAiLCJDVjYiOiJzdGFibGUiLCJDVjciOiJDb29raWUgTWlzc2luZyIsIkNWOCI6IlppcHBlZCIsIkNWOSI6IkV4cGVyaW1lbnQgT2ZmIiwiQ1YxMCI6InVuZGVmaW5lZCIsIkNWMTEiOiIwIiwiQ1YxMiI6IjAiLCJDVjEzIjoiMCIsIkNWMTQiOiIwIiwiQ1YxNSI6IjAiLCJDTjEiOiIwIiwiQ04yIjoiMCIsIkNOMyI6IjAiLCJDTjQiOiIwIiwiQ041IjoiMCIsIkNONiI6IjAiLCJDTjciOiIwIiwiQ044IjoiMCIsIkNOOSI6IjAiLCJDTjEwIjoiMCIsIkNOMTEiOiIwIiwiQ04xMiI6IjAiLCJDTjEzIjoiMCIsIkNOMTQiOiIwIiwiQ04xNSI6IjAiLCJDTjE2IjoiMCIsIkNOMTciOiIwIiwiQ04xOCI6IjAiLCJDTjE5IjoiMCIsIkNOMjAiOiIwIiwid2NkIjoiMCIsIkxUTSI6IjE2NzM4NDk1NTU1MTQiLCJXQ0R0dCI6ImMiLCJOVlNUUiI6IjAiLCJSViI6IjAiLCJjb2xsZWN0QXQiOiIxMDAiLCJDbXBTIjoiRGlyZWN0IiwiQ21wTSI6Ik5vbmUiLCJDbXBOIjoiIiwiUmVmVVJMIjoiIn0=",
        BODY_END,
        INLINE_URLS,
            "URL=https://s.yimg.com/wi/ytc.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCdd5eeb1392ee4016884af056eecbd0a7-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ct.pinterest.com/user/?tid=2615619520270&pd=%7B%22page%22%3A%22hp%22%7D&cb=1673849561199&dep=2%2CPAGE_LOAD", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ct.pinterest.com/v3/?tid=2615619520270&pd=%7B%22page%22%3A%22hp%22%7D&event=init&ad=%7B%22loc%22%3A%22https%3A%2F%2Fperf.lowes.com%2F%22%2C%22ref%22%3A%22%22%2C%22if%22%3Afalse%2C%22sh%22%3A4096%2C%22sw%22%3A8192%2C%22mh%22%3A%22f6304d83%22%2C%22is_eu%22%3Atrue%2C%22architecture%22%3A%22x86%22%2C%22bitness%22%3A%2264%22%2C%22brands%22%3A%5B%7B%22brand%22%3A%22%20Not%20A%3BBrand%22%2C%22version%22%3A%2299%22%7D%2C%7B%22brand%22%3A%22Chromium%22%2C%22version%22%3A%22104%22%7D%5D%2C%22mobile%22%3Afalse%2C%22model%22%3A%22%22%2C%22platform%22%3A%22Linux%22%2C%22platformVersion%22%3A%225.4.0%22%2C%22uaFullVersion%22%3A%22104.0.5112.124%22%2C%22ecm_enabled%22%3Afalse%7D&cb=1673849561207", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/bat.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCe44d3816ae7a4744b8abaebc22199cbf-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://ct.pinterest.com/ct.html", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://s.yimg.com/wi/config/10184583.json", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Origin:https://perf.lowes.com", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC0b59851c468e4bf6aa259909a5ec47c3-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/tag/tag.js?site=51200453", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://bat.bing.com/p/action/5668750.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=c514055e-c170-4c3f-93fb-1513b2cf33e7&sid=c8aa0ca0956411ed8fbd7d71a454652b&vid=c8aa1250956411ed8eb6efb03452c98f&vids=1&msclkid=N&pi=0&lg=en-US&sw=8192&sh=4096&sc=24&tl=smart&p=https%3A%2F%2Fperf.lowes.com%2F&r=&lt=5442&evt=pageLoad&sv=1&rn=732518", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://bat.bing.com/action/0?ti=5668750&Ver=2&mid=c514055e-c170-4c3f-93fb-1513b2cf33e7&sid=c8aa0ca0956411ed8fbd7d71a454652b&vid=c8aa1250956411ed8eb6efb03452c98f&vids=0&msclkid=N&pagetype=home&ea=event_name&en=Y&sw=8192&sh=4096&sc=24&evt=custom&rn=15582", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID;MR", END_INLINE,
            "URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Mon%2C%2016%20Jan%202023%2006%3A12%3A41%20GMT&n=6&b=smart&.yp=10184583&f=https%3A%2F%2Fperf.lowes.com%2F&enc=UTF-8&yv=1.13.0&tagmgr=gtm%2Cadobe", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.clarity.ms/tag/uet/5668750", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCc9e1911aff81461ea7436df6c59bc55e-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC2eeb52808948403580d7e7339222c656-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/51200453/configuration/applications/taglets/.jsonp?v=2.0&df=undefined&b=undefined", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.clarity.ms/eus/s/0.7.1/clarity.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=CLID", END_INLINE,
            "URL=https://c.clarity.ms/c.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://c.bing.com/c.gif?ctsa=mr&CtsSyncId=1C95546C4C414F47B20F93549EB62E8E&RedC=c.clarity.ms&MXFR=28B4B90EFE6C6A1B3852AB95FA6C645C", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=MUID", END_INLINE
    );

    ns_end_transaction("analytics_rcv", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect");
    ns_web_url ("collect",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849562058.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_main_url_1_1673849922371.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://nebula-cdn.kampyle.com/wu/560961/onsite/embed.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCc0e1c16e23e24143a3159f92c82c7423-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/setting/accountproperties/?cb=accountSettingsCB", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://publisher.liveperson.net/gs/js/gk_sandbox.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/ui-framework.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/UMSClientAPI.min.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/lpChatV3.min.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/surveylogicinstance.min.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/le-campaigns/zones?fields=id&fields=zoneValue&cb=lpZonesStaticCB", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://c.clarity.ms/c.gif?ctsa=mr&CtsSyncId=1C95546C4C414F47B20F93549EB62E8E&MUID=054F1D68521E6EC421570FF353946F34", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=SM;MUID", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC1381139899fb47edbfb0d1bdccc7bf36-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://nebula-cdn.kampyle.com/us/wu/560961/onsite/generic1668410268431.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data=eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiODE5Mng0MDk2Iiwic2Vzc2lvbl9kdWEiOiAiU09BU1RBIiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJMaW51eCB4ODZfNjQiLCJwYWdlX3RpdGxlIjogInNtYXJ0IiwicGFnZV91cmwiOiAiaHR0cHM6Ly9wZXJmLmxvd2VzLmNvbS8iLCJ0cmFja2VyX3R5cGUiOiAiamF2YXNjcmlwdCIsInRyYWNrZXJfdmVyc2lvbiI6ICIyLjIuMjMiLCJldmVudF9uYW1lIjogIm5lYnVsYV9wYWdlX3ZpZXciLCJldmVudF90aW1lc3RhbXBfZXBvY2giOiAiMTY3Mzg0OTU2MTgzNiIsImV2ZW50X3RpbWV6b25lX29mZnNldCI6IC02LCJ1c2VyX2lkIjogIjE4NWI5MzU2MmRjNjFlLTAzMGVkOTY5NWJmY2JhLTUzNGYxNTEyLTIwMDAwMDAtMTg1YjkzNTYyZGQ4OGQiLCJlbnZpcm9tZW50IjogImRpZ2l0YWwtY2xvdWQtdXMtbWFpbiIsImFjY291bnRJZCI6IDM5MjMzNywidXJsIjogImh0dHBzOi8vcGVyZi5sb3dlcy5jb20vIiwid2Vic2l0ZUlkIjogNTYwOTYxLCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7Im1kX2lzU3VydmV5U3VibWl0dGVkSW5TZXNzaW9uIjogIiIsIkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2FtcHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICI5ZWRjLTA1YWUtMjZlMC04YjY1LTg1ZjktNmI5My1jN2JiLWJkODkiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiMTY3Mzg0OTU2MTgyOSIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJTVUJNSVRURURfREFURSI6ICIifSwiY29va2llX3NpemUiOiAxOTk4LCJrYW1weWxlX3ZlcnNpb24iOiAiMi40Ny4zIiwib25zaXRlX3ZlcnNpb24iOiAiMi40Ny4zIiwiaGlzdG9yeV9sZW5ndGgiOiAyLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjczODQ5NTYxODM1LCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZCI6IG51bGx9Cl19", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC745bb346a616493ebc35e152d5da27f8-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/desktopEmbedded.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://login.dotomi.com/profile/visit/js/1_0?dtm_cid=2621&dtm_cmagic=cc7090&dtm_fid=101&dtm_promo_id=1&cachebuster=1807644198513458", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCaf33512d193448ce98fcd844df307170-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LLODOWS854.json", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854JDL.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.480app.com/ads.js?r=5540449551601248", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://colrep.sitelabweb.com/chpdata/?d=5cjKAQ9n2_ZdQ8vwZ170G_Za6xjzLN0xTLmJxh0jIE7litlc7P0gIE4kjcbYD_1wI0AljcwJwp0jL9AzGpnJwUwx5MJqWtiTDxJy6Ew~nWlYCX9gHZ7xHk~N7kxh1Z7xnk~N7omwuJzx24jPfxpw5Uw~mMcdQdnjJxZpEUMU731h1ZCxXc~Mcsui2EwwmP~Mt32hYZtwjLmNt-zi2QFlTsmON-5dcVrnVhEQelUkHZywXh4eRplwcNz~2P~MMx1yLlunTW_MQszgLJuxjkoZckwhZRuwjcvNc_ihoZrwWowMfs2dcNzxDLrZQc1sodwlmcnMtdjhLMFlWlZNflmiIE5w2tbOcdkhYZ40jLmJw4ytLYJzHlrcRklgrEvkksaMuxwtMJwjmGkdCtzfbN3~SonRsx0tLd6nWTbaglJwbZvw3laZNPwdbp7v2hkdfU0xckJtWQedQtkdII4s3lXdQtzdbx7nXlndfsmxcMJxm_hcCsmwcJCnTVbcwtwwuJAnStnacPx&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCc299a76364874cf087ef57d2ab0c0432-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://vwonwkaqvq-a.global.ssl.fastly.net/LODOWS854.cjos-module.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.19.0.0-release_5079/storage.secure.min.js?loc=https%3A%2F%2Fperf.lowes.com&site=51200453&env=prod&isCrossDomain=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_secure_storage/3.19.0.0-release_5079/storage.secure.min.html?loc=https%3A%2F%2Fperf.lowes.com&site=51200453&ist=sessionStorage&env=prod&isCrossDomain=true", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC1aab8922c0fc46c3ba5c949e21079e75-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://login-ds.dotomi.com/profile/visit/final/js?dtm_user_agent=SOASTA%2C%20SOASTA&dtm_country_code=US&init_wl_code=1&dtm_form_uid=520606873415140019&dtm_dma_code=511&dtm_cmagic=cc7090&cachebuster=1807644198513458&tcflag=true&dtm_cid=2621&dtm_fid=101&dtm_use_flash_cookies=false&tp_user_assignment_type=0&wl_domains_key=&dtm_zip_code=20011&dtm_promo_id=1&dtm_cookies_enabled=true&fp_assignment_type=-1&dtm_user_dc=iad&dtm_current_dc=&dtm_id_assgn_type=0&dtm_state=DC&dtm_consent=true&dtmc_customer_type=&dtmc_known_state=&dtm_cookie_id=null&data_object_type_code=1&canonical_url=https%3A%2F%2Fperf.lowes.com%2F&dtmc_ref=&dtmc_loc=https%3A%2F%2Fperf.lowes.com%2F&cli_promo_id=1&dtm_items=%2522%2522&dtmc_coupons=%2522%2522&dtmc_bypass_channel=%2522%2522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=DotomiUser", END_INLINE,
            "URL=https://1062825.collect.igodigital.com/collect.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC71e2368b60454a418c9682f01fbb2810-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCde69e50a8e8d46bc8225a247613175d9-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/domainprotection/refererrestrictions?cb=lpCb5447x76294", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?&cb=lpCb74047x78570&t=sp&ts=1673849562404&pid=5824443698&tid=2727292249&pt=smart&u=https%3A%2F%2Fperf.lowes.com%2F&sec=%5B%22lowes%20%3A%20hp%20%3A%20hp%2Chp%2Chp%2Chp%20%3A%20lang%3Den-US%20%3A%20%22%2C%2299999%22%5D&df=0&os=2&identities=%5B%7B%22iss%22%3A%22LivePerson%22%2C%22acr%22%3A%220%22%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://insight.adsrvr.org/track/pxl/?adv=glm0tyx&ct=0:lzeysd3&fmt=3", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RCbe238a1ca1c941378fd2ab0e580db9d1-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://assets.adobedtm.com/0c85fa4ac103/23b3840ffae3/1b71d193829a/RC0e6143b64b1f44edaa0f732ef3a17694-source.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://dpm.demdex.net/ibs:dpid=903&dpuuid=b0586724-f7ff-4eb1-abeb-c7f059147ac2&gdpr=0&gdpr_consent=&redir=https%3A%2F%2Fmatch.adsrvr.org%2Ftrack%2Fcmf%2Fgeneric%3Fttd_pid%3Daam", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=demdex", "REDIRECT=YES", "LOCATION=https://match.adsrvr.org/track/cmf/generic?ttd_pid=aam", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb61940x12031&t=uc&ts=1673849561927&pid=5824443698&tid=2727292249&sdes=%5B%7B%22type%22%3A%22ctmrinfo%22%2C%22info%22%3A%7B%22accountName%22%3A%22%22%2C%22userName%22%3A%22w.%20amherst%20lowe%27s%22%2C%22companySize%22%3A%221883%22%2C%22socialId%22%3A%2214228%22%2C%22ctype%22%3A%22DIY%22%2C%22cstatus%22%3A%22guest%22%2C%22customerId%22%3Anull%7D%7D%2C%7B%22type%22%3A%22personal%22%2C%22personal%22%3A%7B%22firstname%22%3A%22-%22%2C%22lastname%22%3A%22-%22%2C%22contacts%22%3A%5B%7B%22phone%22%3A%22-%22%2C%22email%22%3A%22-%22%7D%5D%2C%22company%22%3A%22-%22%7D%7D%2C%7B%22type%22%3A%22mrktInfo%22%2C%22info%22%3A%7B%22affiliate%22%3A99999%7D%7D%2C%7B%22type%22%3A%22pagediv%22%2C%22divId%22%3A%22liveperson-persist-button%22%7D%5D&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_re/3.53.1.0-release_5134/jsv2/overlay.js?_v=3.53.1.0-release_5134", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_re/3.53.1.0-release_5134/jsv2/UISuite.js?_v=3.53.1.0-release_5134", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/le-campaigns/campaigns/3422484330/engagements/3807621138/revision/4439?v=3.0&cb=lp3807621138&flavor=dependency", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb20424x60147&t=pl&ts=1673849562415&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://match.adsrvr.org/track/cmf/generic?ttd_pid=aam", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=TDID;TDCPM", END_INLINE,
            "URL=https://usermatch.krxd.net/um/v2?partner=ttd&partner_uid=ttd&gdpr=0&gdpr_consent=&ttd_tdid=b0586724-f7ff-4eb1-abeb-c7f059147ac2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/engagement-window/window-confs/3438889630?cb=lpCb56244x28334", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat");
    ns_web_url ("clickToChat",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;akaalb_perf_single;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;RT;LPVID;LPSID-51200453;prodNumber",
        "Snapshot=webpage_1673849562823.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"3","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:42.719Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"5","scenarioTest":"","collectionTest":"","eventId":"08fbc7a3-3573-4352-91ed-23873ff4683e","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":0},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}],"chatEngagement":{"livePerson":{"campaignId":3422484330,"engagementId":3807621138}}}},"track":{"livePersonRequestType":"invite_true","livePerson":{"campaignId":3422484330,"engagementId":3807621138,"monitoringSessionId":"7UdgakA_TZeXETWPpRs-_g","visitorId":"VlNTkxMjNmZWQ2ZTUyZjNk"},"linkName":"lp_invite_true"},"path":"/link/clickToChat","method":"post"}",
        BODY_END
    );

    ns_end_transaction("clickToChat", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat_2");
    ns_web_url ("clickToChat_2",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;akaalb_perf_single;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;RT;LPVID;LPSID-51200453;prodNumber",
        "Snapshot=webpage_1673849562823.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"1","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"8192x4096","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"790","viewportHeight":"473","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:12:42.734Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"6","scenarioTest":"","collectionTest":"","eventId":"d55ee632-8f91-4a1a-bf49-7b87daa0cc04","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":0},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}],"chatEngagement":{"livePerson":{"campaignId":3422484330,"engagementId":3807621138}}}},"track":{"livePersonRequestType":"qualified","livePerson":{"campaignId":3422484330,"engagementId":3807621138,"monitoringSessionId":"7UdgakA_TZeXETWPpRs-_g","visitorId":"VlNTkxMjNmZWQ2ZTUyZjNk"},"linkName":"lp_qualified"},"path":"/link/clickToChat","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.lowescdn.com/seo/ChatButton.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/seo/ChatAvatar.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://beacon.krxd.net/usermatch.gif?kuid_status=new&partner=ttd&partner_uid=ttd&gdpr=0&gdpr_consent=&ttd_tdid=b0586724-f7ff-4eb1-abeb-c7f059147ac2", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("clickToChat_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat_3");
    ns_web_url ("clickToChat_3",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;LPVID;LPSID-51200453;akaalb_perf_single;akaalb_perf_dual;RT;prodNumber",
        "Snapshot=webpage_1673849563012.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"2","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"1483x555","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1483","viewportHeight":"427","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:16:53.796Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"7","scenarioTest":"","collectionTest":"","eventId":"7f23b524-76bc-47a5-ade4-aeffb0bc7a2f","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":0},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}],"chatEngagement":{"livePerson":{"campaignId":3422484330,"engagementId":3807621138}}}},"track":{"livePersonRequestType":"invite_accepted","livePerson":{"campaignId":3422484330,"engagementId":3807621138,"monitoringSessionId":"7UdgakA_TZeXETWPpRs-_g","visitorId":"VlNTkxMjNmZWQ2ZTUyZjNk"},"linkName":"lp_invite_accepted"},"path":"/link/clickToChat","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://nova.collect.igodigital.com/c2/1062825/track_page_view?payload=%7B%22title%22%3A%22smart%22%2C%22url%22%3A%22https%3A%2F%2Fperf.lowes.com%2F%22%2C%22referrer%22%3A%22%22%2C%22user_info%22%3A%7B%22email%22%3A%22%22%2C%22details%22%3A%7B%22Source%22%3A%22DESKTOP%22%2C%22cust_type%22%3A%5B%5D%2C%22known_state%22%3A%5B%5D%7D%7D%2C%22child_ids%22%3A%5B%221060828%22%5D%7D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb31148x20004&t=uc&ts=1673849562863&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk&sdes=%5B%7B%22type%22%3A%22impDisplay%22%2C%22campaign%22%3A3422484330%2C%22engId%22%3A3807621138%2C%22revision%22%3A4439%2C%22eContext%22%3A%5B%7B%22type%22%3A%22engagementContext%22%2C%22id%22%3A%221%22%7D%5D%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("clickToChat_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_2");
    ns_web_url ("collect_2",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849574362.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_2_main_url_1_1673849922378.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://mjca-yijws.global.ssl.fastly.net/LODOWS854_SE.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://cdn.480app.com/ads.js?r=3431939529617636", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://colrep.sitelabweb.com/chpdata/?d=ZxkRwpHT2godYpv1o1FhGgoaEcj4aN8cTS1J3N0qYUERjArcZQ9oIIMST6AJ2Rw3a0RQzn7NEck3I1BhG7qc~cu2MB-TUBrblD2tbRDNmX-cYRvqYI2g2s5PkIyoYcMNnordV43oHZBgmBsan89~rl8cS~zbnh0zacRXEaJTJhTpIUINn~qc-4xoX4MQS~nb-4ypIYKNmonPkI2o2MMRDA6N-I4o2k2hWfEUIDBv6RTNm7mcIZ43LVAg2B~b-4wkshJhWBpPnJinYQFR2smN2YwnLJ~cjr2YFpkoLN~QGspMYVjo7F~Nnw6anU9nLQCcTn0Y2VmoIN1Qzb7NYVinogJQGj8N2Jh~YkDcTzrcKpkqYR0bTwoNKb2zoIEQWn6YFo1~LMJb2zAMkJj~rYNQWr7J3F2qYE2eHkqZ-5o3MRCgyv2QjYysnUEVncqc2bu1L9LcXnzYKDtkYJYNnsqZLM911Z5g0BzZ2Zj3LV0TTbra3Rfz79Jfns1ek5V1rlIcWrqM-FT3LFIcXnrYnVi1L9-e2w1PkEmzaRFhHBxZnNs17N7cXjEMUcs221IgnwqJ3NzqaZzfHoqJ2RyqXULUiv1M3MynIIENTj1JkRBpXUEUyv1M3MynIIFNTj1JkRBnXULVC~zc3b9nHZFcWTkZYJ0zY12Z2sTdL9o~LcDZ2I6YlRY3bZJXn7fVE5BtqA9RV7SeXN1wLJEb1wzOoZxuah0WHX_T3N3oJ59c2T~bnwt~JNgSXsmTo9Or5IFcHkrd2Rf0KIKeX3BYLta0sZEfG7oVn9Ov2kFiEA5NnM2s7tHYDBrbkhRvshiZHoNT-Y24ZkJXln8RWC5ubVLhj29bYpiw7lm_lcUcJpsxq8JZyS6WlR-pbp~STB_Mlhuu8IKQEA6W1M20p8CXVcYNoVwxrR-emwNToNvoZkIXka6VYM3urZ6RHsmaLpP0pZZXkS7bnRwsbFOQF7MVntvrsAMeGopMVhQ~MULhWkSbYI10p89Wlw2MkZ0vYRxV0gWTkZP1Zxx_WM0VKDwxpNLeXr6Topfs5FhXjw8e0-wsqEEemE7Tkoy1YdifG~WVLUwu8JMekM0W1MysLIN_TBdNZR0wb5hZEXRToNBnKh_Ylg2RYhxx_FHQHbAQ3tRwMMJbX~9bXoxn_ULWG_yYKZy4sdCZXsYakcIvqFCfGj5WmC1s6gM_ksvdkNRpa9cZH7mS1Iz1KlfWXf6eoh1z7kLhTn9V2Zls2cFYD7HaYJhuqJBfUE1UWVv4YhIZW7pb39VxqBIg2kSVmQ11rcLYDBdbkg4wsJ-Q37RUVVC2aJdSVb5RKR6zqRFg3~1U2xk1YcEcHgHa1DhrpwL_Ho6W3cP32NzUm3Te3UxxsVTQENSVnZysMYJ_nBreoZhwbJsek~TWkl01J59Vlk2aohvzbpscj3WbYcRwIMF_Tv8a05NxaoDemz0TlRqnYJde3BkRL9NxadTRUNyR1Ey1bZTXUozM~cy~bBBgnrEJ3NpqYI2gG~5PkI2nV_r&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://colrep.sitelabweb.com/chpdata/?d=pG9XMwzTk82mNdEIvs_15cXuyJwr5T4xV8TpQZEn0oJ06S0l0MtnzWYddHWTcJRqy_JNYOT5TJcmyUI9cHWHYJRqy_JNYOT5TJcmyY4ViM2HZblulc_I6R0h0NAmlHlJiIXucaUhutsNGiWZHJcmyEVNw5S-iRA03h2UJVyxDMxvhU~Uh5i-cQQ03gZUJRnq0cDrpX45i2TpbJRvB_JdZOTlDcCzzY4leLnusb11uu2UJRixEQcilI2QV60xPMiulc_J4hmcEc6yyHkUi9S-iQg0ycdN6h3q4bC_zEVIh2TuqJRAC_JIJh2yEcCEvXpNyL30YdA0ycZUKVTh0NAulHmMV5jqTbk5lovR6dFq0cDrpX45i2TpbJRvB_JdZOTlDagrJXoZVH3yPZCUptvQ6Rjl0MAilIWIf2T0tJRAE_JJ_OTlDcCAvYJBZLm9JZVE0pM5KfWc9c6yyHkUi9S-iQg0yccFPcXqHUCjmUXBhKWuPRVE0kuVKh2DAbxrMWZNl2TpbJRvB_JVZRCxIRMyyL~Uh5mDZbk15hNhNZ2yEcCEvXpN5KXufJRqy_JNYOTyTMMy1MEUh9y-bMlvosvBNcXm2RgA0P4ViM2HZblvMrNNNOTlDJcrBEVVx5C-gRA0ygoUJRmyzYgvlY2VpNFuPc1vpsu5KYGDEdMyyHkUi9S-gQhildKQ6Rkp0Mtn3WYtZHn0kRVE0kuVKh2DAbxrMWZNl2TpbJRvB_JVZRCxIRMyyL~Uh5nibaUvltuNGiXuWeRvTUZNiKWgYc~UptvQ6Rjl0MAilIWIf2T0tJRrD_JIJh29AcRflYmVpNFuPc1vpsu5KYGDEdMyyHkUi9S-gQhildKQ6Rkp0MtnjUY5lLHHueFzTpNNKfWc9cAQpY5QV5jpPM~mldKIHOTyVJc6EEVdz2T9tJRAE_c5Ed3uyZ7WMO2R8E1tjNRymucVJUThILt9xEoJd8TpjNh4mouIWRT-KM790JVUn5TCiOQ51oJ1pY0ijVOimWIFiAXDfZUdzrM9FUTd1eRz1WYQuHWpaNBu3p6EPdTdBYwnmIFNT7WxfY0qwp6QHdGpKYfmmZZVZIDY_ZBjlcpF3dG-HMCyzHFYlIGpbOB0wo_cPcWi0OcjlIkZiKWxoNEzhdMMQdj0zMtmxT-VT7T0OYx1jp_kIRWq1ZtDxUFYWMH3oMQ5otcV7UW9HdRfzEVNw2TqvJRrGt6VJdiZ7bD6lY~5TL2YPMi4mu6V8hjVAJwEzNY5WIWufZUy9c2ZBh1c~bDzuZJJq8V0YaVzlp2UJRFqHYgvlY~ZhKTYaJljmu30JSg1q&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://colrep.sitelabweb.com/chpdata/?d=upbFgO_Rba2V2dqKvQ71Q9Xs5JN75wUxMaTY5cM~9A7Qh~i~Kc_m0k9gh_D~5Ydl1Qs0ezzzTJNB0nx9cmGkHJLfwRfMq3W~HTfJJ0iENnnRFYci9A6ZeAHrZM3Ewk9QNo2oLP1B07A9dCW3DbKnmzxxMVmLCZd-hNN1140soVd64luQNpmkHP1o197gcwmkIP324l9YNj2YUM163ANgh-TvSM3R3mtZdjTHnTapTJdESCGgNR7S0xx5_mWPDP1kmTgViCWrZY62xleMfkGUNZ1kwMAJS~Do7O6A0wUIXkGfFZqw3MvISFXwDZpmwxeBMYzV1Zq60ASUezDzQZs2ymeUXjjsNY4plCsFR~i~Na6A9lhRIZWbOZI7iA7Ic9zw7O3FkwPVKkj~GM4xmN7kcADzActI9ktZPomk5P4G0SgBewToaJ33GhuJsoGkHZHfsQTdREyX7bemlkAYNpGk6cIbv7Ale3WXAZ670xxQlYCo9cbjjQTV_FHkVP5FuzyRMkCjHMpx0MwRREy~5Zs3s~UNSkXYUMm7hNgNhGWN9YNhvwUtMojGFJLWzDwRdFWvAcO69xCFTo2j5bMt2DsASE2wHXeBh0hElhVgmdpN0Bedx6GgWaOF5sBIfnEteSKN4PcAZzTcjS3xq0f1Won3oe4-NB9dBFUFRU7WPjv4_nFfMb2NwFglg4zBVNrOkrfpfo3-ITafjI9RVC0FlafV0wTZ8hTZXM4tzSvxw1UBdd_xuxS53fWBmRaOy9uhc7WfNNtEymf5bbVtRVoO3RTle40X7V57awBIcpzcMb33XHglj~ETNeNSSsgV1p2~Gd3p0M7NB2lwLberxqUNKdXQGQ12yR9Rs5EFTeq3zrURLflgiVLx3Tgoh92NtWsrvrhIgYXkrZ33RSSkcFVgRT6hTuBFLoDRLSabJGfx_EkFJO6mxsxN1Yn-NZp3QKuNG9lg5dfWwrv5whTcEeqs3NgptFkBqdrB3lApdnEcjL2KxANJm7Wo6ZfIx0A5v_DciTq-mABljAFwpW5BKqv5do2BFSJbKGfpXGGkMN6hRtTJqZ0oOZcxWJBBT9TwMbrBsufoXdUZAY4-IR9Rs5GgPeqZ5zgpokjcrS3N2HTAhAFgjSs_q0f0dnWBadaKPSeQd-UFRbqFPjvodnFgBWqxiMTYd5EkROsnXlBpbczQNUI3QPudw5moLdfWwqgV8eFcNQKpuAglw2E~wNMS31gV5emH3M2txAudc31jQY_x2owYZ_TZ3T4tGTd0l50XsUMBOtApyoEZCM37sGdNj-VkhMtWJsgV1p2Hac4tDMNVCz27Rd_35uxNJk3nGdJfSBRhx6EFTcfWzrS5Kflg~aaa0SNFiDVwwTtW2lf1_pmPpVatVB9heCVkVcpxawwZZYzZZV4tMGt0bAUWRcMBBsfpfqEZITb7kJtNG81jQdfW0ugV7dGHOc3KiTAxB6F~yQcJ3xUN6gnR6Y13yS8dv7WsGUtWu-wUZqVchV3pCPSxk5FgbV6dSqv1JnDbHNr-OJf5k2Fk6R3xNtBZ2bjZec4tEJ81Sz0XRbrBsufoXdUZAY37IStN26VkAMOW60gV-gWLbVLpPRfwh90XtWMSzrCVzqlgmeJfSCudVEGosMfxowBFLn23BSabfCvxa9kAHcMBOxSpfpEgITaKPPNJZ52nVZsg0qBZLhkoEdqw4SBBA6jwrM4OK0xRLjn-mRK3yRRNl9lghN6hvwBFYpW7_QabCSfoj5jwsaLSx~CUhpFfFN2fYJRdNzGnRV7xWtTFqp23HZabTHvx8zEBJbrB5~SoXhkkAY4-KR9RCA0FTQcFzzeVwkzcrR3OyJt1k9VkVU3-uoS59qWHrRp7RT9R_FEMVc_-PqApUolgBVJbtNA1n1UBed5BRtS12cjRPTb3VJBp-9UXkL3~tkuEXezR6Y37KQv19CU~rL5SG1gpgcH35MIKtR9RQ4GwLU3~wxgFrpktmQajnQNAiFVwvVMOkpwlJmzYFM4SjG9Qd11FiNp7SxCd-qG3eYae5MA1Vz1~CL4BWqBpuknxFZpJtBvpL-FFEL6g2zfl5gX3~SpOiBNFb3UTvVrOz0v0ZYHxbZ3OSCudn~FBUT3BSqA1YoGHQSJawMSh_4G2KN5BWuv9frntOZ3s5J8dB7kT9esWxuwFxhUxRSobYBv9B2F~eeMOG1hRQdn3jL2ezQeRZEUEKR4NyrTYYZW-RSLtYESxsFDvVaK21qv1KrmGMc37MKvp9zUFMS7_L1uVrZ1tOepO4KslQ3k~FM_34rglJj3tQQK62BRd~9kTEfON2rS1~kmHrSJe1Rfxb7Ug6S4Oz-v1WcDV_a2KYTf1a91FRcfSkjwlMrjYQVKGjGwBg4DbRN4N2twl2b2HOaoKPJvp020Xob_FxlgJudVtEd2jZQwh66lFee5BvxA4emFO5cL3wQTJh0S~Ma3myhDBNpDGHNV8_&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://perf.lowes.com/LowesSearchServices/resources/autocomplete/v2_0?searchTerm=&store_location=&region=&userType=&dbidv2=7b934de9-e8da-4b70-a5a4-c29ed3fa0316", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;_lgsid;akaalb_perf_dual;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;LPVID;LPSID-51200453;prodNumber;akaalb_perf_single;RT", END_INLINE,
            "URL=https://colrep.sitelabweb.com/chpdata/?d=6hvJG82Li2ZTdJQvWQ16aGxpaDQj~pNAIT3dJh-0YQImSjZdccf9gyI61jafJvKwKb0QDzWEMlIkgt1pKGqicPeut8B3iU3WbXp2MDR4Gmn0cXEvkmI4M2UgPNw3XAQiPndddZK3gxZyHmfUae19Fsl7QSuCbpN0aAc39EIBTjjTe4UMcnsVcmgxH84DJSFob~tyjXYM2mQNPNw2WwMmTD-uN3Y4gikpIW8rU96BA7RSAm1-cKE4gwVoJ2usbQ6w_ehNxW3UPZviG9Q6K27nN1Lwh_J0IjTdYtSkWDNPSGhbMbkjgnFlznPjaeN92MQBQThFY4AmQtNf2zJ-NyXicagNfGboNpvhT9k4WTEscJckkmR2HTYONyE2ggIeSWcuYJ21s-M4C2SnMbCjFsYMDWlMJ5w2S7EgHHSiZQ7ou8RGwyniQV8yLPU5Ontrc1Pux_9NIXPZYyrtSQJyPnhcZPb9vhZsH0faZvSjKMV-GTW4a56fai9xIn_ve97VsdlMsWjVMmrTYyF9WX2sYmIix_91K2YcPNsmgTRfjH0jZrcsvnNuDXCrMLWsJ31HUnq3J52zSAZbIHWiJTByua0GcngVbYpkSDRqMWd0aWcYz3lQElYVVzFWgQJujXhgT56wooZ36kTHNbOYLKliMGNPYKc1RBZQ8VSYQfaQoucIfHZnY5vzLzV2TVSUMjZ4hZpiEG4wSeW2VEhFUVpkRJZSlUo6IzP9Tee3B3VJMF59S2~sU8peImg-WCLjeOVBplgaSKQkN81uJ3~BWkf1h1UGDHkddz-GXSZQazokY4xXvCdbJEPCbeONCsJkSD_PMqE4PxpMBlmWNze4kLp6vX6pUFhpZDR-Y1KbbnAOpW1eN3I4awVwVkFuZXyhMPoTsmpU9HfxTuap2tZlNlz8VZu4YvpCBHyORAuzhv4DniLlMG9-HBdsS266UTulxnJdElgYVzSkbj9OhHdHRq6wyTA47n-YaMOD8bFyMEm_TGl1QtVACVuoRwXQjbdEuHcnVXT2QvF5TmOKaEMDwLVkEzDiWeKBjAV-_klibsZYmEdaFz9kZA6xHtVNNXR1bqETY9VL6zN2Y9P1eKRukV7Ib_9SNRpgY3xraVMxmYRQFnk_NRK4cSR6gnpvT6T1f0Vy9kDHewiGE9BwFXa2W2f1e7FpAHEzMwLsgcdhoHc7SlhuLlJePm_-RE6Sr2YNMzUwZ8R1nTRZdly4bcoEpDpp53joY9aXKtJATFi2VMAGZOJK2DOlUCmxsN5Nr1-WbW5-ORZtO278Ym66~qhp9UbVVzWThEBaizWfS5U0fXZ3AixBOfSnCrB0WlzXYKc6exJq8lWeVfaBoeBlvGPqToD0OfAARU-senMHnpFiEHHjScjtnUJCZmpSQJVZnWtkITPoWeex63VGNiNhd1VHXAhGIUt2WyLysqRugUPaV45kOT91bTxuT0guxmEMIGwSdNSYkCNRhnWDS2K2joJZ6VDHab8S9_ZnWnq2Vp21d7Bv9UhFavn-lLlkumLpTYUpWzV-PmOxVJIWt5BBLHIiSOSxj0VaZUdNM_btjUlP9GwmSr~y6tVGMVe0emwSW8poKTdDUR_0huREmUgEbK9WLRpoS1wBW2y5~qlJEVMDbh-Fg-FuSTlyT433oolx7UHBbQSW7_lfSmQFW112gddDFEOqViaLoLpYxjoCaI4wPlJ-VWZ3dUcrm292LXsfWeWqmARYaV_QaoVSnEZ_JX9nUtz129IEP2H1cXRYQ8Ng8Ec-WUB5vOVBoVgSU0rSNApgKDFZV091h2lOHkMReRBCdTJAW3-xUqs5yGVv5V9CVQCS8o1gHmR3Z_cuYxFvEkhPdva3lMZkuX2qU_l5ZDV0JUB~RHcXunZqOXIhVPF1nQBhZUuaNo3roDlSFmxmTdmpLtJmJm1pVa~Sa7IzLjhQRSG0gqBLmUcWeqQ-QRVtPH-ASzuumaJpBVM_bNxTgjJEkTS6V7bxjiB27UDTewi3BaZfTU5NWpzxgtVT8khrSyvQoNFSwTgYSnX1LlpATUFScUMHl2dzE2rcYgxRkkJCYV_NVccolS1OJT99bO_1IpFMQGDOd1RFR9phCGh1SP7tvOJrmmsFVKvSQQNzJDxuNlUzqMhNBnk9eR-4hD12aGMHS2LtyGVZD0PFawCF9apYTHeXSnVxdSJzCXEBbzP4iMZhoHc7SlhtZDk9LVK-RE6Su_tqOXIhVPF1nQBhZUuaNo3roDlSFmxmTdmpLtJmJm1pVa~Sa7IzLjhQRSG0gqBLmUcWeqQ-QRVtPH-ASzuumaJpBVM_bNxTgjJEkTS6V7bxjiB27UDTewi3BaZfTVzPYm22g7dTBk_oVjFDmdFlvDVYZH81LiF0Tnm3aEIGhnV2LWTaYgxXlkJCYV_NVccolS1OJT99bO_1IpFMQGDOd1RFR9phCGh1SP7tvOJrmmsFVKvSQQNzJDxuNlUzqMhNBnk9eR-4hD12aGMHS2LtyGVZF0PFawCF9apYTHeXSnVxdSJzCXEBbzP4iMZhoHc7SlhtZD5fWHKoVmyxn01eOW8QSgdudEFheGCxdJo3oEZSFXenUa~xINV8KUqsa52JaPtK2DKlexHul8FLln-KQm9GLSBuJnSATkZxxaVABlMWWBFPhAN2gjWdb_-uo0F26nbHQwG48aZ~DlzJYp~6gddV6kInbCXKod9SvDgqSn8xWC56VlOtdUI-wY5-E0ojWQxWkEVZYUlQaPoFmDdPFzHWTuV2CMoDPXRfdm6ZXRRf73u1TAjts8UIkUoIaqzFTDBcZD7CT-t0h4NCCUQ9bBFWcRl5g3WxTpxtyGVY9VDFab8TAc5nD3qLVoIxeARkEnEjbzaDiLlkfG3pTXIuOfVjRkxzVIMyr1ANNjb3VPFxjQBh_V_desoHnWRo53fmTcatINUDIVipVa2oVN1FLTWlNBi2hv5NrmxWe_9CPBdbSzx6Y22yxaJpBmkAVBxSgzpEkjh7V5rwfTFPAmYTefSCBadjL34OTnZJf7Vp8k4rMRLBoaIJwjgYVnTwPjV2V2_YbjV-p2VzLW7gWN-XmgciTUINVcZSlS1P5G-SSdVx76k8P0z5dK~revNeIG_AZ9Tms8JrlVcFVKDmMP1UbTxvaWfxqMQBHX80dR-4aSZ2aDpIS2Luk0JZ6VDFawCF9_dbTHaXRnVyPxFo9UWTd9X-cLlhoGKpSlhyKUJePV-sM0MJrpFMKzITRfs1nQBhZU_des3SoEZSGnT~YB65INV7JUqsM_mTVN1G7GEiSBdzlvQDsGBBc0MnPBZYYXRBUj9xwXhdCkYAVB-oaf11kTlyV5w0fiF2AVbUSsSnBaZfSX4PUqq5hBVpJFKoRkBQmLplxDZqeIqwWTpDVUFKc~M-r2d1E03cYgqxkAgiXkyiM5oClS1OJW-SSvuuBNFGNmDOe1VHYQRg70c~YRrkc5JwjkoFVKvSMP1ZNmnrSlPxrYUGFn8yedK-XSJ2aGHxS2K2kGJZ6mbCVQCS9adUTHaMSnVxPw1o9lhSbzaDicJ-o1xpSlhtZDJeQmFbVY6SpnpCMzU8awSxjjpxeCIaMZ-YgzlSFmxmTcexINV7JluFW_ZFVN1FLWEiTTvxvKBLnVcWe_9GWxJuJ3F6Y10QxaVABUYDMAnGeQJokjWbVqs1yCB27UYCbMiY4a90TXeOUH21exVm8UdWMy7FjLdhwDVYZHX0WChAVVNzdUMGjn9-5kHaYyrXjwciZkIhVO-MpW9THj99ZNlzLZBGKUe4eqVSY9ZJIXgqYkPucKlfnk3dMp44TzB1azxqVlQxwmABDXgReRBGdjNTX33tYOZFxThu9VDFab8ZAstnWXpOVoIxdSUw8nqSeDP4jdphoDs8SlhtZ9h2OkjxUE2SonZqOnYPVPFxj0ZjeHMMbcoDjX5i90xwZP66KcJmJVepVa2oVN1FLThRbxWxkqBLmUcWeqQ4NAlYY3xATkVuyXhEClbVVxBMaf11kWMcT66xvF54C1bTbQSE9_lfSmQOW16ygPFV8kWoVArEi_1gyWPVTpUuPzF8VW_Oa~VruYd-E1HiWd-JmQl-eEChbrkBrCJaIj9nRuFxIbhDPV1ObXVrV8lJHmA1TAnxs8VClkkcWKDSTvNNJD3uOl9thNoNH2wRbBBDaRl5SG0xTpxuvzJN8kPabwWJEsEJTHaMSnVyPxlo9U_WbzaDiMpln32pTXD5ZUldSVSoaj2SonoNKDUTVOSxjkFaZVpIbcoDlWpi0mKmYtqxINV7JUqsaNEFW8dG2DmmQRrul8FLln-KQq9SPBZbbXRATkgFzmkLDkIZRx7FbRd1hHW4R46womUwAnYTefiSBaZfTmROYM~kP7lp9kdhVlrFjLdgvHZyRXQxVUJ2TXngdjIYr3J25kogWgx2mwdFYkIkVMLGrDpXIDH9dN507856NXQHb1EnY9ZJHXt1UBe5vOVFnk3eM6zXSlBc_D7LNkD2nYlPFngReRBCdSd9_3-xTp76gzFM9k-bMtiPEqZnWXaLVp22TdBvAVSjeDaDkNRhoGKpSlhyKUJeWGKbVY6St2pbNDIPVPFxjQA__XudesoFlUlkGniiWv66LcJmJVepVa2oVN1FLThRbxWxkqBLmUcWeqQ4NAlYY3xATkVuyXhEClbVVxBMaf11kWMcT66xvF54C1bTbQSE9_lfSmQOW16ygPFV8kWoVArEi_1gyWPVTpUuPzF8VlOYaUI-p3B2LTbfYgxJlAUiYk0hbpZLpDpLHzHxdOBwIZVHNXQHc1AGY8lJHmA1TAnxs8VClkkcWKDSTvNNJD3uOl9thNoNH2wRbBBDaRl5SG0xTpxuvzJN8kPabwWJEsEJTHaMSnVyPxlo9lhfb9XYr6Rwf37zYWz1IDVSRVtxVYMRrnpnLXM4TeSxnjkiZm8aasoDsm9S52xyTtmqHJVmS1a9VXAGZAFkKyADTR6xh6oIpmBAMW5TTwpZZWiATkVqw5ZsCVCFVzWDbgJ6hXdcRqnwfTVy73b8aCV5D3Y1UmqEbN20S6ZsHT9wJUHmu40IggtJ&c=522", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb86291x98956&t=ip&ts=1673849572663&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_3");
    ns_web_url ("collect_3",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849635361.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_3_main_url_1_1673849922380.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb32088x8823&t=ip&ts=1673849583162&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb29472x97088&t=ip&ts=1673849593210&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb82294x85381&t=ip&ts=1673849603264&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb85328x85223&t=ip&ts=1673849613355&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb63231x49457&t=ip&ts=1673849623397&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb66845x18221&t=ip&ts=1673849633443&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_3", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_4");
    ns_web_url ("collect_4",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849696365.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_4_main_url_1_1673849922381.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb82980x38747&t=ip&ts=1673849643529&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb36632x24923&t=ip&ts=1673849653572&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb94589x63223&t=ip&ts=1673849663623&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb94246x82540&t=ip&ts=1673849673715&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb21565x45227&t=ip&ts=1673849683766&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb40146x33170&t=ip&ts=1673849693818&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_4", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_5");
    ns_web_url ("collect_5",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849757365.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_5_main_url_1_1673849922382.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb66735x67750&t=ip&ts=1673849703910&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb21933x42120&t=ip&ts=1673849713958&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb63131x34039&t=ip&ts=1673849724009&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb51801x75833&t=ip&ts=1673849734098&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb11519x33179&t=ip&ts=1673849744147&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb62217x61345&t=ip&ts=1673849754196&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_5", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_6");
    ns_web_url ("collect_6",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849814343.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_6_main_url_1_1673849922382.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb12752x92867&t=ip&ts=1673849764289&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb21185x73944&t=ip&ts=1673849774343&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb60299x47527&t=ip&ts=1673849784394&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb12276x2507&t=ip&ts=1673849794484&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb68847x478&t=ip&ts=1673849804537&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb43207x70411&t=uc&ts=1673849813804&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk&sdes=%5B%7B%22type%22%3A%22impAccept%22%2C%22campaign%22%3A3422484330%2C%22engId%22%3A3807621138%2C%22revision%22%3A4439%2C%22eContext%22%3A%5B%7B%22type%22%3A%22engagementContext%22%2C%22id%22%3A%221%22%7D%5D%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/js/desktopEmbeddedStyle.js?version=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lptag.liveperson.net/lptag/api/account/51200453/configuration/applications/taglets/.jsonp?v=2.0&df=0&scp=uw&ct=lpMobileLandscape%2ClpSecureStorage%2Clp_sdes%2Ccobrowse%2Clp_typein_slideup%2Clp_window_layout%2Cscraper%2ClpActivityMonitor%2CrendererStub%2Clp_version_detector%2Clp_external_js%2Clp_monitoringSDK%2ClpTransporter%2ClpUnifiedWindow%2CSMT%2Clp_css_customization%2Chooks%2Clp_SMT%2Cauthenticator%2CcleanCCPatterns%2Clp_global_utils%2CunAuthMessaging%2CjsLoader&b=10&cb=lpCb64710x37180", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/icons/desktop/sprites_v1.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.idp.liveperson.net/postmessage/postmessage.min.html?bust=1673849814118&loc=https%3A%2F%2Fperf.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_6", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("authorize");
    ns_web_url ("authorize",
        "URL=https://va.idp.liveperson.net/api/account/51200453/anonymous/authorize?__d=95237",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=LP-DOMAIN-REFERER:https://perf.lowes.com",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json; charset=UTF-8",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=LP-URL:https://perf.lowes.com/",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://va.idp.liveperson.net",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "Snapshot=webpage_1673849814553.png",
        INLINE_URLS,
            "URL=https://perf.lowes.com/favicon.ico", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", "COOKIE=dbidv2;region;notice_behavior;_lgsid;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;LPVID;LPSID-51200453;akaalb_perf_single;akaalb_perf_dual;prodNumber;RT", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/audio/kpSoundEffect.wav", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Range:bytes=0-", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:audio", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("authorize", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("authenticate");
    ns_web_url ("authenticate",
        "URL=https://va.idp.liveperson.net/api/account/51200453/app/1618217930/authenticate?v=3&__d=35584",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=LP-DOMAIN-REFERER:https://perf.lowes.com",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=Content-Type:application/json; charset=UTF-8",
        "HEADER=X-Requested-With:XMLHttpRequest",
        "HEADER=LP-URL:https://perf.lowes.com/",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://va.idp.liveperson.net",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "Snapshot=webpage_1673849814553.png",
        BODY_BEGIN,
            "{"id_token":"eyJraWQiOiJ1bmEtMTMtMDUtMTciLCJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJzdWIiOiIxZTY5ZThiYy02N2ZjLTRhMGItYTllOC1iYzY3ZmNmYTBiZTEiLCJhdWQiOiJhY2M6NTEyMDA0NTMiLCJhY3IiOiIwIiwiaXNzIjoiaHR0cHM6XC9cL2lkcC5saXZlcGVyc29uLm5ldCIsImV4cCI6MTY3Mzg1MDQxNCwiaWF0IjoxNjczODQ5ODE0LCJqdGkiOiI3MThkM2UwYi1iODNlLTRmZjQtOGQzZS0wYmI4M2VjZmY0ODEifQ.Neh7tRHzFSeOStD08M_hRINc39YE0BnTGNKu4Kpdr76ONnVEXZOPE3eYOQQxddhoLoWoqeaqsVbM3o69vfGJqtX0UOP6IQ8zHm5zibv903tu6ltVsfqEnfs-gfKoDKvfgc-T180NmjXAHsSrfjlUIiETOx-uNgDSB-EG9JOA5C3XZVkwVY1yI0ztxKEuW2zaMFgh9eYyFxrh3gqDLtgFWkdNoxYMvwXKUMfraZiFyN1D_fE3uy48qXRfIdBO1odC3ySLLgHrGIapjh6ZBnKGnTR1ZUnX_rmo_CMv6umFUXjZrd_M8s_aX_6U6VQqC_BEzOH6x-hVttvRG1vr8etftQ"}",
        BODY_END
    );

    ns_end_transaction("authenticate", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat_4");
    ns_web_url ("clickToChat_4",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;LPVID;LPSID-51200453;akaalb_perf_dual;akaalb_perf_single;RT;prodNumber",
        "Snapshot=webpage_1673849818365.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"3","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"1483x555","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1483","viewportHeight":"427","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:17:13.526Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"8","scenarioTest":"","collectionTest":"","eventId":"41440448-62a1-484f-b640-aba285de763b","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":0},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}],"chatEngagement":{"livePerson":{"campaignId":3422484330,"engagementId":3807621138}}}},"track":{"livePersonRequestType":"chat_active","livePerson":{"campaignId":3422484330,"engagementId":3807621138,"skill":"3438866030","monitoringSessionId":"7UdgakA_TZeXETWPpRs-_g","visitorId":"VlNTkxMjNmZWQ2ZTUyZjNk"},"linkName":"lp_chat_active"},"path":"/link/clickToChat","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb36345x34549&t=ip&ts=1673849814601&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/icons/desktop/sprites_v1.png?v=10.23.0.0-release_5549", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.msg.liveperson.net/postmessage/postmessage.min.html?bust=1673849814954&loc=https%3A%2F%2Fperf.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/LP-logo-bottom.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/close_button.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/arrow_right.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.lowescdn.com/seo/loweslogowhite.svg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://liveperson-liveengage.s3.amazonaws.com/le-images/lowes/Venntifact/Tony_only%402x.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/loader_anim_bgwhite_16.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://lpcdn.lpsnmedia.net/le_unified_window/10.23.0.0-release_5549/resources/Icon_attach.png", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.msg.liveperson.net/api/account/51200453/skills/3438866030/shift-status-skill?__d=82582", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=LP-DOMAIN-REFERER:https://perf.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Authorization:Bearer eyJraWQiOiIwMDAwMSIsInR5cCI6IkpXVCIsImFsZyI6IlJTMjU2In0.eyJzdWIiOiJmNTc3MDczODQyNDYyNzAxZjYwYzBmMjEzNzc5YjljODA4MjAyNWRjNjRhZTA3YmU4ZGQ3ODUzNjlkMzk3MWY0IiwiYXVkIjoiYWNjOjUxMjAwNDUzIiwiYWNyIjoiMCIsImlzcyI6Imh0dHBzOlwvXC9pZHAubGl2ZXBlcnNvbi5uZXQiLCJscC5leHQiOnsic3ViIjoiMWU2OWU4YmMtNjdmYy00YTBiLWE5ZTgtYmM2N2ZjZmEwYmUxIiwiaXNzIjoiaHR0cHM6XC9cL2lkcC5saXZlcGVyc29uLm5ldCIsImxwX3NkZXMiOiJlMmY3OTU4YmI2NTdkYWM4YTJjY2IwYTU4Y2I0ZGRiNDVkZmJiZmYzODQzMzVkYmRiYzAwY2Y1YzZiYWVmY2UyY2YwZmY3MmRiZDI5ODkxNDU3Nzc4OTM0MTA4ZDZlYTY2MjY1MmEwMjU0OTFlOWNiZmZiNTc4ZWNhN2I0OWViN2E3MTBhMzRhM2IwZTA2ZjBiMmJkNWQ3MjNhMWYzZTVkNTljZTUwMWI5Y2U4YzdlNmVjYjI2ZWEyNDUzNTE5MjgifSwiZXhwIjoxNjczODUwNDE0LCJpYXQiOjE2NzM4NDk4MTR9.nexC8ZpkgdU-6X7Q_8EX8gfQTSbIKKlo_vOEUXYoPY7bTFCiTU50_sRnwU8YuUX5NEIZREUrQeQPYDxasf8N6UJ3J-6v40kxNRd5x37qTnkLmTaoqWoWoXhlQZWVmDJM-hx9za5W0_0ZqO77peXNQhkZdcYCsqM-M3gUMHzhIVvx6Nxo0p-2DqIYmffCq9MC_J3ipANL6F0-HcPXY2HtrsOe1HF_IbA3nz_7NhU28u3Y7qO_NPktIFy2Ua8zvD-StxID_3YwMML7axZl11LN96riBlnh9zvtSKlqNTANJEzusoa3q5OR-lo_wUeqpBM91Kf7yg-31P93hMFH6C5K2g", "HEADER=Content-Type:application/json; charset=UTF-8", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=LP-URL:https://perf.lowes.com/", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("clickToChat_4", NS_AUTO_STATUS);
*/
    int msg_len;
    ns_start_transaction("create_connection_1");
    ns_web_websocket_connect("ID=1",
        "URI=wss://va.msg.liveperson.net/ws_api/account/51200453/messaging/consumer?v=3",
       "HOST=va.msg.liveperson.net",
    );
    ns_end_transaction("create_connection_1", NS_AUTO_STATUS);
    ns_page_think_time(0.01);

    ns_start_transaction("send_msg_1_1");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"eded525a-343b-4161-bd42-a7d1458c0fa51-31497\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_1", NS_AUTO_STATUS);
    ns_page_think_time(0.002);

    ns_start_transaction("send_msg_1_2");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"7ccbff95-8d90-421a-8f11-47336ec6dde12-24272\",\"type\":\"InitConnection\",\"body\":{},\"headers\":[{\"type\":\".ams.headers.ConsumerAuthentication\",\"jwt\":\"eyJraWQiOiIwMDAwMSIsInR5cCI6IkpXVCIsImFsZyI6IlJTMjU2In0.eyJzdWIiOiJmNTc3MDczODQyNDYyNzAxZjYwYzBmMjEzNzc5YjljODA4MjAyNWRjNjRhZTA3YmU4ZGQ3ODUzNjlkMzk3MWY0IiwiYXVkIjoiYWNjOjUxMjAwNDUzIiwiYWNyIjoiMCIsImlzcyI6Imh0dHBzOlwvXC9pZHAubGl2ZXBlcnNvbi5uZXQiLCJscC5leHQiOnsic3ViIjoiMWU2OWU4YmMtNjdmYy00YTBiLWE5ZTgtYmM2N2ZjZmEwYmUxIiwiaXNzIjoiaHR0cHM6XC9cL2lkcC5saXZlcGVyc29uLm5ldCIsImxwX3NkZXMiOiJlMmY3OTU4YmI2NTdkYWM4YTJjY2IwYTU4Y2I0ZGRiNDVkZmJiZmYzODQzMzVkYmRiYzAwY2Y1YzZiYWVmY2UyY2YwZmY3MmRiZDI5ODkxNDU3Nzc4OTM0MTA4ZDZlYTY2MjY1MmEwMjU0OTFlOWNiZmZiNTc4ZWNhN2I0OWViN2E3MTBhMzRhM2IwZTA2ZjBiMmJkNWQ3MjNhMWYzZTVkNTljZTUwMWI5Y2U4YzdlNmVjYjI2ZWEyNDUzNTE5MjgifSwiZXhwIjoxNjczODUwNDE0LCJpYXQiOjE2NzM4NDk4MTR9.nexC8ZpkgdU-6X7Q_8EX8gfQTSbIKKlo_vOEUXYoPY7bTFCiTU50_sRnwU8YuUX5NEIZREUrQeQPYDxasf8N6UJ3J-6v40kxNRd5x37qTnkLmTaoqWoWoXhlQZWVmDJM-hx9za5W0_0ZqO77peXNQhkZdcYCsqM-M3gUMHzhIVvx6Nxo0p-2DqIYmffCq9MC_J3ipANL6F0-HcPXY2HtrsOe1HF_IbA3nz_7NhU28u3Y7qO_NPktIFy2Ua8zvD-StxID_3YwMML7axZl11LN96riBlnh9zvtSKlqNTANJEzusoa3q5OR-lo_wUeqpBM91Kf7yg-31P93hMFH6C5K2g\"},{\"type\":\".ams.headers.ClientProperties\",\"features\":[\"AUTO_MESSAGES\",\"RICH_CONTENT\",\"CO_BROWSE\",\"PHOTO_SHARING\",\"QUICK_REPLIES\",\"MULTI_DIALOG\",\"FILE_SHARING\",\"MARKDOWN_HYPERLINKS\"],\"appId\":\"webAsync\",\"integrationVersion\":\"3.0.62\",\"integration\":\"WEB_SDK\",\"timeZone\":\"America/Chicago\"}]}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_2", NS_AUTO_STATUS);
    ns_page_think_time(0.02);

    ns_start_transaction("recieve_msg_1_1");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_1", NS_AUTO_STATUS);
    ns_page_think_time(0.027);

    ns_start_transaction("recieve_msg_1_2");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_2", NS_AUTO_STATUS);
    ns_page_think_time(0.029);

    ns_start_transaction("send_msg_1_3");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"a5d5a559-db37-4cf3-8d1b-d71f5bb22b385-42366\",\"type\":\"userprofile.GetUserProfile\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_3", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("send_msg_1_4");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"4da9f119-0557-41c5-8499-07589ed095919-30477\",\"type\":\"brandprofile.GetBrandProfile\",\"body\":{\"brandId\":\"51200453\"}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_4", NS_AUTO_STATUS);
    ns_page_think_time(0.055);

    ns_start_transaction("recieve_msg_1_3");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_3", NS_AUTO_STATUS);
    ns_page_think_time(0.007);

    ns_start_transaction("send_msg_1_5");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"a12ca872-c333-46bc-b3f7-67f863c5f1896-53135\",\"type\":\"cqm.SubscribeExConversations\",\"body\":{\"stage\":[\"OPEN\",\"CLOSE\",\"LOCKED\"],\"convState\":[\"OPEN\",\"CLOSE\",\"LOCKED\"]}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_5", NS_AUTO_STATUS);
    ns_page_think_time(0.044);

    ns_start_transaction("recieve_msg_1_4");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_4", NS_AUTO_STATUS);
    ns_page_think_time(0.043);

    ns_start_transaction("recieve_msg_1_5");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_5", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("recieve_msg_1_6");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_6", NS_AUTO_STATUS);
    ns_page_think_time(107.402);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_7");
    ns_web_url ("collect_7",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849832013.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_7_main_url_1_1673849922386.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb47521x10015&t=ip&ts=1673849824630&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849825201&cd[buttonFeatures]=%7B%22classList%22%3A%22chips-item%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Installations%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22type%22%3Anull%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Installations&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22smart%22%7D&cd[parameters]=%5B%5D&sw=1483&sh=555&v=2.9.92&r=stable&ec=2&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.msghist.liveperson.net/postmessage/postmessage.min.html?bust=1673849825354&loc=https%3A%2F%2Fperf.lowes.com", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-Dest:iframe", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/le-users/users/e2806476-0b4a-5563-97d6-be35eaf41bc6?cb=lpCb43304x5163", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/le-users/users/46339f31-8524-58b8-a63b-8e029df1ee60?cb=lpCb22590x93760", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.msghist.liveperson.net/messaging_history/api/account/51200453/conversations/consumer/metadata/search?state=close,archive&limit=50&source=unifiedWindow&__d=12255", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=LP-DOMAIN-REFERER:https://perf.lowes.com", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Authorization:Bearer eyJraWQiOiIwMDAwMSIsInR5cCI6IkpXVCIsImFsZyI6IlJTMjU2In0.eyJzdWIiOiJmNTc3MDczODQyNDYyNzAxZjYwYzBmMjEzNzc5YjljODA4MjAyNWRjNjRhZTA3YmU4ZGQ3ODUzNjlkMzk3MWY0IiwiYXVkIjoiYWNjOjUxMjAwNDUzIiwiYWNyIjoiMCIsImlzcyI6Imh0dHBzOlwvXC9pZHAubGl2ZXBlcnNvbi5uZXQiLCJscC5leHQiOnsic3ViIjoiMWU2OWU4YmMtNjdmYy00YTBiLWE5ZTgtYmM2N2ZjZmEwYmUxIiwiaXNzIjoiaHR0cHM6XC9cL2lkcC5saXZlcGVyc29uLm5ldCIsImxwX3NkZXMiOiJlMmY3OTU4YmI2NTdkYWM4YTJjY2IwYTU4Y2I0ZGRiNDVkZmJiZmYzODQzMzVkYmRiYzAwY2Y1YzZiYWVmY2UyY2YwZmY3MmRiZDI5ODkxNDU3Nzc4OTM0MTA4ZDZlYTY2MjY1MmEwMjU0OTFlOWNiZmZiNTc4ZWNhN2I0OWViN2E3MTBhMzRhM2IwZTA2ZjBiMmJkNWQ3MjNhMWYzZTVkNTljZTUwMWI5Y2U4YzdlNmVjYjI2ZWEyNDUzNTE5MjgifSwiZXhwIjoxNjczODUwNDE0LCJpYXQiOjE2NzM4NDk4MTR9.nexC8ZpkgdU-6X7Q_8EX8gfQTSbIKKlo_vOEUXYoPY7bTFCiTU50_sRnwU8YuUX5NEIZREUrQeQPYDxasf8N6UJ3J-6v40kxNRd5x37qTnkLmTaoqWoWoXhlQZWVmDJM-hx9za5W0_0ZqO77peXNQhkZdcYCsqM-M3gUMHzhIVvx6Nxo0p-2DqIYmffCq9MC_J3ipANL6F0-HcPXY2HtrsOe1HF_IbA3nz_7NhU28u3Y7qO_NPktIFy2Ua8zvD-StxID_3YwMML7axZl11LN96riBlnh9zvtSKlqNTANJEzusoa3q5OR-lo_wUeqpBM91Kf7yg-31P93hMFH6C5K2g", "HEADER=Content-Type:application/json; charset=UTF-8", "HEADER=X-Requested-With:XMLHttpRequest", "HEADER=LP-URL:https://perf.lowes.com/", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:cors", "HEADER=Sec-Fetch-Dest:empty", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_7", NS_AUTO_STATUS);

    ns_start_transaction("send_msg_1_6");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"pingKey_50438768\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_6", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("recieve_msg_1_7");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_7", NS_AUTO_STATUS);
    ns_page_think_time(0.208);

    ns_start_transaction("send_msg_1_7");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"a8b15f76-cfbf-4068-a270-e7df12485643c-3457\",\"type\":\"cm.ConsumerRequestConversation\",\"body\":{\"skillId\":3438866030,\"channelType\":\"MESSAGING\",\"ttrDefName\":null,\"campaignInfo\":{\"campaignId\":3422484330,\"engagementId\":3807621138},\"conversationContext\":{\"visitorId\":\"VlNTkxMjNmZWQ2ZTUyZjNk\",\"sessionId\":\"7UdgakA_TZeXETWPpRs-_g\",\"interactionContextId\":\"1\",\"type\":\"SharkContext\",\"lang\":\"en-US\"}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_7", NS_AUTO_STATUS);
    ns_page_think_time(0.055);

    ns_start_transaction("recieve_msg_1_8");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_8", NS_AUTO_STATUS);
    ns_page_think_time(0.018);

    ns_start_transaction("recieve_msg_1_9");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_9", NS_AUTO_STATUS);
    ns_page_think_time(0.008);

    ns_start_transaction("send_msg_1_8");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"028dba76-e55d-465f-9b6a-375498cc6d09d-15438\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"ContentEvent\",\"contentType\":\"text/plain\",\"message\":\"Installations\"}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_8", NS_AUTO_STATUS);
    ns_page_think_time(0.004);

    ns_start_transaction("send_msg_1_9");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"8cddc4e3-5ab6-41b4-bf4f-67903f4a473b9-11033\",\"type\":\"ms.SubscribeMessagingEvents\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"fromSeq\":0}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_9", NS_AUTO_STATUS);
    ns_page_think_time(0.053);

    ns_start_transaction("recieve_msg_1_10");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_10", NS_AUTO_STATUS);
    ns_page_think_time(0.016);

    ns_start_transaction("recieve_msg_1_11");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_11", NS_AUTO_STATUS);
    ns_page_think_time(0.004);

    ns_start_transaction("recieve_msg_1_12");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_12", NS_AUTO_STATUS);
    ns_page_think_time(0.053);

    ns_start_transaction("recieve_msg_1_13");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_13", NS_AUTO_STATUS);
    ns_page_think_time(0.03);

    ns_start_transaction("recieve_msg_1_14");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_14", NS_AUTO_STATUS);
    ns_page_think_time(0.027);

    ns_start_transaction("recieve_msg_1_15");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_15", NS_AUTO_STATUS);
    ns_page_think_time(0.042);

    ns_start_transaction("recieve_msg_1_16");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_16", NS_AUTO_STATUS);
    ns_page_think_time(0.038);

    ns_start_transaction("recieve_msg_1_17");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_17", NS_AUTO_STATUS);
    ns_page_think_time(0.007);

    ns_start_transaction("send_msg_1_10");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"2ac6dc14-9cb6-4bd9-a966-e7877002d7200-27019\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[1]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_10", NS_AUTO_STATUS);
    ns_page_think_time(0.043);

    ns_start_transaction("recieve_msg_1_18");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_18", NS_AUTO_STATUS);
    ns_page_think_time(0.025);

    ns_start_transaction("recieve_msg_1_19");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_19", NS_AUTO_STATUS);
    ns_page_think_time(2.44);

    ns_start_transaction("recieve_msg_1_20");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_20", NS_AUTO_STATUS);
    ns_page_think_time(94.292);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_8");
    ns_web_url ("collect_8",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849832230.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_8_main_url_1_1673849922388.body",
        BODY_END
    );

    ns_end_transaction("collect_8", NS_AUTO_STATUS);

    ns_start_transaction("recieve_msg_1_21");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_21", NS_AUTO_STATUS);
    ns_page_think_time(0.014);

    ns_start_transaction("send_msg_1_11");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"39f828c3-aaf8-4971-ac63-17e01d58820a8-650\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[5]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_11", NS_AUTO_STATUS);
    ns_page_think_time(0.073);

    ns_start_transaction("recieve_msg_1_22");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_22", NS_AUTO_STATUS);
    ns_page_think_time(0.008);

    ns_start_transaction("recieve_msg_1_23");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_23", NS_AUTO_STATUS);
    ns_page_think_time(0.014);

    ns_start_transaction("recieve_msg_1_24");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_24", NS_AUTO_STATUS);
    ns_page_think_time(88.787);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat_5");
    ns_web_url ("clickToChat_5",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Content-Type:text/plain;charset=UTF-8",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=dbidv2;region;notice_behavior;_lgsid;sn;zipcode;nearbyid;zipstate;AMCVS_5E00123F5245B2780A490D45%40AdobeOrg;g_amcv_refreshed;AMCV_5E00123F5245B2780A490D45%40AdobeOrg;_gcl_au;REVLIFTER;_fbp;g_previous;_tt_enable_cookie;_ttp;IR_gbd;IR_12374;_pin_unauth;_uetsid;_uetvid;_clck;_clsk;mdLogger;kampyle_userid;kampyleUserSession;kampyleUserSessionsCount;kampyleSessionPageCounter;LPVID;LPSID-51200453;akaalb_perf_dual;akaalb_perf_single;RT;prodNumber",
        "Snapshot=webpage_1673849842093.png",
        BODY_BEGIN,
            "{"adobe":{"visitNum":"1","lastVisitNum":0,"lastVisit":"First Visit","prodNum":"4","visitorAPI":"VisitorAPI Missing","marketingCloudVisitorID":"33059927376531299702538043148294114209"},"gauge":{"pageCount":"1","resolution":"1483x555","colorDepth":"24","javaEnabled":"N","cookiesEnabled":"Y","viewportWidth":"1483","viewportHeight":"427","charset":"UTF-8","referrer":"","userAgent":"SOASTA","language":"en-US","timestamp":"2023-01-16T06:18:28.746Z","timezoneOffset":"360","host":"perf.lowes.com","boomerID":"a6e50bb8-084a-4968-b3a2-5b759e74aa8a","lowesDigitalId":"","respond":false,"scrollDepth":null,"p_visit":"1","clientVersion":"1.13.1-2","previousPageType":"","previousSitesections":"","previousSiteID":"","previousPageLoad":null,"botScore":null,"isPro":false,"proUser":{},"_lgsid":"1673849558301","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316","epid":"N2I5MzRkZTktZThkYS00YjcwLWE1YTQtYzI5ZWQzZmEwMzE2","bttsessionID":"699893429790935788","visitCount":"9","scenarioTest":"","collectionTest":"","eventId":"0c6408bd-f5db-40c4-92fb-d98c854fd07f","audience":null,"isNative":false,"appMID":"","appSiteID":"","mWeb":false,"adobeRetries":0},"dataLayers":{"current":{"page":{"pageInfo":{"pageID":"074638fb-a43e-413b-a203-059ee3553459","pageName":"Lowes Home Improvement","siteID":"desktop","contentPageURL":"","contentPath":"00000001","destinationURL":"https://perf.lowes.com/","referrerURL":"","abtesting":["globalweb-header-stable","ABT-9612-B","globalweb-footer-stable","ABT-9612-B",""]},"category":{"pageType":"hp","siteSections":["hp","hp","hp","hp"],"content":"tesla","platform":1,"framework":1,"helix":true},"canary":["stable"]},"baymaxInfo":{"global":{},"exps":{}},"user":{"profile":{"profileInfo":{}},"segment":"consumer","status":"guest","dbid":"7b934de9-e8da-4b70-a5a4-c29ed3fa0316"},"fullStory":{"rageHook":false},"experiments":[{"expError":null,"qualifiedExperiment":"PV-FF-66","qualifiedVariant":"variant"},{"expError":null,"qualifiedExperiment":"PV-BYM-1633","qualifiedVariant":"V1"}],"chatEngagement":{"livePerson":{"campaignId":3422484330,"engagementId":3807621138}}}},"track":{"livePersonRequestType":"chat_ended","livePerson":{"campaignId":3422484330,"engagementId":3807621138,"skill":"3438866030","monitoringSessionId":"7UdgakA_TZeXETWPpRs-_g","visitorId":"VlNTkxMjNmZWQ2ZTUyZjNk"},"linkName":"lp_chat_ended"},"path":"/link/clickToChat","method":"post"}",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb7936x70122&t=ip&ts=1673849834676&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("clickToChat_5", NS_AUTO_STATUS);

    ns_start_transaction("recieve_msg_1_25");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_25", NS_AUTO_STATUS);
    ns_page_think_time(85.508);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_9");
    ns_web_url ("collect_9",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849858329.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_9_main_url_1_1673849922389.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb41806x87480&t=ip&ts=1673849844726&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849849529&cd[buttonFeatures]=%7B%22classList%22%3A%22chips-item%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Track%20install%20status%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22type%22%3Anull%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Track%20install%20status&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22smart%22%7D&cd[parameters]=%5B%5D&sw=1483&sh=555&v=2.9.92&r=stable&ec=3&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb24644x7977&t=ip&ts=1673849854777&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_9", NS_AUTO_STATUS);

    ns_start_transaction("send_msg_1_12");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"pingKey_50155777\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_12", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("recieve_msg_1_26");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_26", NS_AUTO_STATUS);
    ns_page_think_time(2.63);

    ns_start_transaction("send_msg_1_13");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"1399189e-1366-45f5-bf42-178c4ad2d2a01-80353\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"ACTION\",\"sequenceList\":[5]}},\"metadata\":[]}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_13", NS_AUTO_STATUS);
    ns_page_think_time(0.011);

    ns_start_transaction("send_msg_1_14");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"a4a8c7de-54a8-41a2-a8a3-278be07db15d2-82646\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"ContentEvent\",\"contentType\":\"text/plain\",\"message\":\"Track install status\"}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_14", NS_AUTO_STATUS);
    ns_page_think_time(0.028);

    ns_start_transaction("recieve_msg_1_27");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_27", NS_AUTO_STATUS);
    ns_page_think_time(0.006);

    ns_start_transaction("recieve_msg_1_28");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_28", NS_AUTO_STATUS);
    ns_page_think_time(0.025);

    ns_start_transaction("recieve_msg_1_29");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_29", NS_AUTO_STATUS);
    ns_page_think_time(0.023);

    ns_start_transaction("recieve_msg_1_30");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_30", NS_AUTO_STATUS);
    ns_page_think_time(0.01);

    ns_start_transaction("recieve_msg_1_31");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_31", NS_AUTO_STATUS);
    ns_page_think_time(0.002);

    ns_start_transaction("recieve_msg_1_32");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_32", NS_AUTO_STATUS);
    ns_page_think_time(3.593);

    ns_start_transaction("recieve_msg_1_33");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_33", NS_AUTO_STATUS);
    ns_page_think_time(69.153);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_10");
    ns_web_url ("collect_10",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849869717.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_10_main_url_1_1673849922389.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb63789x48381&t=ip&ts=1673849864871&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk&sdes=%5B%7B%22type%22%3A%22tabActive%22%2C%22input%22%3A1%7D%5D", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_10", NS_AUTO_STATUS);

    ns_start_transaction("recieve_msg_1_34");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_34", NS_AUTO_STATUS);
    ns_page_think_time(0.005);

    ns_start_transaction("send_msg_1_15");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"e2e6bca7-81fd-4314-8407-1711905ef1428-68598\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[10]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_15", NS_AUTO_STATUS);
    ns_page_think_time(0.031);

    ns_start_transaction("send_msg_1_16");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"40be48e1-5c4c-417b-88a0-0758461b60043-60995\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"ACCEPT\",\"sequenceList\":[10]}},\"metadata\":[]}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_16", NS_AUTO_STATUS);
    ns_page_think_time(0.112);

    ns_start_transaction("recieve_msg_1_35");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_35", NS_AUTO_STATUS);
    ns_page_think_time(0.004);

    ns_start_transaction("recieve_msg_1_36");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_36", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("recieve_msg_1_37");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_37", NS_AUTO_STATUS);
    ns_page_think_time(0.006);

    ns_start_transaction("recieve_msg_1_38");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_38", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("recieve_msg_1_39");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_39", NS_AUTO_STATUS);
    ns_page_think_time(0.832);

    ns_start_transaction("recieve_msg_1_40");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_40", NS_AUTO_STATUS);
    ns_page_think_time(0.008);

    ns_start_transaction("send_msg_1_17");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"60cc17e5-9edc-4eec-9f81-279a4abd7b5bc-21530\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[13]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_17", NS_AUTO_STATUS);
    ns_page_think_time(0.06);

    ns_start_transaction("recieve_msg_1_41");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_41", NS_AUTO_STATUS);
    ns_page_think_time(0.045);

    ns_start_transaction("recieve_msg_1_42");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_42", NS_AUTO_STATUS);
    ns_page_think_time(0.992);

    ns_start_transaction("recieve_msg_1_43");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_43", NS_AUTO_STATUS);
    ns_page_think_time(61.245);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_11");
    ns_web_url ("collect_11",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849887232.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_11_main_url_1_1673849922390.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb49871x17977&t=ip&ts=1673849874913&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb85523x97488&t=ip&ts=1673849884961&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_11", NS_AUTO_STATUS);

    ns_start_transaction("send_msg_1_18");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"pingKey_5099052\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_18", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("recieve_msg_1_44");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_44", NS_AUTO_STATUS);
    ns_page_think_time(10.006);

    ns_start_transaction("send_msg_1_19");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"pingKey_87919495\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_19", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("recieve_msg_1_45");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_45", NS_AUTO_STATUS);
    ns_page_think_time(41.192);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_12");
    ns_web_url ("collect_12",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849899379.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_12_main_url_1_1673849922391.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849887363&cd[buttonFeatures]=%7B%22classList%22%3A%22chips-item%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22I%20still%20have%20questions%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22type%22%3Anull%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=I%20still%20have%20questions&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22smart%22%7D&cd[parameters]=%5B%5D&sw=1483&sh=555&v=2.9.92&r=stable&ec=4&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb12958x73832&t=ip&ts=1673849895051&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_12", NS_AUTO_STATUS);

    ns_start_transaction("send_msg_1_20");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"93db50d0-0b6d-4bb4-9bb9-77979fe81d974-33567\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"ACTION\",\"sequenceList\":[13]}},\"metadata\":[]}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_20", NS_AUTO_STATUS);
    ns_page_think_time(0.014);

    ns_start_transaction("send_msg_1_21");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"9411e991-437f-42c1-983b-3738bcddaa489-14423\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"ContentEvent\",\"contentType\":\"text/plain\",\"message\":\"I still have questions\"}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_21", NS_AUTO_STATUS);
    ns_page_think_time(0.023);

    ns_start_transaction("recieve_msg_1_46");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_46", NS_AUTO_STATUS);
    ns_page_think_time(0.006);

    ns_start_transaction("recieve_msg_1_47");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_47", NS_AUTO_STATUS);
    ns_page_think_time(0.016);

    ns_start_transaction("recieve_msg_1_48");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_48", NS_AUTO_STATUS);
    ns_page_think_time(0.023);

    ns_start_transaction("recieve_msg_1_49");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_49", NS_AUTO_STATUS);
    ns_page_think_time(0.011);

    ns_start_transaction("recieve_msg_1_50");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_50", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("recieve_msg_1_51");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_51", NS_AUTO_STATUS);
    ns_page_think_time(3.324);

    ns_start_transaction("recieve_msg_1_52");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_52", NS_AUTO_STATUS);
    ns_page_think_time(2.036);

    ns_start_transaction("recieve_msg_1_53");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_53", NS_AUTO_STATUS);
    ns_page_think_time(0.008);

    ns_start_transaction("send_msg_1_22");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"7173b4b6-da0a-4b43-b2c8-b7dda2143fa32-58770\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[18]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_22", NS_AUTO_STATUS);
    ns_page_think_time(0.048);

    ns_start_transaction("recieve_msg_1_54");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_54", NS_AUTO_STATUS);
    ns_page_think_time(0.008);

    ns_start_transaction("recieve_msg_1_55");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_55", NS_AUTO_STATUS);
    ns_page_think_time(0.005);

    ns_start_transaction("recieve_msg_1_56");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_56", NS_AUTO_STATUS);
    ns_page_think_time(0.727);

    ns_start_transaction("recieve_msg_1_57");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_57", NS_AUTO_STATUS);
    ns_page_think_time(0.005);

    ns_start_transaction("send_msg_1_23");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"1a08d066-1ba2-42e8-9f10-f75254537acb0-68655\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[20]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_23", NS_AUTO_STATUS);
    ns_page_think_time(0.056);

    ns_start_transaction("recieve_msg_1_58");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_58", NS_AUTO_STATUS);
    ns_page_think_time(0.004);

    ns_start_transaction("recieve_msg_1_59");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_59", NS_AUTO_STATUS);
    ns_page_think_time(0.039);

    ns_start_transaction("recieve_msg_1_60");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_60", NS_AUTO_STATUS);
    ns_page_think_time(28.662);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_13");
    ns_web_url ("collect_13",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849909013.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_13_main_url_1_1673849922392.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849903429&cd[buttonFeatures]=%7B%22classList%22%3A%22lpc_maximized-header__close-button-asset%20lpc_desktop%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22https%3A%2F%2Flpcdn.lpsnmedia.net%2Fle_unified_window%2F10.23.0.0-release_5549%2Fresources%2Ficons%2Fdesktop%2Fsprites_v1.png%3Fv%3D10.23.0.0-release_5549%22%2C%22innerText%22%3A%22%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22img%22%2C%22type%22%3Anull%7D&cd[buttonText]=&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22smart%22%7D&cd[parameters]=%5B%5D&sw=1483&sh=555&v=2.9.92&r=stable&ec=5&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb2879x15337&t=ip&ts=1673849905099&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://www.facebook.com/tr/?id=625799750871183&ev=SubscribedButtonClick&dl=https%3A%2F%2Fperf.lowes.com%2F&rl=&if=false&ts=1673849908572&cd[buttonFeatures]=%7B%22classList%22%3A%22lp_confirm_button%20lpc_confirmation-dialog__confirm-button%20lpc_desktop%22%2C%22destination%22%3A%22%22%2C%22id%22%3A%22%22%2C%22imageUrl%22%3A%22%22%2C%22innerText%22%3A%22Yes%22%2C%22numChildButtons%22%3A0%2C%22tag%22%3A%22button%22%2C%22type%22%3A%22button%22%2C%22name%22%3A%22%22%2C%22value%22%3A%22%22%7D&cd[buttonText]=Yes&cd[formFeatures]=%5B%5D&cd[pageFeatures]=%7B%22title%22%3A%22smart%22%7D&cd[parameters]=%5B%5D&sw=1483&sh=555&v=2.9.92&r=stable&ec=6&o=30&fbp=fb.1.1673849559772.1280476199&it=1673849559662&coo=false&es=automatic&tm=3&rqm=GET", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://accdn.lpsnmedia.net/api/account/51200453/configuration/le-users/users/10367814-f00d-5454-aa6e-438cb3fb0550?cb=lpCb41592x60693", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_13", NS_AUTO_STATUS);

    ns_start_transaction("send_msg_1_24");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"pingKey_17557006\",\"type\":\"GetClock\",\"body\":{}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_24", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("recieve_msg_1_61");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_61", NS_AUTO_STATUS);
    ns_page_think_time(4.823);

    ns_start_transaction("send_msg_1_25");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"73b41d27-cd17-4ed3-a927-a77d250995020-94942\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"ChatStateEvent\",\"chatState\":\"ACTIVE\"}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_25", NS_AUTO_STATUS);
    ns_page_think_time(0.002);

    ns_start_transaction("send_msg_1_26");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"7739efd1-0824-4391-a296-67aaf49d17a5e-89091\",\"type\":\"cm.UpdateConversationField\",\"body\":{\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"conversationField\":{\"field\":\"DialogChange\",\"type\":\"UPDATE\",\"dialog\":{\"dialogId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"state\":\"CLOSE\",\"closedCause\":\"Closed by consumer\"}}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_26", NS_AUTO_STATUS);
    ns_page_think_time(0.053);

    ns_start_transaction("recieve_msg_1_62");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_62", NS_AUTO_STATUS);
    ns_page_think_time(0.018);

    ns_start_transaction("recieve_msg_1_63");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_63", NS_AUTO_STATUS);
    ns_page_think_time(0.027);

    ns_start_transaction("recieve_msg_1_64");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_64", NS_AUTO_STATUS);
    ns_page_think_time(0.037);

    ns_start_transaction("recieve_msg_1_65");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_65", NS_AUTO_STATUS);
    ns_page_think_time(0.034);

    ns_start_transaction("send_msg_1_27");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"869ca966-4357-41c0-bfd1-57d53428a8227-99362\",\"type\":\"ms.SubscribeMessagingEvents\",\"body\":{\"dialogId\":\"-xYg97NBTsyr8ikv1gnlHQ\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"fromSeq\":0}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_27", NS_AUTO_STATUS);
    ns_page_think_time(0.064);

    ns_start_transaction("recieve_msg_1_66");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_66", NS_AUTO_STATUS);
    ns_page_think_time(0.084);

    ns_start_transaction("recieve_msg_1_67");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_67", NS_AUTO_STATUS);
    ns_page_think_time(0.003);

    ns_start_transaction("recieve_msg_1_68");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_68", NS_AUTO_STATUS);
    ns_page_think_time(0.005);

    ns_start_transaction("recieve_msg_1_69");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_69", NS_AUTO_STATUS);
    ns_page_think_time(13.484);

    //Page Auto split for Method = POST
    ns_start_transaction("clickToChat_6");
    ns_web_url ("clickToChat_6",
        "URL=https://perf.lowes.com/gauge/link/clickToChat",
        "METHOD=POST",
        "Snapshot=webpage_1673849914336.png"
    );

    ns_end_transaction("clickToChat_6", NS_AUTO_STATUS);

    ns_start_transaction("recieve_msg_1_70");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_70", NS_AUTO_STATUS);
    ns_page_think_time(3.151);

    ns_start_transaction("recieve_msg_1_71");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_71", NS_AUTO_STATUS);
    ns_page_think_time(0.009);

    ns_start_transaction("send_msg_1_28");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"e04ff30e-d60d-4438-a4d2-d73dc9ec919bb-50008\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"-xYg97NBTsyr8ikv1gnlHQ\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"READ\",\"sequenceList\":[0]}}}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_28", NS_AUTO_STATUS);
    ns_page_think_time(0.022);

    ns_start_transaction("send_msg_1_29");
    ns_web_websocket_send("ID=1",
        "Buffer={\"kind\":\"req\",\"id\":\"bfe471fd-17a5-45e7-9bbe-67ddfccefe99d-92024\",\"type\":\"ms.PublishEvent\",\"body\":{\"dialogId\":\"-xYg97NBTsyr8ikv1gnlHQ\",\"conversationId\":\"50b44eee-478b-4910-873f-ebcdf5b91854\",\"event\":{\"type\":\"AcceptStatusEvent\",\"status\":\"ACCEPT\",\"sequenceList\":[0]}},\"metadata\":[]}",
        "IsBinary=0"
    );
    ns_end_transaction("send_msg_1_29", NS_AUTO_STATUS);
    ns_page_think_time(0.039);

    ns_start_transaction("recieve_msg_1_72");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_72", NS_AUTO_STATUS);
    ns_page_think_time(0.005);

    ns_start_transaction("recieve_msg_1_73");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_73", NS_AUTO_STATUS);
    ns_page_think_time(0.006);

    ns_start_transaction("recieve_msg_1_74");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_74", NS_AUTO_STATUS);
    ns_page_think_time(0.014);

    ns_start_transaction("recieve_msg_1_75");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_75", NS_AUTO_STATUS);
    ns_page_think_time(0.002);

    ns_start_transaction("recieve_msg_1_76");
    ns_web_websocket_read(1, 1000, &msg_len);
    ns_end_transaction("recieve_msg_1_76", NS_AUTO_STATUS);
    ns_page_think_time(9.446);

    //Page Auto split for Method = POST
    ns_start_transaction("collect_14");
    ns_web_url ("collect_14",
        "URL=https://d.clarity.ms/collect",
        "METHOD=POST",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Linux\"",
        "HEADER=Origin:https://perf.lowes.com",
        "HEADER=Sec-Fetch-Site:cross-site",
        "HEADER=Sec-Fetch-Mode:cors",
        "HEADER=Sec-Fetch-Dest:empty",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "COOKIE=MUID",
        "Snapshot=webpage_1673849914539.png",
        BODY_BEGIN,
            "$CAVINCLUDE_NOPARAM$=http_request_body/collect_14_main_url_1_1673849922393.body",
        BODY_END,
        INLINE_URLS,
            "URL=https://va.v.liveperson.net/api/js/51200453?sid=7UdgakA_TZeXETWPpRs-_g&cb=lpCb74207x99413&t=ip&ts=1673849915157&pid=5824443698&tid=2727292249&vid=VlNTkxMjNmZWQ2ZTUyZjNk", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Linux\"", "HEADER=Sec-Fetch-Site:cross-site", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("collect_14", NS_AUTO_STATUS);
}
