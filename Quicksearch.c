Quicksearch()
{

	web_url("device-desc.xml", 
		"URL=http://192.168.1.121:8008/ssdp/device-desc.xml", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t65.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");
 

	web_url("Login.aspx",
		"URL=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t73.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_7_PLAIN}", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/WebResource.axd?d={AspNet_WebResource_1_PLAIN}", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/WebResource.axd?d={AspNet_WebResource_PLAIN}", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/App_Themes/Default/javascript/telerik-hacks.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/amd-base-url-marker.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/cooltipKoBridge.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM,
		"URL=/MVC/Content/js/External/Ace/bundles-config.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/koBindings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Localization/LocalizationService.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/App_Themes/Default/images/logos/BelflexLogo.png", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/zxcvbn/zxcvbn.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Controls/Tipped.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/common.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Knockout/knockout-3.1.0.debug.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Rx/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/tableSorter.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/requirejs-plugins/json.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Utils/internationalization.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/moment/moment.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/LinqJS/linq.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/seq.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/accounting/accounting.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/api.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/keys.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/dynamic.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/Base/userSettings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Rx/rx.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Rx/rx.time.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Rx/rx.dom.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/globalize.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/Rx/rx.binding.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/globalize/number.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/globalize/currency.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/globalize/plural.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/globalize/date.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/require/text.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/cldr.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/MVC/Content/js/External/globalization/cldr/event.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM,
		"URL=/Mvc/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/MVC/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM,
		"URL=/MVC/Content/images/select2.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM,
		"URL=/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM,
		"URL=/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM,
		LAST);

	web_url("LocalizationModel", 
		"URL=https://staff.belflex.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/globalization/cldr/supplemental.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/favicon.ico", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		LAST);
 

/* Added by Async CodeGen.
ID=Push_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=bpxwlWX78O1MT5pjJ1VKwKUFiPgILM7f6LTi8UtQ0ZrQ404toTgoX0uJVZsm9fzqbpylY4MyQeZMfNJSK%2FbIzLrVqeOgLzHpa0T3xKC1omqr8OGX%2Br4P3pyz5qdkXbNvlZUXUA%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_0_RequestCB
	Push_0_ResponseHeadersCB
	Push_0_ResponseBodyBufferCB
	Push_0_ResponseCB
 */
	web_reg_async_attributes("ID=Push_0", 
		"Pattern=Push", 
		"URL=https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=bpxwlWX78O1MT5pjJ1VKwKUFiPgILM7f6LTi8UtQ0ZrQ404toTgoX0uJVZsm9fzqbpylY4MyQeZMfNJSK%2FbIzLrVqeOgLzHpa0T3xKC1omqr8OGX%2Br4P3pyz5qdkXbNvlZUXUA%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8", 
		"RequestCB=Push_0_RequestCB", 
		"ResponseHeadersCB=Push_0_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_0_ResponseBodyBufferCB", 
		"ResponseCB=Push_0_ResponseCB", 
		LAST);

	web_submit_data("Login.aspx_2",
		"Action=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t77.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__LASTFOCUS", "Value=", ENDITEM,
		"Name=ctl00_radStylesheetManager_TSSM", "Value=;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:53e1db5a:d126a8ef", ENDITEM,
		"Name=ctl00_radScriptManager_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:92dc34f5-462f-43bd-99ec-66234f705cd1:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c", ENDITEM,
		"Name=__EVENTTARGET", "Value=", ENDITEM,
		"Name=__EVENTARGUMENT", "Value=", ENDITEM,
		"Name=__VIEWSTATE", "Value=/wEPDwUKMTYzMDU1NjE3NRAWAh4TVmFsaWRhdGVSZXF1ZXN0TW9kZQIBZBYCZg9kFgRmD2QWAgIBDxUEOi9NVkMvQ29udGVudC9qcy9FeHRlcm5hbC9LZW5kby9zdHlsZXMva2VuZG8uY29tbW9uLm1pbi5jc3M7L01WQy9Db250ZW50L2pzL0V4dGVybmFsL0tlbmRvL3N0eWxlcy9rZW5kby51bmlmb3JtLm1pbi5jc3MoL01WQy9Db250ZW50L2Nzcy9MaWJyYXJ5L2xpYnJhcnkubWluLmNzcx0vTVZDL0NvbnRlbnQvY3NzL2VyZWNydWl0LmNzc2QCBw9kFgQCBQ9kFgJmDxUBLkFwcF9UaGVtZXMvRGVmYXVsdC9qYXZhc2NyaXB0L3RlbGVyaWstaGFja3MuanNkAgsPZBYEAgUPZBYCZg9kFgRmD2QWBAIBDw8WAh4EVGV4dAUUV2VsY29tZSB0byBlcmVjcnVpdC5kZAIFD2QWAmYPZBYCAgEPZBYEAgMPD2QWAh4MYXV0b2NvbXBsZXRlBQJvbmQCBw8PZBYCHwIFA29mZmQCAQ9kFgYCBQ8PFgIeB1Zpc2libGVoZGQCCw8WAh4LXyFJdGVtQ291bnQCARYCAgEPZBYCZg8VASdQYXNzd29yZCBtdXN0IGJlIGF0IGxlYXN0IDggY2hhcmFjdGVycy5kAg0PZBYCZg9kFgICAQ88KwAEAGQCBw9kFgICAQ8PFgIfAQUNVXBsb2FkIFJlc3VtZWRkGAIFHl9fQ29udHJvbHNSZXF1aXJlUG9zdEJhY2tLZXlfXxYBBRRjdGwwMCR0aXBQaG9uZU51bWJlcgUXY3RsMDAkY3BoTWFpbiRtdWx0aVZpZXcPD2RmZMri2VLD5z9cOEVhzzjl5nB9UcDV", ENDITEM,
		"Name=__VIEWSTATEGENERATOR", "Value=C2EE9ABB", ENDITEM,
		"Name=ctl00$hidNewLayoutName", "Value=", ENDITEM,
		"Name=ctl00_tipPhoneNumber_ClientState", "Value=", ENDITEM,
		"Name=ctl00$cphMain$logIn$UserName", "Value=dynatrace@erecruit.com", ENDITEM,
		"Name=ctl00$cphMain$logIn$Password", "Value=Apple2020!", ENDITEM,
		"Name=ctl00$cphMain$logIn$Login", "Value=Log In", ENDITEM,
		EXTRARES,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_1_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_2_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_5_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_6_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_3_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_4_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d={AspNet_ScriptResource_PLAIN}", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Content/Images/icons/refresh.png", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Content/Images/icons/14/cross.png", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Logout.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/dispatch.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/hubs?", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Notifications/Notifications.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/TopMenu.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Base.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/menu-aim.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/Items.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/container.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Localization/ResourceKeys.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Popup.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Search/interfaces.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/InfoBox.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/require/css.min.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/stylesheet.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/negotiate?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&clientProtocol=1.3&_=1583528753125", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/User/CheckExpiration", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=bpxwlWX78O1MT5pjJ1VKwKUFiPgILM7f6LTi8UtQ0ZrQ404toTgoX0uJVZsm9fzqbpylY4MyQeZMfNJSK%2FbIzLrVqeOgLzHpa0T3xKC1omqr8OGX%2Br4P3pyz5qdkXbNvlZUXUA%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		LAST);

	web_url("Recruiter.aspx", 
		"URL=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a854aa0a7%3a607498fe%3a9cdfc6e7%3a7165f74", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("23953", 
		"URL=https://staff.belflex.com/MVC/Dashboard/CompanyFlashReportTemp/View/23953", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6171", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Opportunities/View/6171", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6170", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Tasks/View/6170", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6172", 
		"URL=https://staff.belflex.com/MVC/Dashboard/MyOpenPositions/View/6172", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("10057", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/10057", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583528759664", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("6173", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/6173", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583528759665", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583528759666", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("6174", 
		"URL=https://staff.belflex.com/MVC/Dashboard/PlacementsEndingSoon/View/6174", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583528759667", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("Logout.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Templates/Logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/WebResource.axd?d=DMDPiNJHkDcJW29r0627GIpiNvka6f90iYZ6lcbOoud_aiTQlcrpAQOiDxLHhA0Qb3xBg8TKlvsFi0IMqolY5kPNLuqjHGt2MOf1JBnK-sFbFk1JWAhFDbE23AgisF13Pw1p8O-X8FY-x4EJr7rn4bCik4yfqxsexc28dHlrl61xmPgk0&t=635004147360000000", "Referer=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3af75bf8aa%3a35583c8c%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e", ENDITEM, 
		LAST);

	web_url("TopMenu.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/TopMenu/Templates/TopMenu.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ShortcutCommandWindow.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/ShortcutManager/Templates/ShortcutCommandWindow.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:1085712241&cup2hreq=df365dbc6e97d94ad8d5b818279e2cafc0f71b206df83b582c445ce35ea4f40f", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{c5c7a7c1-563a-43a3-b96d-a0623ce63990}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4ea5ca99-2a1a-4154-b994-e7a75316b3de}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":["
		"{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{f7443c60-93c1-40a6-984c-359dabfb823b}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.715c48ce73b7ee71924470b10e920a4e23cd6f9c860f367d00feaff0d03eb52f\"}]},\"ping\":{\""
		"ping_freshness\":\"{1fb05ce3-13ca-450d-85a9-e7715179d0b8}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"9.11.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a5a4a3ea6a9554b16bcb351daabaeec517696212c4c737d176fe33b58bcc51a7\"}]},\"ping\":{\"ping_freshness\":\"{2318f5b6-d348-4b9e-9249-3bb358ef04dc}\",\"rd\":4813},\"tag\":\"eset_exp_b\",\""
		"updatecheck\":{},\"version\":\"80.229.200\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{a45afc3c-60ab-41f7-9236-f6ee8a09d475}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\""
		"enabled\":true,\"ping\":{\"ping_freshness\":\"{5ee89828-3075-4210-845b-a40974bc97cf}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{168677b4-ede5-4830-9d09-0a89ebfe5166}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome"
		" [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e1e6a6499ed573c41c3289839a72deba778a6a2cc755a20748018f7e0eabdb6e\"}]},\"ping\":{\"ping_freshness\":\"{3c088d4a-20e3-456c-b25a-46ce86e80fe7}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"32.0.0.330\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f10e3d9d-f489-4cff-ab85-102c66007e87}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.03cf60af46a7db9e753e46bd5dcc6528b2c6d61f7275aeea7e447ef574fa6c35\"}]},\"ping\":{\"ping_freshness\":\"{128df1ca-7513-449e-bcc0-2f40727d4f37}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"298\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\""
		":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{d1fd7bb5-d77f-4416-a58b-c2d1b84761e7}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{61bb12a0-9041-4a8e-8540-bfb19af5a617}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\""
		"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54152f3e519e6c41b0457efb05f8ebdef922c12ce7fbdc28613f0a86c874251a\"}]},\"ping\":{\"ping_freshness\":\"{2c316e01-65cf-49e1-82e9-8d1c593fc856}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"5734\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64"
		"\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{8a89ac3d-a328-433b-87dd-3bd8fa2eafac}\",\"sessionid\":\"{dabba699-b6dd-4812-9c61-ed58181d4727}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		EXTRARES, 
		"Url=https://staff.belflex.com/MVC/Content/js/Dashboard/Opportunities.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Dashboard/Tasks.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);
 

	web_url("SearchSidebarButtons.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Dashboard/TasksData?pageNumber=0&pageSize=20&sortBy=&lookBackwardDays=5&lookForwardDays=5&filter=&scheduledItemCategories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/PlacementsEndingSoonData?dashboardWidgetID=6174&pageNumber=0&pageSize=10&sortBy=PositionID+DESC&viewMy=MyDepartment&lookAheadDays=7&lookBackDays=7&positionRoles=15", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.ui.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/fullcalendar/fullcalendar.min.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/OpportunitiesData?dashboardWidgetID=6171&pageNumber=0&pageSize=10&sortBy=OpportunityStage+ASC&viewMy=My", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/9.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("InfoBox.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.css", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/match_disabled.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=1%2C2%2C10%2C11%2C20%2C21%2C25%2C100%2C110%2C200&categories=53%2C54%2C25%2C55%2C56%2C57%2C64", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=&categories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_submit_data("send", 
		"Action=https://staff.belflex.com/mvc/dispatch/send?transport=serverSentEvents&connectionToken=bpxwlWX78O1MT5pjJ1VKwKUFiPgILM7f6LTi8UtQ0ZrQ404toTgoX0uJVZsm9fzqbpylY4MyQeZMfNJSK%2FbIzLrVqeOgLzHpa0T3xKC1omqr8OGX%2Br4P3pyz5qdkXbNvlZUXUA%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value={\"H\":\"notification\",\"M\":\"Register\",\"A\":[[\"/user/08b5c73d-8e4d-467c-82be-0c6789f8f6a5/phone\",\"/user/logout\"]],\"I\":0}", ENDITEM, 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZyzLyA-0LowYjLVb16-AkIy2bI1v8JCMtpaBTWiQU", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZvc7jxgIi-v4jLUClt5IkIy3H4IIQJCMtzzx6xiQU", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRpgrsIXvPyIjLZFhlU4kIy1ApbeSJCMtx-CCECQjLc88esYkFA==", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZJfVC8FxtArQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtVvXr4CQjLZsjW_wkIy2loFNaJBQ=", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZmAxT-dM5nWMjLc88esYkFA==", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("1_Quicksearch");

	web_url("quicksearchresults.aspx", 
		"URL=https://staff.belflex.com/Pages/general/quicksearchresults.aspx?refid=995&q=Java", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a58366029%3a7c926187%3a8674cba1%3ab7778d6c%3ac08e9f8a%3a2003d0b8%3a1e771326%3aaa288e2d%3ae330518b%3ac8618e41%3ae4f8f289%3aa51ee93e%3a59462f1%3a9cdfc6e7%3a7165f74", "Referer=https://staff.belflex.com/Pages/general/quicksearchresults.aspx?refid=995&q=Java", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/general/quicksearchresults.aspx?refid=995&q=Java", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZY3AzbhF5wkAjLc3UuickIy3trmydJCMt1VWpASQjLcAAgDokIy2R1yRsJCMtfLmV7yQjLUcEEuMkIy2IenYTJCMtNM5ZMiQjLSgNx8gkIy3e3D1fJCMt2Qpm4CQjLXNW3LskFA==", "Referer=", ENDITEM, 
		"Url=/WebResource.axd?d=ISC7n5gPZg9F-TzOXS3vnp6qeO3Soa4sNSyznK_XKjKPQ1dNgQlgGC0L71TIKSr-QYj9t9jeYZyDMcbAHeCcz3lU74D33KQSLXPLegrg8bMj1N380TNGdtEzf8OqrH-SEogueBVnKFxCQJQBW1XxeMOcvLD1SLjWMEZ_cbWxZcq2ztpW0&t=635004147360000000", "Referer=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3a45085116%3a9e1572d6%3aaac1aeb7%3a1c2121e%3aed2942d4%3ac73cf106%3ac86a4a06%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3aefe88710%3aecd3dcdf%3a39d40164%3ab11a2e4%3a36964293%3a8f723d3e%3ac531f12c", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/general/quicksearchresults.aspx?refid=995&q=Java", ENDITEM, 
		"Url=/WebResource.axd?d=ciCYtNQ77K32BtAU80B98velvEboXC1KX__0pJO_ZOASPULkJNbaKJzYQIax4ylk0cuk8e4rpMrjOSwlBn21ezr0O8zriu_VxM8L0xWkEuhha70NyLCQtIg67Davq_XhCBfofoLqskTFyuGC0IVfCU5rx05MOx3Sw3DYZaxtmQolNHae0&t=635004147360000000", "Referer=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3a45085116%3a9e1572d6%3aaac1aeb7%3a1c2121e%3aed2942d4%3ac73cf106%3ac86a4a06%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3aefe88710%3aecd3dcdf%3a39d40164%3ab11a2e4%3a36964293%3a8f723d3e%3ac531f12c", ENDITEM, 
		LAST);

/* Added by Async CodeGen.
ID = Push_0
 */
	web_stop_async("ID=Push_0", 
		LAST);

	lr_end_transaction("1_Quicksearch",LR_AUTO);

	return 0;
}