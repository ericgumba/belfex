Position_Search()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t306.inf", 
		LAST);

/* Added by Async CodeGen.
ID = Push_2
 */
	web_stop_async("ID=Push_2", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t307.inf", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=80", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t308.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://api.mixpanel.com/decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1583612854016", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t309.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_submit_data("track", 
		"Action=https://api.mixpanel.com/track/?ip=1&_=1583612854032", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t310.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value="
		"eyJldmVudCI6ICJtcF9wYWdlX3ZpZXciLCJwcm9wZXJ0aWVzIjogeyIkb3MiOiAiV2luZG93cyIsIiRicm93c2VyIjogIkNocm9tZSIsIiRjdXJyZW50X3VybCI6ICJjaHJvbWUtZXh0ZW5zaW9uOi8vbWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkvX2dlbmVyYXRlZF9iYWNrZ3JvdW5kX3BhZ2UuaHRtbCIsIiRicm93c2VyX3ZlcnNpb24iOiA4MCwiJHNjcmVlbl9oZWlnaHQiOiA5MDAsIiRzY3JlZW5fd2lkdGgiOiAxNDQwLCJtcF9saWIiOiAid2ViIiwiJGxpYl92ZXJzaW9uIjogIjIuMzQuMCIsIiRpbnNlcnRfaWQiOiAiNXJ0NmsxOXc5emIyNDJpdiIsInRpbWUiOiAxNTgzNjEyODU0LjAzMSwiZGlzdGluY3RfaWQiOiAiMTcwNTllZGZhN2EzODYtMD"
		"UxNDk2Y2Y3NWFjNDItMzMzNjVhMDEtMWZhNDAwLTE3MDU5ZWRmYTdjNzQ0IiwiJGRldmljZV9pZCI6ICIxNzA1OWVkZmE3YTM4Ni0wNTE0OTZjZjc1YWM0Mi0zMzM2NWEwMS0xZmE0MDAtMTcwNTllZGZhN2M3NDQiLCIkaW5pdGlhbF9yZWZlcnJlciI6ICIkZGlyZWN0IiwiJGluaXRpYWxfcmVmZXJyaW5nX2RvbWFpbiI6ICIkZGlyZWN0IiwibXBfcGFnZSI6ICJjaHJvbWUtZXh0ZW5zaW9uOi8vbWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkvX2dlbmVyYXRlZF9iYWNrZ3JvdW5kX3BhZ2UuaHRtbCIsIm1wX2Jyb3dzZXIiOiAiQ2hyb21lIiwibXBfcGxhdGZvcm0iOiAiV2luZG93cyIsInRva2VuIjogIjk0YjVjMzExNjkyZTdjOWQwM2NlZjljOWE3YTMy"
		"ZWFmIn19", ENDITEM, 
		EXTRARES, 
		"Url=http://192.168.1.121:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("track_2", 
		"URL=https://api.mixpanel.com/track/?ip=1&_=1583612856979", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t311.inf", 
		"Mode=HTML", 
		"Body=data="
		"eyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODAsIiRzY3JlZW5faGVpZ2h0IjogOTAwLCIkc2NyZWVuX3dpZHRoIjogMTQ0MCwibXBfbGliIjogIndlYiIsIiRsaWJfdmVyc2lvbiI6ICIyLjM0LjAiLCIkaW5zZXJ0X2lkIjogIjAwM3JzaW1wZTg3MDNxNm0iLCJ0aW1lIjogMTU4MzYxMjg1Ni45NzgsImRpc3RpbmN0X2lkIjogIjE3MDU5ZWRmYTdhMzg2LTA1MT"
		"Q5NmNmNzVhYzQyLTMzMzY1YTAxLTFmYTQwMC0xNzA1OWVkZmE3Yzc0NCIsIiRkZXZpY2VfaWQiOiAiMTcwNTllZGZhN2EzODYtMDUxNDk2Y2Y3NWFjNDItMzMzNjVhMDEtMWZhNDAwLTE3MDU5ZWRmYTdjNzQ0IiwiJGluaXRpYWxfcmVmZXJyZXIiOiAiJGRpcmVjdCIsIiRpbml0aWFsX3JlZmVycmluZ19kb21haW4iOiAiJGRpcmVjdCIsIiR0aXRsZSI6ICIiLCIkZXZlbnRfdHlwZSI6ICJwYWdldmlldyIsIiRjZV92ZXJzaW9uIjogMSwiJGhvc3QiOiAibWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkiLCIkcGF0aG5hbWUiOiAiL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCJ0b2tlbiI6ICI5NGI1YzMxMTY5MmU3YzlkMDNjZWY5YzlhN2Ez"
		"MmVhZiJ9fQ==", 
		LAST);

	web_url("Login.aspx", 
		"URL=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t312.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-33054271-5&cid=170495006.1560359615&jid=551806634&_v=5.7.2&z=661611718", "Referer=", ENDITEM, 
		"Url=/WebResource.axd?d=m3cmci195IuJDEJw8Ad9w37t-ar6S_p30DNET5tULqLw7XFJh2YiN6Ss8jqHn9dSsoMnt6V8ZKqZirvlHa70GP0TrFw1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/ScriptResource.axd?d=9x5OvJaQVu0vj9j4xaQBlKKOEaHrkzcdmYjM4RFhcq_Djt9kUkyhoYU-zBekcY7ErwHvsRc6Fag_rhwv4YrfJqE6BjlCkvm8UNUUm_-qZjnXRoo20cEn-b5wePLrceOAAkBxDE5DWZN0-d_FIEREFdILw641&t=ffffffff93f2983c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/WebResource.axd?d=ppYwzJsRb6AhcOLm41MnVR6O_dxAYwx8kQEpShx-opg0jHDm6nly6o_cE0sit9ie8fEwOeM0k4Lm4iI1v9oFaDaP91E1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/App_Themes/Default/javascript/telerik-hacks.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/amd-base-url-marker.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/koBindings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/cooltipKoBridge.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Ace/bundles-config.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/Localization/LocalizationService.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/App_Themes/Default/images/logos/BelflexLogo.png", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Tipped.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/zxcvbn/zxcvbn.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout-3.1.0.debug.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/common.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/tableSorter.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Utils/internationalization.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/requirejs-plugins/json.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/moment/moment.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/seq.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/accounting/accounting.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/api.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/LinqJS/linq.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/keys.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/dynamic.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/userSettings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.binding.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.dom.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.time.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/number.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/currency.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/date.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/plural.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/event.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/require/text.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/supplemental.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/images/select2.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=80.0.3987.132&lang=en-US&acceptformat=crx3&x=id%3Daknpkdffaafgjchaibgeefbgmgeghloj%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D0%2526dr%253D1&x=id%3Dmgndgikekgjfcpckkfioiadnlibdjbkf%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x="
		"id%3Dfdmmgilgnpjigdojojpjoooidkmcomcm%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D1&x=id%3Dmhbpoeinkhpajikalhfpjjafpfgjnmgk%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D0%2526dr%253D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t313.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:790817899&cup2hreq=ae75ab5e50ad4c123b3869cd6fd0d9e656d85b440c1df1f6768612d5d90d48ee", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t314.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{60f78b87-5022-4e73-86ca-bdad58e9d4c6}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{2cfecdff-ebc3-4a55-87bb-ab687f8dba3f}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{dc5ed5b4-5fca-4b7d-a916-0a9c958c1b82}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{ca8b0df7-9653-4743-ba4b-b8333e9c6374}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"eaobjglgjonmmebelfnebghejfmmhamm\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2.2.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{85d0b575-a610-42fa-9304-8a56b46d83a0}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"2.2.0\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{d51410e7-edb4-4787-9345-2a94f5646a5c}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"fhbjgbiflinjbdggehcddcbncdddomop\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.5.5.4\"}]},\"ping\":{\"ping_freshness\":\"{33d312ec-1247-449f-99bf-2263afcd2f64}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"5.5.4\"},{\"appid\":\"fmkadmapgofadopljbjfkapdkoienihi\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.9609b9d1c264e3013b005a4a648cdb911821a7ee2d80a9dba4f206489bfc5c16\"}]},\"ping\":{\"ping_freshness\":\"{d74b98b8-670c-4f44-9de1-95df2ab016e3}\",\""
		"rd\":4814},\"updatecheck\":{},\"version\":\"4.5.0\"},{\"appid\":\"fngmhnnpilhplaeedifhccceomclgfbg\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.5.0\"}]},\"ping\":{\"ping_freshness\":\"{31dda6fe-4ef2-4dc1-ac30-5150ad49f8cd}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.5.0\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"2.1.9\"}]"
		"},\"ping\":{\"ping_freshness\":\"{1b08d1a4-3c17-4e5c-b398-97b4736a8686}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.9\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.2bceb5a5ce9df5e56e7cbc154eb1ba66b61452aa2346f1f5e08ce803541743f5\"}]},\"ping\":{\"ping_freshness\":\"{f72fa5d7-cec0-4b77-b5ba-5be38c5c34d3}\",\"rd\":4814},\"updatecheck\":{},\"version\":\""
		"4.7.3\"},{\"appid\":\"gpieacagdjdfbifodokiccinpbacemjf\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.6.2.27013\"}]},\"ping\":{\"ping_freshness\":\"{42501f0a-7e57-4afa-8138-d072911a4211}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"6.2.27013\"},{\"appid\":\"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.8.1\"}]},"
		"\"ping\":{\"ping_freshness\":\"{32c6e10a-bdcf-4df4-83c1-90e620be1ea4}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"4.8.1\"},{\"appid\":\"nkomfibbgccdjcahcpleidblgknecfhh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.9.4\"}]},\"ping\":{\"ping_freshness\":\"{5f703cc6-04c9-4a2c-94bc-c84f7601fca7}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.9.4\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\""
		"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{e18a1135-2fba-4a97-90ff-47a1d27ecb10}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"ogmipfbbmnonoiinjeoipiogcadnebcb\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{9dfba42b-92ea-4260-9546-fff3b20bd687}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.0.0.0\"},{\"appid\":\"pioclpoplcdbaefihamjohnefbikjilc\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.7.12.4\"}]},\"ping\":{\"ping_freshness\":\"{9c0d1841-c647-4401-b1fe-f6c32e82211c}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"7.12.4\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\""
		":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{9b1839dd-5036-4c48-8050-09c3b400c921}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.9fcd7a76a4b67fe5efd45a1170a7f75bd9fe57644103eee43d5348f422c2320b\"}]},\"ping\":{\"ping_freshness\":\"{9bc1e347-0092-45ac-b384-b511520cf712}\",\""
		"rd\":4814},\"updatecheck\":{},\"version\":\"8019.1111.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{8aad1700-4a20-4e5c-a27a-916afdb6b087}\",\"sessionid\":\"{b0021353-387d-408c-9675-77f2e838e974}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\""
		":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		EXTRARES, 
		"Url=https://staff.belflex.com/favicon.ico", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		LAST);

	web_url("LocalizationModel", 
		"URL=https://staff.belflex.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"Snapshot=t315.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3935477934&cup2hreq=cd553395a10467d32bc54d4d1e71208e61b368cb9404bd1f6cec64b4fefc02cd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t316.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e1e6a6499ed573c41c3289839a72deba778a6a2cc755a20748018f7e0eabdb6e\"}]},\"ping\":{\"ping_freshness\":\"{45f63511-86d5-4aa9-8991-f020ecab96df}\",\"rd\":4814},\"updatecheck\":{},\"version\":\""
		"32.0.0.330\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c44a9cc4-9f6f-4712-abb8-e25ce36803c0}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux"
		":\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{8e97fed0-54e1-46b0-beef-b33f74e963c2}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a5a4a3ea6a9554b16bcb351daabaeec517696212c4c737d176fe33b58bcc51a7\"}]},\"ping\":{\"ping_freshness\":\"{963bc071-d797-4eba-964c-76ec901880b9}\",\"rd\":4814},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"80.229.200\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a920fced-bdf8-4363-9bed-8373af048684}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\""
		"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{1333e67b-c69b-428d-a73d-f5383e106b2c}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{c0c6c038-f389-4e77-99f9-131f88f4e37f}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.720072efc8742a996281bd52b49ad4de5631879d9c3ceeda1f3dd1b8374185e3\"}]},\"ping\":{\"ping_freshness\":\""
		"{80b3be63-d837-4dcb-b23d-f049ad72d582}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"5735\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a746edd0-49f6-48e6-8acb-c4c10b5e1fad}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{28011061-a8be-4f73-b09a-90d901da97e1}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.57e55f36649fc9939b762ca7bf7baeedccda9e35221215b34465dfa62f1bd594\"}]},\"ping\":{\"ping_freshness\":\""
		"{492ce56f-197a-49b8-a6a4-ee8b27014022}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"309\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b0d891f7-e812-42ce-8a49-90b238a2e2c1}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{"
		"\"fp\":\"1.715c48ce73b7ee71924470b10e920a4e23cd6f9c860f367d00feaff0d03eb52f\"}]},\"ping\":{\"ping_freshness\":\"{95782b57-f9ad-49fa-b85b-68d702498090}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"9.11.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1e1faf1f-7872-4ce1-bab0-c89fb24556ad}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.0.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\""
		":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{c2f96200-b728-4939-9bbf-9dd2a6374a3c}\",\"sessionid\":\"{016f6b2e-8b48-4014-b7b5-ffe213ed6c88}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\""
		"80.0.3987.132\"}}", 
		LAST);

