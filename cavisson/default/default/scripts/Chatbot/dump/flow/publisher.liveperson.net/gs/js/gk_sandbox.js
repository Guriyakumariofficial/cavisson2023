/*
August 2022 - DIY, Desktop A/B Test

Control: Current State (large invite)
V1: Minimize for 60 seconds then maximize
V2: Minimize for 180 seconds then maximize
V3: Minimize, no maximize
*/

// START - AB Testing
function saveSegment(segment) {
	var savedSegment = parseInt(segment);
	lpTag.sdes = lpTag.sdes||[];
	lpTag.sdes.push(
		{
			"type": "mrktInfo",
			"info": {
			"affiliate": savedSegment
			}
	 });
}

function getSegment() {
	if (typeof window.lpABTestSegment != "undefined") {
		saveSegment(window.lpABTestSegment);
	} else {
		setTimeout(function() {
			if (typeof window.lpABTestSegment != "undefined") {
				saveSegment(window.lpABTestSegment);
			} else {
				saveSegment("99999");
			}
		}, 3000);
	}
}

function setSegment() {
	try {
		var lpSegment = localStorage.getItem('abSegment');
		if (lpSegment) {
			localStorage.removeItem('abSegment');
		}
		getSegment();
	} catch(e) {console.info(e)}
}

setSegment();


function enlargeEngagement(){
	document.getElementById("liveperson-persist-button").style.display="none";
	var chatButton = document.getElementById("chat_container");
	chatButton.children[0].src="https://liveperson-liveengage.s3.amazonaws.com/le-images/lowes/2021-11/DefaultImage(11_15_2021).png";
	chatButton.children[0].setAttribute("height", "230px")
	chatButton.children[0].setAttribute("width", "170px")
	chatButton.style.right="30px";
	chatButton.style.bottom="10px";
	chatButton.style.overflow="visible";
	chatButton.style.position="fixed";

	var chatShutdown = document.createElement("img");
	chatShutdown.src="https://liveperson-liveengage.s3.amazonaws.com/le-images/lowes/2021-11/DefaultClose(11_11_2021).png";
	chatShutdown.style.left="auto";
	chatShutdown.style.width="20px";
	chatShutdown.style.top="15px";
	chatShutdown.style.right="15px";
	chatShutdown.style.zIndex = "99999999";
	chatShutdown.style.position="absolute";
	chatButton.appendChild(chatShutdown);
	chatShutdown.id = "chat-shutdown";

	document.getElementById('chat-shutdown').addEventListener("click", minimizeButton)

	document.getElementById("liveperson-persist-button").style.display="block"; 
}

function enlargeTest(timer) {
	setTimeout(function() {
		enlargeEngagement();
		localStorage.lpLarge = "true";
	}, timer);
}

// map segementation value to timing
function abTest() {
	var mainContainer = document.getElementById("chat_container");
	let testSegment = window.lpABTestSegment;

	//part of test but has already been maximized
	if ((localStorage.lpLarge === "true") && (localStorage.lpMini !== "true")) {
		enlargeEngagement();
	}

	//hasn't been minimized by visitor already and part of test
	if ((localStorage.lpMini !== "true") && ((/(testMini1|testMini2)/).test(mainContainer.className))) {
		try {
			if (testSegment === 1) {
				console.log("TEST 1 = 60 seconds");			
				enlargeTest(60000);
			} else if (testSegment === 2) {
				console.log("TEST 2 = 180 seconds");
				enlargeTest(180000);
			}
		} catch(e) {
				console.log(e);
			}
	} 
}

lpTag.events.bind("LP_OFFERS","OFFER_IMPRESSION", abTest);
// END - AB Testing

// START - Device Detection; iPad Safari assigned 2
function iOS() {
	// iPad on iOS 13 detection
	if (navigator.userAgent.includes("Mac") && "ontouchend" in document) {
	  return 2;
	} 
  }
  
  function saveDeviceType() {
	var isMobile = iOS();
  
	try {
	  if (isMobile === 2) {
		lpTag.sdes = lpTag.sdes||[];
		lpTag.sdes.push(
		  {
			"type": "personal", 
			  "personal": {
				"age": {
					"age": isMobile, 
				  },
			  }
		});
	  }
  } catch (e) {
	  console.log(e)
	}
  }
  saveDeviceType()
  // END - Device Detection

