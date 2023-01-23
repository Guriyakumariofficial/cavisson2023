/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: Apoorva
    Date of recording: 11/04/2022 01:15:38
    Flow details:
    Build details: 4.10.0 (build# 30)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index_html");
    ns_web_url ("index_html",
        "URL=https://23.94.181.3:8443/tours/index.html",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/login.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("index_html", NS_AUTO_STATUS);
    ns_page_think_time(15.269);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=https://23.94.181.3:8443/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username={Username}&password={pwd}&login.x=40&login.y=11&JSFormSubmit=off",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(5.822);

    //Page Auto split for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=https://23.94.181.3:8443/cgi-bin/reservation",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/continue.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(13.571);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=https://23.94.181.3:8443/cgi-bin/findflight?depart=Acapulco&departDate=11-05-2022&arrive=Acapulco&returnDate=11-06-2022&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=48&findFlights.y=14",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/splash_Searchresults.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/startover.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/continue.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(2.724);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=https://23.94.181.3:8443/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C11-05-2022&hidden_outboundFlight_button1=001%7C0%7C11-05-2022&hidden_outboundFlight_button2=002%7C0%7C11-05-2022&hidden_outboundFlight_button3=003%7C0%7C11-05-2022&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=73&reserveFlights.y=14",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/splash_creditcard.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/purchaseflight.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/startover.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(29.118);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=https://23.94.181.3:8443/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=1234567890&expDate=09%2F26&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C11-05-2022&advanceDiscount=&buyFlights.x=83&buyFlights.y=10&.cgifields=saveCC",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/flights.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/home.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/signoff.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/splash_flightconfirm.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/bookanother.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(3.152);

    //Page Auto split for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=https://23.94.181.3:8443/cgi-bin/welcome",
        "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"",
        "HEADER=sec-ch-ua-mobile:?0",
        "HEADER=sec-ch-ua-platform:\"Windows\"",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8",
        INLINE_URLS,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/banner_animated.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/sun_swede.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/Merc10-dev/images/login.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/images/banner_merctur.jpg", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE,
            "URL=https://23.94.181.3:8443/tours/vep/images/velocigen.gif", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=sec-ch-ua-platform:\"Windows\"", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:image", "HEADER=Accept-Language:en-GB,en-US;q=0.9,en;q=0.8", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(6.158);

}