/* Added by Async CodeGen.
ID=Poll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920970
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920971
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920972
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920973
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920974

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_1_RequestCB
	Poll_1_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920970", 
		"PollIntervalMs=299900", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);

/* Added by Async CodeGen.
ID=Push_3
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=cask4dgfGAYMKdzOwYL%2FgPyu0m2CV4uyWBJhvcx8%2F0J73u%2BjIQX2ZUHQiTPgF4YeAUk%2BsLjTaVcD82Ga6aKY59eFUYoULhoQ%2Fno3rcgxEFaQm11TahQ%2FlLaIFQp5uOOw%2BLeL7g%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_3_RequestCB
	Push_3_ResponseHeadersCB
	Push_3_ResponseBodyBufferCB
	Push_3_ResponseCB
 */
	web_reg_async_attributes("ID=Push_3", 
		"Pattern=Push", 
		"URL=https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=cask4dgfGAYMKdzOwYL%2FgPyu0m2CV4uyWBJhvcx8%2F0J73u%2BjIQX2ZUHQiTPgF4YeAUk%2BsLjTaVcD82Ga6aKY59eFUYoULhoQ%2Fno3rcgxEFaQm11TahQ%2FlLaIFQp5uOOw%2BLeL7g%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8", 
		"RequestCB=Push_3_RequestCB", 
		"ResponseHeadersCB=Push_3_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_3_ResponseBodyBufferCB", 
		"ResponseCB=Push_3_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_1
URLs: 
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920970
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920971
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920972
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920973
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920974
 */
	web_submit_data("Login.aspx_2",
		"Action=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t317.inf",
		"Mode=HTML",
		"EncodeAtSign=YES",
		ITEMDATA,
		"Name=__LASTFOCUS","Value=",ENDITEM,
		"Name=ctl00_radStylesheetManager_TSSM","Value=;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:53e1db5a:d126a8ef",ENDITEM,
		"Name=ctl00_radScriptManager_TSM","Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:92dc34f5-462f-43bd-99ec-66234f705cd1:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c",ENDITEM,
		"Name=__EVENTTARGET","Value=",ENDITEM,
		"Name=__EVENTARGUMENT","Value=",ENDITEM,
		"Name=__VIEWSTATE","Value=/wEPDwUKMTYzMDU1NjE3NRAWAh4TVmFsaWRhdGVSZXF1ZXN0TW9kZQIBZBYCZg9kFgRmD2QWAgIBDxUEOi9NVkMvQ29udGVudC9qcy9FeHRlcm5hbC9LZW5kby9zdHlsZXMva2VuZG8uY29tbW9uLm1pbi5jc3M7L01WQy9Db250ZW50L2pzL0V4dGVybmFsL0tlbmRvL3N0eWxlcy9rZW5kby51bmlmb3JtLm1pbi5jc3MoL01WQy9Db250ZW50L2Nzcy9MaWJyYXJ5L2xpYnJhcnkubWluLmNzcx0vTVZDL0NvbnRlbnQvY3NzL2VyZWNydWl0LmNzc2QCBw9kFgQCBQ9kFgJmDxUBLkFwcF9UaGVtZXMvRGVmYXVsdC9qYXZhc2NyaXB0L3RlbGVyaWstaGFja3MuanNkAgsPZBYEAgUPZBYCZg9kFgRmD2QWBAIBDw8WAh4EVGV4dAUUV2VsY29tZSB0byBlcmVjcnVpdC5kZAIFD2QWAmYPZBYCAgEPZBYEAgMPD2QWAh4MYXV0b2NvbXBsZXRlBQJvbmQCBw8PZBYCHwIFA29mZmQCAQ9kFgYCBQ8PFgIeB1Zpc2libGVoZGQCCw8WAh4LXyFJdGVtQ291bnQCARYCAgEPZBYCZg8VASdQYXNzd29yZCBtdXN0IGJlIGF0IGxlYXN0IDggY2hhcmFjdGVycy5kAg0PZBYCZg9kFgICAQ88KwAEAGQCBw9kFgICAQ8PFgIfAQUNVXBsb2FkIFJlc3VtZWRkGAIFHl9fQ29udHJvbHNSZXF1aXJlUG9zdEJhY2tLZXlfXxYBBRRjdGwwMCR0aXBQaG9uZU51bWJlcgUXY3RsMDAkY3BoTWFpbiRtdWx0aVZpZXcPD2RmZMri2VLD5z9cOEVhzzjl5nB9UcDV",ENDITEM,
		"Name=__VIEWSTATEGENERATOR","Value=C2EE9ABB",ENDITEM,
		"Name=ctl00$hidNewLayoutName","Value=",ENDITEM,
		"Name=ctl00_tipPhoneNumber_ClientState","Value=",ENDITEM,
		"Name=ctl00$cphMain$logIn$UserName","Value=dynatrace@erecruit.com",ENDITEM,
		"Name=ctl00$cphMain$logIn$Password","Value=Apple2020!",ENDITEM,
		"Name=ctl00$cphMain$logIn$Login","Value=Log In",ENDITEM,
		EXTRARES,
		"Url=/ScriptResource.axd?d=44SGZo2TqL-tI83tWSKG8qKB9UZnvLKDSxUi-NIFy3yxTKJqxSWjJszXi7N5Vq2I-pDh4lzE2aedAgysznkiqQmFF8CPdPqk-e3lCPim0zvTyyQ5iVh_MbUxPwADjrlT_DYlqg0MQqXdscQsjTsKLnAFymmFL5Mei2yq6piAErmURXsI0&t=ffffffffecf19baa","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=EFBgsmtsU0pdW_GJ6_OLMOrpZnHX-DWOrBZ7HrzZ8BxeBZf6YnNWFzULdDmVnk70LtTO4gZ_GyqSkGD95bPbJwgHe11fjxzISOEzOaL5e0drVbOMzhrLbjDWCA35mcSvn7z-MyNf7pU_iUvtiyL7sgvvlP0Z6zAimtFRWZkedUYXrqEu0&t=ffffffffecf19baa","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=nM7jnaDKzh8r0qooI-UZcLRDfwSRG7XKH8vedy3aww5zKlTICQoAd64X1JVcMK5p2ivHIp3YFOQqqCc9D3cjUDMw1_brU7KlI8W5eh6R7iwppIAov5f1J9QUTJQuFYeh79_qyA2&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=OPUKgPGoeoBBrUdA2DMmoomsFtTsVq7K1ejHgdz4UfE45IXBH_Oh6eu4jGVBwMUhMdXN3LyWI3NliLXRxx_sT3zg8gapIEImnnyughuGO39GyMKfdvffTxQjaHhtLkSrYhu3Lw241Pp2RzG5yvQS1gesBqY1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=YN85L9yCqHa46htTwACglZBRKHzwPIpqenx2u72M76RQV_y-pwroGZmbSjFPIkTs7VklX_g4cX7dI8TxvvPZ_oP9C1u3utgsyFoRaLMXklAUFpGoHUSepS8YO0p2X4rI_CPCoXF81NlH1Qse3Vm6Pj8RLWc1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=-zZOk8-NgGZhYzHzZuTKA2_9EbckOn7KTEpbivPPfxQqqi6BwtvEVAeHw5XD8-e5FNyTcWEj91fUvzVvwqxsDkSBDLxyplONQSelOh_IWQovz_thK1qigzaD8MTuVSKZoOvL_8R8LAFqU8pgKDpFNP-tnl81&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/ScriptResource.axd?d=MFXKNQ8ab_LEQJ6hHeptPLbDgUby09PE2PQ5-iasaA4Mb6j84cjUM6hvPXK7V0csracmME3AcOt51Yu1PvN7MlpI0rhQv48pTd2dPbJrVfw1UzZdO6nh6QF8jd-A1JSmtQuzA-x7vzhb6jQ_2Gx8-UAlJGA1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/Mvc/Content/Images/icons/refresh.png","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/Mvc/Content/Images/icons/14/cross.png","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Logout.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/dispatch.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/mvc/dispatch/hubs?","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Notifications/Notifications.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/TopMenu/TopMenu.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Controls/Base.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/External/jQuery-plugins/menu-aim.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/TopMenu/Items.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/Mvc/Localization/LocalizationModel","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Frame/container.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Localization/ResourceKeys.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Controls/Popup.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Search/interfaces.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Controls/InfoBox.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/MVC/Content/js/Controls/stylesheet.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/mvc/dispatch/negotiate?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&clientProtocol=1.3&_=1583612920969","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/Mvc/User/CheckExpiration","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=cask4dgfGAYMKdzOwYL%2FgPyu0m2CV4uyWBJhvcx8%2F0J73u%2BjIQX2ZUHQiTPgF4YeAUk%2BsLjTaVcD82Ga6aKY59eFUYoULhoQ%2Fno3rcgxEFaQm11TahQ%2FlLaIFQp5uOOw%2BLeL7g%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=8","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"Url=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583612920970","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		LAST);

/* Added by Async CodeGen.
ID = Poll_1
 */
	web_stop_async("ID=Poll_1", 
		LAST);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t318.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":8044,\"downloaded\":4464,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"5736\",\"previousversion\":\"5735\",\"total\":4464,\"url\":\"http://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/5736/5735/78fb6f5126a23932a9d530a0e942666f7a33c0bb07aee9e0b331de8b9bdf5e0d.crxd\"},"
		"{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.dd65f5a999d486e2c40b273556b6c2c66b20485c7a06c1fe7d6551b34baa934c\",\"nextversion\":\"5736\",\"previousfp\":\"1.720072efc8742a996281bd52b49ad4de5631879d9c3ceeda1f3dd1b8374185e3\",\"previousversion\":\"5735\"}],\"version\":\"5736\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion"
		"\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{521d6f8f-652d-4eed-bbe5-74bf99dd0208}\",\"sessionid\":\"{016f6b2e-8b48-4014-b7b5-ffe213ed6c88}\",\"updaterversion\":\"80.0.3987.132\"}}", 
		LAST);

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:1244357240&cup2hreq=54c71177e42a0792d2fa4482a063986f1610bb3a4222f716593ff49b90fc9b3e", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t319.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b1f3c285be4dc98e8a50c942beb5927f24c7163ac6c1b24e26902f4bd79bc20e\"}]},\"ping\":{\"ping_freshness\":\"{8ad199d2-b2c9-4491-ad72-14d8b5d56db0}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"2020.3.2.1202"
		"\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{121f2141-1ea9-489f-aa43-d533ed80737f}\",\"sessionid\":\"{1dbe0a41-d8be-447f-9653-41182634120e}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\""
		"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		LAST);

	web_url("Recruiter.aspx", 
		"URL=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t320.inf", 
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
		"Snapshot=t321.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6170", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Tasks/View/6170", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t322.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583612927291", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("10057", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/10057", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t323.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6171", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Opportunities/View/6171", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t324.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6172", 
		"URL=https://staff.belflex.com/MVC/Dashboard/MyOpenPositions/View/6172", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t325.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6173", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/6173", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t326.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Logout.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Templates/Logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t327.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6174", 
		"URL=https://staff.belflex.com/MVC/Dashboard/PlacementsEndingSoon/View/6174", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t328.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583612927292", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583612927293", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583612927294", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("TopMenu.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/TopMenu/Templates/TopMenu.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t329.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ShortcutCommandWindow.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/ShortcutManager/Templates/ShortcutCommandWindow.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t330.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/WebResource.axd?d=DMDPiNJHkDcJW29r0627GIpiNvka6f90iYZ6lcbOoud_aiTQlcrpAQOiDxLHhA0Qb3xBg8TKlvsFi0IMqolY5kPNLuqjHGt2MOf1JBnK-sFbFk1JWAhFDbE23AgisF13Pw1p8O-X8FY-x4EJr7rn4bCik4yfqxsexc28dHlrl61xmPgk0&t=635004147360000000", "Referer=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3af75bf8aa%3a35583c8c%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/Tasks.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/Opportunities.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/TasksData?pageNumber=0&pageSize=20&sortBy=&lookBackwardDays=5&lookForwardDays=5&filter=&scheduledItemCategories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/MyOpenPositions.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Localization/LocalizationUtils.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/PlacementsEndingSoon.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/MyOpenPositionsData?pageNumber=0&pageSize=50&sortBy=PositionID+ASC&viewMy=MyDepartment", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("SearchSidebarButtons.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t331.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/fullcalendar/fullcalendar.min.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/require/css.min.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.css", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/PlacementsEndingSoonData?dashboardWidgetID=6174&pageNumber=0&pageSize=10&sortBy=PositionID+DESC&viewMy=MyDepartment&lookAheadDays=7&lookBackDays=7&positionRoles=15", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=1%2C2%2C10%2C11%2C20%2C21%2C25%2C100%2C110%2C200&categories=53%2C54%2C25%2C55%2C56%2C57%2C64", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=&categories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/OpportunitiesData?dashboardWidgetID=6171&pageNumber=0&pageSize=10&sortBy=OpportunityStage+ASC&viewMy=My", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.ui.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/9.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("InfoBox.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t332.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/match_disabled.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_submit_data("send", 
		"Action=https://staff.belflex.com/mvc/dispatch/send?transport=serverSentEvents&connectionToken=cask4dgfGAYMKdzOwYL%2FgPyu0m2CV4uyWBJhvcx8%2F0J73u%2BjIQX2ZUHQiTPgF4YeAUk%2BsLjTaVcD82Ga6aKY59eFUYoULhoQ%2Fno3rcgxEFaQm11TahQ%2FlLaIFQp5uOOw%2BLeL7g%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t333.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value={\"H\":\"notification\",\"M\":\"Register\",\"A\":[[\"/user/08b5c73d-8e4d-467c-82be-0c6789f8f6a5/phone\",\"/user/logout\"]],\"I\":0}", ENDITEM, 
		LAST);

	lr_start_transaction("1_Position Search");

	web_url("position", 
		"URL=https://staff.belflex.com//Search/position/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout-3.1.0.debug.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchPage.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/api.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/seq.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/keys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/Mvc/Content/require/css.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Frame/container.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchResults.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.common.min.css", ENDITEM, 
		"Url=/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/Mvc/Content/require/text.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/autobind.js", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/InfoBox.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Help.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/LiveFilterService.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Criterion.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Base.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/js-debug/kendo.web.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/stylesheet.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Popup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Select.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SidebarButtonsTab.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/Columns.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FtsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Status.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/Filter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TextFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Location.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AdSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Templates/Location.SearchFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Position/Position.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/PositionType.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CheckboxFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/DateRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Recruiter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Department.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SemanticSearchFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Industry.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/NotesFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ScheduledItemsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FolderGroupsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Attachment.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ComplexRecruiterFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/Company.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Contact/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Opportunity/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ClientProject.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/MoneyRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SelectFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/PastStatusFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/SkillsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ShiftsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CommunicationMethodsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ParentCompany.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/CompanyDepartmentFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/DivisionMarketFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/DropDownFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TimeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/common.js", ENDITEM, 
		"Url=/Mvc/Position/Statuses-all", ENDITEM, 
		"Url=/Mvc/adSource/list-all?aboutType=4", ENDITEM, 
		"Url=/Mvc/industry/list-all", ENDITEM, 
		"Url=/Mvc/adsource/allCategories", ENDITEM, 
		"Url=/Mvc/department/all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagView.js", ENDITEM, 
		"Url=//Mvc/List/GenericList_no?key=entity:Division", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedSearchButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/FolderGroup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/ResourceKeys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Search/sidebarButton.js", ENDITEM, 
		"Url=/Mvc/location/states-all", ENDITEM, 
		"Url=/Mvc/location/regions-all", ENDITEM, 
		"Url=/api/tags/getVisibleTags?aboutType=4", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/LegacyCooltipButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ExportButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Requirement/AddRequirementSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ScheduledItemButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Base/DeclareDataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleLinkSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout.mapping-latest.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/DateTimePicker.js", ENDITEM, 
		"Url=/Mvc/position/CloseReasons-all", ENDITEM, 
		"Url=/Mvc/ClientProject/all", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Slider.js", ENDITEM, 
		"Url=/Mvc/positionType/AllForEntities", ENDITEM, 
		"Url=/Mvc/Content/js/BL/NoteAction.js", ENDITEM, 
		"Url=/Mvc/candidate/ClearanceLevels-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/User.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ListRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItem.js", ENDITEM, 
		"Url=/Mvc/Content/js/Currency/CurrencyService.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.css", ENDITEM, 
		"Url=/Mvc/noteaction/List-all", ENDITEM, 
		"Url=/Mvc/Currency/CurrencyModel", ENDITEM, 
		"Url=/Mvc/Company/DivisionMarkets-all", ENDITEM, 
		"Url=/Mvc/company/Types-all", ENDITEM, 
		"Url=/Mvc/currency/forLookup-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/Skill.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Shift.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/FlagListControl.js", ENDITEM, 
		"Url=/Mvc/skill/all", ENDITEM, 
		"Url=/Mvc/shift/Statuses-all", ENDITEM, 
		"Url=/Mvc/shift/CancellationReasons-all", ENDITEM, 
		"Url=/Mvc/shift/TravelStatuses-all", ENDITEM, 
		"Url=/Mvc/shift/FolderGroups-all", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedShareableItemList.js", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationCategories", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationtypes", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/PopupSidebarButtonBase.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Styles/SavedShareableItemList.css", ENDITEM, 
		"Url=/Mvc/folderGroup/all", ENDITEM, 
		"Url=/Mvc/folderGroup/allCategories", ENDITEM, 
		"Url=/Mvc/folderGroup/getStatuses?aboutType=4", ENDITEM, 
		"Url=/Mvc/folderGroup/allSubcategories", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/sendSurveyDialog.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItemModels.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/sendSurveyDialog.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagsSelector.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Editor.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tasks/Sharing.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Actions.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ChoosePeople.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Sharing/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/SharedPopup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/designer.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/designer.css", ENDITEM, 
		"Url=/Mvc/candidate/Statuses-all", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Email/Template.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AboutTypeLookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/MultiSelect.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/ReorderableList.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Ace.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/mode-less.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/ace.js", ENDITEM, 
		"Url=/Mvc/scheduledItem/AllTypes", ENDITEM, 
		"Url=/Mvc/forms/list-all", ENDITEM, 
		"Url=/Mvc/Email/Templates-all", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/matches_open_disabled.png", ENDITEM, 
		LAST);

	web_url("SearchResults.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t335.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_2", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t336.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t337.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t338.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/select2.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/icon-menu.svg", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_url("Buttons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Buttons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t339.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t340.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FtsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FtsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t341.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Status.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/Status.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t342.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Filter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/Filter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TextFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TextFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Location.SearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/Location.SearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AdsourceFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AdsourceFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t347.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("PositionTypesList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/PositionTypesList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t349.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CheckboxFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t350.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t351.inf", 
		"Mode=HTML", 
		LAST);

	web_url("RecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t352.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t353.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SemanticSearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SemanticSearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t354.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IndustryFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/IndustryFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t355.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotesFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/NotesFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t356.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroupsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FolderGroupsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t357.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ScheduledItemsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ScheduledItemsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t358.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AttachmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AttachmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t359.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComplexRecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t360.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MoneyRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/MoneyRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t361.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SkillsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Skill/Templates/SkillsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t362.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t363.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t364.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PastStatusFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/PastStatusFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t365.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ShiftsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ShiftsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t366.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CommunicationMethodsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CommunicationMethodsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t367.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ParentCompanyFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/ParentCompanyFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t368.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DivisionMarketFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/DivisionMarketFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t369.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CompanyDepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/CompanyDepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t370.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t371.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TimeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=PrimaryDepartmentSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t373.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t374.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("TagView.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t375.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedSearchButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedSearchButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t376.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroup.MassManageButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/FolderGroup.MassManageButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t377.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_3", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t378.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Search/Templates/sidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t379.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_3", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t380.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("LegacyCooltipButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/LegacyCooltipButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t381.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExportButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ExportButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t382.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AddRequirementSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Requirement/Templates/AddRequirementSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t383.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/MailingListButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t384.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleSidebarButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t385.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZqo4aQRk7oQcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZJfVC8FxtArQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtVvXr4CQjLZsjW_wkIy2loFNaJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("ScheduledItemButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ScheduledItemButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t386.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZKNUN27vX8MkjLZFhlU4kIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t387.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateTimePicker.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t388.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ListSlider.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/ListSlider.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t389.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZfznSSdwFfasjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("ListRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ListRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t390.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ManageScheduledItem.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t391.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ4i6MPWZrWd8jLZFhlU4kIy2UkJL6JBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("FlagListControl.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/FlagListControl.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t392.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_4", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t393.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("Tip_4", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t394.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ-iXOYDUAe-wjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZWr0W7XUFtJcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("SavedShareableItemList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedShareableItemList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t395.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_5", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t396.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("sendSurveyDialog.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/sendSurveyDialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t397.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRgCQ_LD6NPojLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("TagsSelector.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagsSelector.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t398.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRNtuVwgB1_sjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLQXlFLMkIy2eXcoFJCMtkWGVTiQjLZFhlU4kIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("ChoosePeople.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/ScheduledItem/Templates/ChoosePeople.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t399.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t400.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-field.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-field.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t401.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-pageBreak.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-pageBreak.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t402.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ6cQCxopIXnwjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_url("MultiSelect.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/MultiSelect.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t403.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZuIzT8NwPF9kjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLbpCQJwkIy3gKm2lJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t404.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);

	web_custom_request("set_6", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t405.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("seed_2", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=80", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t406.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/position/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t407.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Software Developer\",\"SearchIndexes\":[],\"SearchRecord\":true,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,1,3,18],\"DimensionValueID\":null,\"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\""
		"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Position\"},{\"ID\":\"Company\"},{\"ID\":\"OpenMatchCount\"},{\"ID\":\"SubmittalMatchCount\"},{\"ID\":\"FullPlacementMatchCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Position\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/statusicons/99.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

/* Added by Async CodeGen.
ID = Push_3
 */
	web_stop_async("ID=Push_3", 
		LAST);

	lr_end_transaction("1_Position Search",LR_AUTO);

	return 0;
}