function gkfunct2(){
	if(localStorage.getItem('lct')===null){} else{
			let tk = localStorage.getItem('lct').split("-");
			if(Date.now()-tk[0]>7200000){ 
					tk[1]=0;
					localStorage.setItem('lct', Date.now()+"-0");
			}
			if(tk[1]>4){ 
					document.getElementById("liveperson-persist-button").setAttribute("id", "lpbtnDiv");
			}
	}
} 
gkfunct2();

lpTag.events.bind("LP_OFFERS","OFFER_CLICK",function(){
	if(localStorage.getItem('lct')===null){
			localStorage.setItem('lct', Date.now()+"-0");
	} else {
			let tk = localStorage.getItem('lct').split("-");
			if(Date.now()-tk[0]<90000){ tk[1]=parseInt(tk[1])+1;}
			if(Date.now()-tk[0]>180000){ tk[1]=0;}

			localStorage.setItem('lct', Date.now()+"-"+tk[1]);
			if(tk[1]>4){ 
					document.getElementById("liveperson-persist-button").setAttribute("id", "lpbtnDiv");
					var e = document.getElementById("lpbtnDiv");
					var child = e.lastElementChild;  
					while (child) { 
							e.removeChild(child); 
							child = e.lastElementChild; 
					} 
			}
	}
});

// START - Code for Minimized button (supports multitab)

document.getElementById("liveperson-persist-button").style.display="none";

function minimizeButton() {
	var lpcebtn = document.getElementById("chat-shutdown");
	if (lpcebtn != null) {
	try {
			lpcebtn.addEventListener("click", function(){
				minimizeIncumbent();

				//handles ab test - can remove once test is over
				var largeFlag = localStorage.getItem('lpLarge');
				if (largeFlag) {
					localStorage.removeItem('lpLarge');
				}

				localStorage.lpMini = "true";
				localStorage.sid = lpTag.taglets.lp_monitoringSDK.getSid();

				    //track minimized clicks
            lpTag.sdes.send({
							"type": "ctmrinfo",
							"info": {             
							"role": "1"
							}
					});
			})

			//if persisting mini version (if mini flag is true and we are in the same session as when the flag was set)
			if(localStorage.lpMini === "true" && localStorage.sid == lpTag.taglets.lp_monitoringSDK.getSid() ){ 
					minimizeIncumbent();
			}

			//mini is true but this is a new session -> reset flag and set new session id
			if(localStorage.lpMini === "true" && localStorage.sid!=lpTag.taglets.lp_monitoringSDK.getSid()){ 
					localStorage.lpMini = "false";
					localStorage.sid = lpTag.taglets.lp_monitoringSDK.getSid();
			}
	} catch(e) {console.log(e);}
}
	//if element is hidden -> unhide because all processing is complete
	document.getElementById("liveperson-persist-button").style.display="block";  
};

lpTag.events.bind("LP_OFFERS","OFFER_IMPRESSION", minimizeButton);

// END - Code for Minimized button (persistent over multitab)

// START - Helper Functions for Minimized Button

function minimizeIncumbent() {
	document.getElementById("chat_container").style.display="none";
	document.getElementById("chat_container").children[0].src="https://liveperson-liveengage.s3.amazonaws.com/le-images/lowes/2021-08/MinimizedInviteChat(08-19-2021).png";
	document.getElementById("chat_container").children[0].setAttribute("height", "60px")
	document.getElementById("chat_container").children[0].setAttribute("width", "60px")
	
	document.getElementById("chat_container").style.right="0px";
	document.getElementById("chat_container").style.bottom="0px";
	document.getElementById("chat_container").style.padding="20px";
	document.getElementById("chat_container").style.overflow="hidden";
	document.getElementById("chat_container").style.display="block";
	document.getElementById("chat-shutdown").style.display="none";
}

// END - Helper Functions for Minimized Button

// START - Code to hide engagement during minimized chatting state.

lpTag.events.bind("lpUnifiedWindow", "state", function(a, b) {
	if (a.state == "chatting") {
		 document.getElementById("chat_container").style.display="none"
	} 
});

// END - Code to hide engagement during minimized chatting state.
