vuser_init()
{
	lr_start_transaction("login page");
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

web_add_header("Upgrade-Insecure-Requests", 
	"1");
	
	web_set_max_html_param_len("999999");
	
	web_reg_save_param("Viewst1", "LB=hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"", "RB=\"", LAST);
	
	web_reg_save_param("Viewgt1", "LB=hidden\" name=\"__VIEWSTATEGENERATOR\" id=\"__VIEWSTATEGENERATOR\" value=\"", "RB=\"", LAST);

web_url("vmsrs.erecruitcloud.com", 
	"URL=http://vmsrs.erecruitcloud.com/", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=", 
	"Snapshot=t1.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=https://vmsrs.erecruitcloud.com/WebResource.axd?d=m3cmci195IuJDEJw8Ad9w37t-ar6S_p30DNET5tULqLw7XFJh2YiN6Ss8jqHn9dSsoMnt6V8ZKqZirvlHa70GP0TrFw1&t=636765319264470882", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/ScriptResource.axd?d=9x5OvJaQVu0vj9j4xaQBlKKOEaHrkzcdmYjM4RFhcq_Djt9kUkyhoYU-zBekcY7ErwHvsRc6Fag_rhwv4YrfJqE6BjlCkvm8UNUUm_-qZjnXRoo20cEn-b5wePLrceOAAkBxDE5DWZN0-d_FIEREFdILw641&t=29665526", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3ab7585254-495e-4311-9545-1f910247aca5%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
	"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Services/UpdateService.asmx/js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/WebResource.axd?d=ppYwzJsRb6AhcOLm41MnVR6O_dxAYwx8kQEpShx-opg0jHDm6nly6o_cE0sit9ie8fEwOeM0k4Lm4iI1v9oFaDaP91E1&t=636765319264470882", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/App_Themes/Default/javascript/telerik-hacks.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/amd-base-url-marker.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Base/koBindings.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Base/cooltipKoBridge.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Ace/bundles-config.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/requirejs-plugins/json.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/require/css.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Localization/LocalizationService.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Base/tableSorter.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Rx/main.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Knockout/knockout-3.4.2.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/common.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/globalization/main.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/require/text.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Utils/internationalization.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Tipped.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/zxcvbn/zxcvbn.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/moment/moment.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/accounting/accounting.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/LinqJS/linq.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/Base/api.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/images/bits/ddl.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
	"Url=https://vmsrs.erecruitcloud.com/Mvc/Content/Images/icons/warning.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
	LAST);

web_url("KendoConfiguration", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Localization/KendoConfiguration", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", 
	"Snapshot=t2.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=../Content/js/Base/dynamic.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/Base/seq.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/Base/userSettings.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/Base/keys.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/Rx/rx.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/Localization/ResourceKeys.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/Rx/rx.time.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/Rx/rx.dom.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/Rx/rx.binding.min.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/globalize.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/globalize/number.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/globalize/currency.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/globalize/date.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/globalize/plural.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/cldr/event.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/cldr/supplemental.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	"Url=../Content/js/External/globalization/cldr.js", "Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
	LAST);

web_url("LocalizationModel", 
	"URL=https://vmsrs.erecruitcloud.com/Mvc/Localization/LocalizationModel?0-1", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", 
	"Snapshot=t3.inf", 
	"Mode=HTML", 
	LAST);



lr_end_transaction("login page",LR_AUTO);

lr_start_transaction("homepage");

web_add_header("Origin", 
	"https://vmsrs.erecruitcloud.com");

web_add_auto_header("Upgrade-Insecure-Requests", 
	"1");
/* Added by Async CodeGen.
ID=Push_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://vmsrs.erecruitcloud.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_0_RequestCB
	Push_0_ResponseHeadersCB
	Push_0_ResponseBodyBufferCB
	Push_0_ResponseCB
 */


/* Added by Async CodeGen.
ID=Push_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://vmsrs.erecruitcloud.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_0_RequestCB
	Push_0_ResponseHeadersCB
	Push_0_ResponseBodyBufferCB
	Push_0_ResponseCB
 */
/*	web_reg_async_attributes("ID=Push_0", 
		"Pattern=Push", 
		"URL=https://vmsrs.erecruitcloud.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6", 
		"RequestCB=Push_0_RequestCB", 
		"ResponseHeadersCB=Push_0_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_0_ResponseBodyBufferCB", 
		"ResponseCB=Push_0_ResponseCB", 
		LAST);
*/
/* Added by Async CodeGen.
ID=Push_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://vmsrs.erecruitcloud.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_0_RequestCB
	Push_0_ResponseHeadersCB
	Push_0_ResponseBodyBufferCB
	Push_0_ResponseCB
 */
/*	web_reg_async_attributes("ID=Push_0", 
		"Pattern=Push", 
		"URL=https://vmsrs.erecruitcloud.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6", 
		"RequestCB=Push_0_RequestCB", 
		"ResponseHeadersCB=Push_0_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_0_ResponseBodyBufferCB", 
		"ResponseCB=Push_0_ResponseCB", 
		LAST);
*/

web_submit_data("Login.aspx", 
	"Action=https://vmsrs.erecruitcloud.com/Login.aspx?ReturnUrl=%2f", 
	"Method=POST", 
	"RecContentType=text/html", 
	"Referer=", 
	"Snapshot=t4.inf", 
	"Mode=HTML", 
	"EncodeAtSign=YES", 
	ITEMDATA, 
	"Name=__LASTFOCUS", "Value=", ENDITEM, 
	"Name=ctl00_radStylesheetManager_TSSM", "Value=;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:53e1db5a:d126a8ef", ENDITEM, 
	"Name=ctl00_radScriptManager_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:b7585254-495e-4311-9545-1f910247aca5:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c", ENDITEM, 
	"Name=__EVENTTARGET", "Value=", ENDITEM, 
	"Name=__EVENTARGUMENT", "Value=", ENDITEM, 
	"Name=__VIEWSTATE", "Value={Viewst1}", ENDITEM, 
	"Name=__VIEWSTATEGENERATOR", "Value={Viewgt1}", ENDITEM, 
	"Name=ctl00$hidNewLayoutName", "Value=", ENDITEM, 
	"Name=ctl00_tipPhoneNumber_ClientState", "Value=", ENDITEM, 
	"Name=ctl00$cphMain$logIn$UserName", "Value=demouser@erecruit.com", ENDITEM, 
	"Name=ctl00$cphMain$logIn$Password", "Value=boston115", ENDITEM, 
	"Name=ctl00$cphMain$logIn$Login", "Value=Log In", ENDITEM, 
	EXTRARES, 
	"Url=/ScriptResource.axd?d=44SGZo2TqL-tI83tWSKG8qKB9UZnvLKDSxUi-NIFy3yxTKJqxSWjJszXi7N5Vq2I-pDh4lzE2aedAgysznkiqQmFF8CPdPqk-e3lCPim0zvTyyQ5iVh_MbUxPwADjrlT_DYlqg0MQqXdscQsjTsKLnAFymmFL5Mei2yq6piAErmURXsI0&t=ffffffff999c3159", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=nM7jnaDKzh8r0qooI-UZcLRDfwSRG7XKH8vedy3aww5zKlTICQoAd64X1JVcMK5p2ivHIp3YFOQqqCc9D3cjUDMw1_brU7KlI8W5eh6R7iwppIAov5f1J9QUTJQuFYeh79_qyA2&t=3967d01", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=EFBgsmtsU0pdW_GJ6_OLMOrpZnHX-DWOrBZ7HrzZ8BxeBZf6YnNWFzULdDmVnk70LtTO4gZ_GyqSkGD95bPbJwgHe11fjxzISOEzOaL5e0drVbOMzhrLbjDWCA35mcSvn7z-MyNf7pU_iUvtiyL7sgvvlP0Z6zAimtFRWZkedUYXrqEu0&t=ffffffff999c3159", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=YN85L9yCqHa46htTwACglZBRKHzwPIpqenx2u72M76RQV_y-pwroGZmbSjFPIkTs7VklX_g4cX7dI8TxvvPZ_oP9C1u3utgsyFoRaLMXklAUFpGoHUSepS8YO0p2X4rI_CPCoXF81NlH1Qse3Vm6Pj8RLWc1&t=3967d01", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=MFXKNQ8ab_LEQJ6hHeptPLbDgUby09PE2PQ5-iasaA4Mb6j84cjUM6hvPXK7V0csracmME3AcOt51Yu1PvN7MlpI0rhQv48pTd2dPbJrVfw1UzZdO6nh6QF8jd-A1JSmtQuzA-x7vzhb6jQ_2Gx8-UAlJGA1&t=3967d01", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=OPUKgPGoeoBBrUdA2DMmoomsFtTsVq7K1ejHgdz4UfE45IXBH_Oh6eu4jGVBwMUhMdXN3LyWI3NliLXRxx_sT3zg8gapIEImnnyughuGO39GyMKfdvffTxQjaHhtLkSrYhu3Lw241Pp2RzG5yvQS1gesBqY1&t=3967d01", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/Mvc/Content/Images/icons/14/cross.png", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/ScriptResource.axd?d=-zZOk8-NgGZhYzHzZuTKA2_9EbckOn7KTEpbivPPfxQqqi6BwtvEVAeHw5XD8-e5FNyTcWEj91fUvzVvwqxsDkSBDLxyplONQSelOh_IWQovz_thK1qigzaD8MTuVSKZoOvL_8R8LAFqU8pgKDpFNP-tnl81&t=3967d01", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/Mvc/Content/Images/icons/refresh.png", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Logout.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Notifications/Notifications.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/dispatch.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/mvc/dispatch/hubs?", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/TopMenu/TopMenu.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/tslib.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Controls/Base.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/TopMenu/Items.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/External/jQuery-plugins/menu-aim.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Frame/container.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Controls/Popup.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Search/interfaces.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Controls/InfoBox.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/MVC/Content/js/Controls/stylesheet.js", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	"Url=/App_Themes/Default/images/logos/erecruit.png", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
//	"Url=/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6", "Referer=https://vmsrs.erecruitcloud.com/Recruiter/", ENDITEM, 
	LAST);

web_url("Recruiter.aspx", 
	"URL=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t5.inf", 
	"Mode=HTML", 
	LAST);

web_revert_auto_header("Upgrade-Insecure-Requests");

web_url("Logout.html", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Templates/Logout.html", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t6.inf", 
	"Mode=HTML", 
	LAST);

web_url("TopMenu.html", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Frame/TopMenu/Templates/TopMenu.html", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t7.inf", 
	"Mode=HTML", 
	LAST);

web_url("ShortcutCommandWindow.html", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Frame/ShortcutManager/Templates/ShortcutCommandWindow.html", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t8.inf", 
	"Mode=HTML", 
	LAST);

web_url("KendoConfiguration_2", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Localization/KendoConfiguration", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t9.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3ab7585254-495e-4311-9545-1f910247aca5%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
	"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a854aa0a7%3a607498fe%3a9cdfc6e7%3a7165f74", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/Services/UpdateService.asmx/js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	LAST);

web_url("SearchSidebarButtons.html", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.html", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t10.inf", 
	"Mode=HTML", 
	LAST);

web_url("InfoBox.html", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t11.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=/WebResource.axd?d=DMDPiNJHkDcJW29r0627GIpiNvka6f90iYZ6lcbOoud_aiTQlcrpAQOiDxLHhA0Qb3xBg8TKlvsFi0IMqolY5kPNLuqjHGt2MOf1JBnK-sFbFk1JWAhFDbE23AgisF13Pw1p8O-X8FY-x4EJr7rn4bCik4yfqxsexc28dHlrl61xmPgk0&t=636537841818927740", "Referer=https://vmsrs.erecruitcloud.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
	"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3af75bf8aa%3a35583c8c%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e", ENDITEM, 
	LAST);

web_url("KendoConfiguration_3", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Localization/KendoConfiguration", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t12.inf", 
	"Mode=HTML", 
	LAST);

web_add_auto_header("X-Requested-With", 
	"XMLHttpRequest");

web_custom_request("1120", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/CandidatesWithStatus/View/1120", 
	"Method=GET", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t13.inf", 
	"Mode=HTML", 
	LAST);

web_custom_request("1121", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/PlacementsEndingSoon/View/1121", 
	"Method=GET", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t14.inf", 
	"Mode=HTML", 
	LAST);

web_custom_request("AccountingPayroll", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/AccountingPayroll", 
	"Method=GET", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t15.inf", 
	"Mode=HTML", 
	LAST);

web_custom_request("663", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/ScheduledItemCalendar/View/663", 
	"Method=GET", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t16.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1549581024239", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1549581024240", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/Dashboard/CandidatesWithStatus.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/Dashboard/PlacementsEndingSoon.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/Localization/LocalizationUtils.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/Localization/KendoListView.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/External/fullcalendar/fullcalendar.min.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	LAST);

web_revert_auto_header("X-Requested-With");

web_url("FullCalendar", 
	"URL=https://vmsrs.erecruitcloud.com/Mvc/Localization/FullCalendar", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t17.inf", 
	"Mode=HTML", 
	EXTRARES, 
	"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.css", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/External/jQuery-plugins/jquery.numeric.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	"Url=/MVC/Content/js/External/jQuery-plugins/jquery.ui.numeric.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
	LAST);

web_url("LocalizationModel_2", 
	"URL=https://vmsrs.erecruitcloud.com/Mvc/Localization/LocalizationModel?1-1", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t18.inf", 
	"Mode=HTML", 
	LAST);

web_add_auto_header("X-Requested-With", 
	"XMLHttpRequest");

web_url("CandidatesWithStatusData", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/CandidatesWithStatusData?dashboardWidgetID=1120&pageNumber=0&pageSize=10&statusID=32", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t19.inf", 
	"Mode=HTML", 
	LAST);

web_url("ScheduledItemCalendarData", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222019-01-27T00%3A00%3A00.000Z%22&endDate=%222019-03-03T00%3A00%3A00.000Z%22&calendarView=month&scheduledItemListType=User&scheduleItemTypes=&categories=&ownerTypes=", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t20.inf", 
	"Mode=HTML", 
	LAST);

web_custom_request("negotiate", 
	"URL=https://vmsrs.erecruitcloud.com/mvc/dispatch/negotiate?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&clientProtocol=1.3&_=1549581023235", 
	"Method=GET", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t21.inf", 
	"Mode=HTML", 
	"EncType=application/json; charset=UTF-8", 
	LAST);

web_add_header("Origin", 
	"https://vmsrs.erecruitcloud.com");

web_submit_data("send", 
	"Action=https://vmsrs.erecruitcloud.com/mvc/dispatch/send?transport=serverSentEvents&connectionToken=a7M22jjq6MRAVP0An9EBFY1JZDAFy444MREH1vfHLQ1VKzY2HtMBn5eg%2FkhGsBff4SWwZ0RzzCFsK30DVQYgDOYcerm7rtace9ZXBy41RGeblMyfzxcMt%2BC4LWnQ7yuV6tg0Xg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D", 
	"Method=POST", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t22.inf", 
	"Mode=HTML", 
	ITEMDATA, 
	"Name=data", "Value={\"H\":\"notification\",\"M\":\"Register\",\"A\":[[\"/user/3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d/phone\",\"/user/logout\"]],\"I\":0}", ENDITEM, 
	LAST);

web_url("CheckExpiration", 
	"URL=https://vmsrs.erecruitcloud.com/Mvc/User/CheckExpiration", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
	"Snapshot=t23.inf", 
	"Mode=HTML", 
	LAST);

web_url("PlacementsEndingSoonData", 
	"URL=https://vmsrs.erecruitcloud.com/MVC/Dashboard/PlacementsEndingSoonData?dashboardWidgetID=1121&pageNumber=0&pageSize=10&sortBy=EndDateAsc&viewMy=MyDepartment&lookAheadDays=180&lookBackDays=0&positionRoles=0", 
	"Resource=0", 
	"RecContentType=application/json", 
	"Referer=https://vmsrs.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
	"Snapshot=t24.inf", 
	"Mode=HTML", 
	LAST);



lr_end_transaction("homepage",LR_AUTO);
	
	return 0;
}
