Company_Search()
{

	web_url("device-desc.xml", 
		"URL=http://192.168.1.121:8008/ssdp/device-desc.xml", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t217.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t218.inf", 
		LAST);

	web_url("mixpanel-2.2.min.js", 
		"URL=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t219.inf", 
		LAST);

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t220.inf", 
		LAST);

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("ga.js", 
		"URL=https://ssl.google-analytics.com/ga.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t222.inf", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=80", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_submit_data("track", 
		"Action=https://api.mixpanel.com/track/?ip=1&_=1583610028438", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value="
		"eyJldmVudCI6ICJtcF9wYWdlX3ZpZXciLCJwcm9wZXJ0aWVzIjogeyIkb3MiOiAiV2luZG93cyIsIiRicm93c2VyIjogIkNocm9tZSIsIiRjdXJyZW50X3VybCI6ICJjaHJvbWUtZXh0ZW5zaW9uOi8vbWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkvX2dlbmVyYXRlZF9iYWNrZ3JvdW5kX3BhZ2UuaHRtbCIsIiRicm93c2VyX3ZlcnNpb24iOiA4MCwiJHNjcmVlbl9oZWlnaHQiOiA5MDAsIiRzY3JlZW5fd2lkdGgiOiAxNDQwLCJtcF9saWIiOiAid2ViIiwiJGxpYl92ZXJzaW9uIjogIjIuMzQuMCIsIiRpbnNlcnRfaWQiOiAiZ2VlazVuMnpqczgxODZ0biIsInRpbWUiOiAxNTgzNjEwMDI4LjQzOCwiZGlzdGluY3RfaWQiOiAiMTcwNTllZGZhN2EzODYtMD"
		"UxNDk2Y2Y3NWFjNDItMzMzNjVhMDEtMWZhNDAwLTE3MDU5ZWRmYTdjNzQ0IiwiJGRldmljZV9pZCI6ICIxNzA1OWVkZmE3YTM4Ni0wNTE0OTZjZjc1YWM0Mi0zMzM2NWEwMS0xZmE0MDAtMTcwNTllZGZhN2M3NDQiLCIkaW5pdGlhbF9yZWZlcnJlciI6ICIkZGlyZWN0IiwiJGluaXRpYWxfcmVmZXJyaW5nX2RvbWFpbiI6ICIkZGlyZWN0IiwibXBfcGFnZSI6ICJjaHJvbWUtZXh0ZW5zaW9uOi8vbWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkvX2dlbmVyYXRlZF9iYWNrZ3JvdW5kX3BhZ2UuaHRtbCIsIm1wX2Jyb3dzZXIiOiAiQ2hyb21lIiwibXBfcGxhdGZvcm0iOiAiV2luZG93cyIsInRva2VuIjogIjk0YjVjMzExNjkyZTdjOWQwM2NlZjljOWE3YTMy"
		"ZWFmIn19", ENDITEM, 
		EXTRARES, 
		"Url=../decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1583610028424", "Referer=", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-33054271-5&cid=170495006.1560359615&jid=2130205420&_v=5.7.2&z=182902796", "Referer=", ENDITEM, 
		LAST);

	web_url("Login.aspx", 
		"URL=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t226.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_2", 
		"URL=https://api.mixpanel.com/track/?ip=1&_=1583610028912", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t227.inf", 
		"Mode=HTML", 
		"Body=data="
		"eyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODAsIiRzY3JlZW5faGVpZ2h0IjogOTAwLCIkc2NyZWVuX3dpZHRoIjogMTQ0MCwibXBfbGliIjogIndlYiIsIiRsaWJfdmVyc2lvbiI6ICIyLjM0LjAiLCIkaW5zZXJ0X2lkIjogIms4M3B6ZTE1cGxteDRoMGgiLCJ0aW1lIjogMTU4MzYxMDAyOC45MTIsImRpc3RpbmN0X2lkIjogIjE3MDU5ZWRmYTdhMzg2LTA1MT"
		"Q5NmNmNzVhYzQyLTMzMzY1YTAxLTFmYTQwMC0xNzA1OWVkZmE3Yzc0NCIsIiRkZXZpY2VfaWQiOiAiMTcwNTllZGZhN2EzODYtMDUxNDk2Y2Y3NWFjNDItMzMzNjVhMDEtMWZhNDAwLTE3MDU5ZWRmYTdjNzQ0IiwiJGluaXRpYWxfcmVmZXJyZXIiOiAiJGRpcmVjdCIsIiRpbml0aWFsX3JlZmVycmluZ19kb21haW4iOiAiJGRpcmVjdCIsIiR0aXRsZSI6ICIiLCIkZXZlbnRfdHlwZSI6ICJwYWdldmlldyIsIiRjZV92ZXJzaW9uIjogMSwiJGhvc3QiOiAibWJvcGdtZG5wY2JvaGhwbmZnbGdvaGxiaGZvbmdhYmkiLCIkcGF0aG5hbWUiOiAiL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCJ0b2tlbiI6ICI5NGI1YzMxMTY5MmU3YzlkMDNjZWY5YzlhN2Ez"
		"MmVhZiJ9fQ==", 
		EXTRARES, 
		"Url=https://staff.belflex.com/WebResource.axd?d=m3cmci195IuJDEJw8Ad9w37t-ar6S_p30DNET5tULqLw7XFJh2YiN6Ss8jqHn9dSsoMnt6V8ZKqZirvlHa70GP0TrFw1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/ScriptResource.axd?d=9x5OvJaQVu0vj9j4xaQBlKKOEaHrkzcdmYjM4RFhcq_Djt9kUkyhoYU-zBekcY7ErwHvsRc6Fag_rhwv4YrfJqE6BjlCkvm8UNUUm_-qZjnXRoo20cEn-b5wePLrceOAAkBxDE5DWZN0-d_FIEREFdILw641&t=ffffffff93f2983c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/WebResource.axd?d=ppYwzJsRb6AhcOLm41MnVR6O_dxAYwx8kQEpShx-opg0jHDm6nly6o_cE0sit9ie8fEwOeM0k4Lm4iI1v9oFaDaP91E1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/App_Themes/Default/javascript/telerik-hacks.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/amd-base-url-marker.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/koBindings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/cooltipKoBridge.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Ace/bundles-config.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Localization/LocalizationService.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/App_Themes/Default/images/logos/BelflexLogo.png", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/zxcvbn/zxcvbn.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZxmYKFgIKnrIjLbE5MOYkIy3_KpySJBQ=", "Referer=", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Controls/Tipped.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Knockout/knockout-3.1.0.debug.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/tableSorter.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/common.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Rx/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Utils/internationalization.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/requirejs-plugins/json.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/globalize.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/globalize/number.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/globalize/currency.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/globalize/date.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/globalize/plural.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/moment/moment.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/LinqJS/linq.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/accounting/accounting.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/api.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/seq.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/dynamic.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/keys.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/Base/userSettings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Rx/rx.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Rx/rx.time.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Rx/rx.dom.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/Rx/rx.binding.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/require/text.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/cldr.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://staff.belflex.com/MVC/Content/js/External/globalization/cldr/event.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		LAST);

	web_url("LocalizationModel", 
		"URL=https://staff.belflex.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/globalization/cldr/supplemental.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/favicon.ico", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=80.0.3987.132&lang=en-US&acceptformat=crx3&x=id%3Daknpkdffaafgjchaibgeefbgmgeghloj%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D0%2526dr%253D1&x=id%3Dmgndgikekgjfcpckkfioiadnlibdjbkf%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Dfdmmgilgnpjigdojojpjoooidkmcomcm%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D1&x=id%3Dmhbpoeinkhpajikalhfpjjafpfgjnmgk%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D17%2526e%253D0%2526dr%253D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t229.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:556986765&cup2hreq=6433508f8eec429309d942cabf5641fd829bd4bc5e43ea1cae85bf3d7f227ec4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t230.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{15b41226-b759-42e7-b0fc-a7c66c450f99}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{442c3536-6e64-421f-8446-71f6688655b8}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{59c2e759-abbb-46cd-b0db-9fe2d6eb9b69}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{e4b556ab-6053-4264-a7e3-a5815ce61c85}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"eaobjglgjonmmebelfnebghejfmmhamm\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2.2.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{4185d9d1-4deb-4d5b-818e-e39c3cb88619}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"2.2.0\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{4a11082d-e339-404a-a355-90e0391c4e89}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"fhbjgbiflinjbdggehcddcbncdddomop\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.5.5.4\"}]},\"ping\":{\"ping_freshness\":\"{1f46aa83-79dd-4d19-b4df-ca56a0e03ca5}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"5.5.4\"},{\"appid\":\"fmkadmapgofadopljbjfkapdkoienihi\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.9609b9d1c264e3013b005a4a648cdb911821a7ee2d80a9dba4f206489bfc5c16\"}]},\"ping\":{\"ping_freshness\":\"{05292d05-822a-444c-a23c-8d88d214a278}\",\""
		"rd\":4813},\"updatecheck\":{},\"version\":\"4.5.0\"},{\"appid\":\"fngmhnnpilhplaeedifhccceomclgfbg\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.5.0\"}]},\"ping\":{\"ping_freshness\":\"{702c1e76-6010-4f2a-a43a-aead5c6140d2}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.5.0\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"2.1.9\"}]"
		"},\"ping\":{\"ping_freshness\":\"{32eea9bd-07e4-4c96-ba88-dd51effb5722}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.9\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.2bceb5a5ce9df5e56e7cbc154eb1ba66b61452aa2346f1f5e08ce803541743f5\"}]},\"ping\":{\"ping_freshness\":\"{a173674b-a32f-4e34-b4dd-faaa8c8ca74d}\",\"rd\":4813},\"updatecheck\":{},\"version\":\""
		"4.7.3\"},{\"appid\":\"gpieacagdjdfbifodokiccinpbacemjf\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.6.2.27013\"}]},\"ping\":{\"ping_freshness\":\"{7780b998-f9a2-4a82-8103-73113e793a40}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"6.2.27013\"},{\"appid\":\"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.8.1\"}]},"
		"\"ping\":{\"ping_freshness\":\"{34d70092-e158-4acc-8fcd-46ff8fbba777}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"4.8.1\"},{\"appid\":\"nkomfibbgccdjcahcpleidblgknecfhh\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.9.4\"}]},\"ping\":{\"ping_freshness\":\"{1bd1b452-2f72-47c6-b6ba-38036effa2b2}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.9.4\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\""
		"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{ab431693-257e-437d-ab18-db5a803d79ce}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"ogmipfbbmnonoiinjeoipiogcadnebcb\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{28587206-b558-44a8-a82a-0635f4f4223e}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"1.0.0.0\"},{\"appid\":\"pioclpoplcdbaefihamjohnefbikjilc\",\"brand\":\"GGLS\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.7.12.4\"}]},\"ping\":{\"ping_freshness\":\"{930ae84a-5dad-4bb8-992b-fe1da3014e56}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"7.12.4\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\""
		":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{4edf69ce-e4a2-4044-a1fb-368f02bb2a8d}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.9fcd7a76a4b67fe5efd45a1170a7f75bd9fe57644103eee43d5348f422c2320b\"}]},\"ping\":{\"ping_freshness\":\"{0baee315-488e-4eea-8d89-90b0cbb5994b}\",\""
		"rd\":4813},\"updatecheck\":{},\"version\":\"8019.1111.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{6ebd85ff-5dba-45bb-9df3-9e692f9fc526}\",\"sessionid\":\"{c9488bcf-ddd6-47b8-bf8b-b0b35aba396e}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\""
		":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		LAST);

/* Added by Async CodeGen.
ID=Poll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063662
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063663
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063664
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063665
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063666

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_1_RequestCB
	Poll_1_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661", 
		"PollIntervalMs=299900", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);

/* Added by Async CodeGen.
ID=Push_2
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_2_RequestCB
	Push_2_ResponseHeadersCB
	Push_2_ResponseBodyBufferCB
	Push_2_ResponseCB
 */
	web_reg_async_attributes("ID=Push_2", 
		"Pattern=Push", 
		"URL=https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6", 
		"RequestCB=Push_2_RequestCB", 
		"ResponseHeadersCB=Push_2_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_2_ResponseBodyBufferCB", 
		"ResponseCB=Push_2_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_1
URLs: 
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063662
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063663
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063664
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063665
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063666
 */
/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063662
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063663
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063664
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063665
	https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063666

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://staff.belflex.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661", 
		"PollIntervalMs=299900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

/* Added by Async CodeGen.
ID=Push_2
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Push_2_RequestCB
	Push_2_ResponseHeadersCB
	Push_2_ResponseBodyBufferCB
	Push_2_ResponseCB
 */
	web_reg_async_attributes("ID=Push_2", 
		"Pattern=Push", 
		"URL=https://staff.belflex.com/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6", 
		"RequestCB=Push_2_RequestCB", 
		"ResponseHeadersCB=Push_2_ResponseHeadersCB", 
		"ResponseBodyBufferCB=Push_2_ResponseBodyBufferCB", 
		"ResponseCB=Push_2_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_0
URLs: 
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063662
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063663
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063664
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063665
	/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063666
 */
	web_submit_data("Login.aspx_2",
		"Action=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t231.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__LASTFOCUS","Value=",ENDITEM,
		"Name=ctl00_radStylesheetManager_TSSM","Value=;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:53e1db5a:d126a8ef",ENDITEM,
		"Name=ctl00_radScriptManager_TSM","Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:92dc34f5-462f-43bd-99ec-66234f705cd1:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c",ENDITEM,
		"Name=__EVENTTARGET","Value=",ENDITEM,
		"Name=__EVENTARGUMENT","Value=",ENDITEM,
		"Name=__VIEWSTATE","Value=/wEPDwUKMTYzMDU1NjE3NRAWAh4TVmFsaWRhdGVSZXF1ZXN0TW9kZQIBZBYCZg9kFgRmD2QWAgIBDxUEOi9NVkMvQ29udGVudC9qcy9FeHRlcm5hbC9LZW5kby9zdHlsZXMva2VuZG8uY29tbW9uLm1pbi5jc3M7L01WQy9Db250ZW50L2pzL0V4dGVybmFsL0tlbmRvL3N0eWxlcy9rZW5kby51bmlmb3JtLm1pbi5jc3MoL01WQy9Db250ZW50L2Nzcy9MaWJyYXJ5L2xpYnJhcnkubWluLmNzcx0vTVZDL0NvbnRlbnQvY3NzL2VyZWNydWl0LmNzc2QCBw9kFgQCBQ9kFgJmDxUBLkFwcF9UaGVtZXMvRGVmYXVsdC9qYXZhc2NyaXB0L3RlbGVyaWstaGFja3MuanNkAgsPZBYEAgUPZBYCZg9kFgRmD2QWBAIBDw8WAh4EVGV4dAUUV2VsY29tZSB0byBlcmVjcnVpdC5kZAIFD2QWAmYPZBYCAgEPZBYEAgMPD2QWAh4MYXV0b2NvbXBsZXRlBQJvbmQCBw8PZBYCHwIFA29mZmQCAQ9kFgYCBQ8PFgIeB1Zpc2libGVoZGQCCw8WAh4LXyFJdGVtQ291bnQCARYCAgEPZBYCZg8VASdQYXNzd29yZCBtdXN0IGJlIGF0IGxlYXN0IDggY2hhcmFjdGVycy5kAg0PZBYCZg9kFgICAQ88KwAEAGQCBw9kFgICAQ8PFgIfAQUNVXBsb2FkIFJlc3VtZWRkGAIFHl9fQ29udHJvbHNSZXF1aXJlUG9zdEJhY2tLZXlfXxYBBRRjdGwwMCR0aXBQaG9uZU51bWJlcgUXY3RsMDAkY3BoTWFpbiRtdWx0aVZpZXcPD2RmZMri2VLD5z9cOEVhzzjl5nB9UcDV",ENDITEM,
		"Name=__VIEWSTATEGENERATOR","Value={__VIEWSTATEGENERATOR_1}",ENDITEM,
		"Name=ctl00$hidNewLayoutName","Value=",ENDITEM,
		"Name=ctl00_tipPhoneNumber_ClientState","Value=",ENDITEM,
		"Name=ctl00$cphMain$logIn$UserName","Value=dynatrace@erecruit.com",ENDITEM,
		"Name=ctl00$cphMain$logIn$Password","Value=Apple2020!",ENDITEM,
		"Name=ctl00$cphMain$logIn$Login","Value=Log In",ENDITEM,
		EXTRARES,
		"URL=/ScriptResource.axd?d=EFBgsmtsU0pdW_GJ6_OLMOrpZnHX-DWOrBZ7HrzZ8BxeBZf6YnNWFzULdDmVnk70LtTO4gZ_GyqSkGD95bPbJwgHe11fjxzISOEzOaL5e0drVbOMzhrLbjDWCA35mcSvn7z-MyNf7pU_iUvtiyL7sgvvlP0Z6zAimtFRWZkedUYXrqEu0&t=ffffffffecf19baa","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=44SGZo2TqL-tI83tWSKG8qKB9UZnvLKDSxUi-NIFy3yxTKJqxSWjJszXi7N5Vq2I-pDh4lzE2aedAgysznkiqQmFF8CPdPqk-e3lCPim0zvTyyQ5iVh_MbUxPwADjrlT_DYlqg0MQqXdscQsjTsKLnAFymmFL5Mei2yq6piAErmURXsI0&t=ffffffffecf19baa","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=nM7jnaDKzh8r0qooI-UZcLRDfwSRG7XKH8vedy3aww5zKlTICQoAd64X1JVcMK5p2ivHIp3YFOQqqCc9D3cjUDMw1_brU7KlI8W5eh6R7iwppIAov5f1J9QUTJQuFYeh79_qyA2&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=YN85L9yCqHa46htTwACglZBRKHzwPIpqenx2u72M76RQV_y-pwroGZmbSjFPIkTs7VklX_g4cX7dI8TxvvPZ_oP9C1u3utgsyFoRaLMXklAUFpGoHUSepS8YO0p2X4rI_CPCoXF81NlH1Qse3Vm6Pj8RLWc1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=OPUKgPGoeoBBrUdA2DMmoomsFtTsVq7K1ejHgdz4UfE45IXBH_Oh6eu4jGVBwMUhMdXN3LyWI3NliLXRxx_sT3zg8gapIEImnnyughuGO39GyMKfdvffTxQjaHhtLkSrYhu3Lw241Pp2RzG5yvQS1gesBqY1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/Mvc/Content/Images/icons/14/cross.png","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/Mvc/Content/Images/icons/refresh.png","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=-zZOk8-NgGZhYzHzZuTKA2_9EbckOn7KTEpbivPPfxQqqi6BwtvEVAeHw5XD8-e5FNyTcWEj91fUvzVvwqxsDkSBDLxyplONQSelOh_IWQovz_thK1qigzaD8MTuVSKZoOvL_8R8LAFqU8pgKDpFNP-tnl81&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/ScriptResource.axd?d=MFXKNQ8ab_LEQJ6hHeptPLbDgUby09PE2PQ5-iasaA4Mb6j84cjUM6hvPXK7V0csracmME3AcOt51Yu1PvN7MlpI0rhQv48pTd2dPbJrVfw1UzZdO6nh6QF8jd-A1JSmtQuzA-x7vzhb6jQ_2Gx8-UAlJGA1&t=3967d01","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Logout.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/mvc/dispatch/hubs?","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/dispatch.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Notifications/Notifications.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/TopMenu.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Controls/Base.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/Items.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/menu-aim.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/Mvc/Localization/LocalizationModel","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Frame/container.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Localization/ResourceKeys.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Controls/Popup.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Search/interfaces.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Controls/InfoBox.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/require/css.min.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/MVC/Content/js/Controls/stylesheet.js","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/mvc/dispatch/negotiate?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&clientProtocol=1.3&_=1583610063660","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/Mvc/User/CheckExpiration","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=6","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		"URL=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063661","Referer=https://staff.belflex.com/Recruiter/",ENDITEM,
		LAST);

	web_stop_async("ID=Poll_0", 
		LAST);

/* Added by Async CodeGen.
ID = Poll_1
 */
	web_stop_async("ID=Poll_1", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t232.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//06lLmcPw_pA4ACgYIARAAGAYSNwF-L9IrNWGkB8wqPsVUT_BVsxZE-qeFhHp0Uvlzx4c3yIbP6HDW9nVGAFYXJAQnvPuI2y4CDtY&scope=https://www.googleapis.com/auth/android_checkin+https://www.googleapis.com/auth/gcm", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZyzLyA-0LowYjLVb16-AkIy2bI1v8JCMtpaBTWiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("Recruiter.aspx", 
		"URL=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a854aa0a7%3a607498fe%3a9cdfc6e7%3a7165f74", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZmAxT-dM5nWMjLc88esYkFA==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("23953", 
		"URL=https://staff.belflex.com/MVC/Dashboard/CompanyFlashReportTemp/View/23953", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t234.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6170", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Tasks/View/6170", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t235.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6171", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Opportunities/View/6171", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583610068933", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("6173", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/6173", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6172", 
		"URL=https://staff.belflex.com/MVC/Dashboard/MyOpenPositions/View/6172", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t238.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("10057", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/10057", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t239.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6174", 
		"URL=https://staff.belflex.com/MVC/Dashboard/PlacementsEndingSoon/View/6174", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t240.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583610068934", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRpgrsIXvPyIjLZFhlU4kIy1ApbeSJCMtx-CCECQjLc88esYkFA==", "Referer=", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583610068935", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/WebResource.axd?d=DMDPiNJHkDcJW29r0627GIpiNvka6f90iYZ6lcbOoud_aiTQlcrpAQOiDxLHhA0Qb3xBg8TKlvsFi0IMqolY5kPNLuqjHGt2MOf1JBnK-sFbFk1JWAhFDbE23AgisF13Pw1p8O-X8FY-x4EJr7rn4bCik4yfqxsexc28dHlrl61xmPgk0&t=635004147360000000", "Referer=https://staff.belflex.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3af75bf8aa%3a35583c8c%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583610068936", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/Tasks.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("TopMenu.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/TopMenu/Templates/TopMenu.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t241.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Logout.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Templates/Logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t242.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ShortcutCommandWindow.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Frame/ShortcutManager/Templates/ShortcutCommandWindow.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t243.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/images/select2.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/Opportunities.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Localization/LocalizationUtils.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/MyOpenPositions.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/TasksData?pageNumber=0&pageSize=20&sortBy=&lookBackwardDays=5&lookForwardDays=5&filter=&scheduledItemCategories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/Dashboard/PlacementsEndingSoon.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:2564866212&cup2hreq=77d97ffad1dbdd8b1b5c0b199eb7735e90cd496f66b7348ee60b117f1c46e4e9", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.715c48ce73b7ee71924470b10e920a4e23cd6f9c860f367d00feaff0d03eb52f\"}]},\"ping\":{\"ping_freshness\":\"{87c40f9b-60ca-4612-aa6d-b07d2610ea2d}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"9.11.0\"},{\""
		"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{db49eaa4-78b8-430f-b437-9ed6ffd509d5}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{7b9c1477-a153-4ce0-889f-dcdd3ef7a2d6}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\""
		"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{f2294145-76b8-4879-9a11-94c2ec0888f7}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{24e98707-6c78-4f60-beae-ad7072f3c161}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{529e1c81-37bb-4807-870f-2b8b3711735a}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.720072efc8742a996281bd52b49ad4de5631879d9c3ceeda1f3dd1b8374185e3\"}]},\"ping\":{\"ping_freshness\":\"{7dd3a92c-48f2-4429-b22a-e1e0e8cc760e}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"5735\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\""
		"fp\":\"1.e1e6a6499ed573c41c3289839a72deba778a6a2cc755a20748018f7e0eabdb6e\"}]},\"ping\":{\"ping_freshness\":\"{1d20809c-d096-4d8e-b6ba-fa5096841e4b}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"32.0.0.330\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\""
		":\"{818be8af-1daf-4c46-85d3-3d7baa944c3d}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{df91ca1d-0d4f-47ab-9ee1-19a38d63e16c}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{12936a25-624e-4910-9894-7749814c0dc3}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.57e55f36649fc9939b762ca7bf7baeedccda9e35221215b34465dfa62f1bd594\"}]},\"ping\":{\"ping_freshness\":\""
		"{30a52b76-d046-47e8-b740-bf69b72620da}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"309\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a5a4a3ea6a9554b16bcb351daabaeec517696212c4c737d176fe33b58bcc51a7\"}]},\"ping\":{\"ping_freshness\":\"{819e3ad6-d431-49a2-8fb2-373655c5d65b}\",\"rd\":4814},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\""
		"80.229.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4fc41c77-c6d3-4505-8134-ff0a57fe4d6b}\",\"rd\":4814},\"updatecheck\":{},\"version\":\"2018.8.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},"
		"\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{59b9a382-7783-405d-ae4e-4554ac18f40e}\",\"sessionid\":\"{66944045-acfa-4c6a-89ab-6fc5cff42c99}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		LAST);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3604769346&cup2hreq=5af125be1ff17c19371f9d64478406b12cb1c59200ec202c333552cb5183450c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t245.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b1f3c285be4dc98e8a50c942beb5927f24c7163ac6c1b24e26902f4bd79bc20e\"}]},\"ping\":{\"ping_freshness\":\"{a671ddf7-4abb-4abf-af94-ce706fd7fc16}\",\"rd\":4813},\"updatecheck\":{},\"version\":\"2020.3.2.1202"
		"\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19573\"},\"prodversion\":\"80.0.3987.132\",\"protocol\":\"3.1\",\"requestid\":\"{f37bc767-2b1e-416c-8f72-fbaee13101ba}\",\"sessionid\":\"{4c62938b-ed59-47ad-8e59-4137f9e600a1}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\""
		"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.442\"},\"updaterversion\":\"80.0.3987.132\"}}", 
		LAST);

	web_url("SearchSidebarButtons.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t246.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Dashboard/PlacementsEndingSoonData?dashboardWidgetID=6174&pageNumber=0&pageSize=10&sortBy=PositionID+DESC&viewMy=MyDepartment&lookAheadDays=7&lookBackDays=7&positionRoles=15", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/OpportunitiesData?dashboardWidgetID=6171&pageNumber=0&pageSize=10&sortBy=OpportunityStage+ASC&viewMy=My", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_url("InfoBox.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Dashboard/ScheduledItemCalendar.css", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/fullcalendar/fullcalendar.min.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/MyOpenPositionsData?pageNumber=0&pageSize=50&sortBy=PositionID+ASC&viewMy=MyDepartment", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=&categories=", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/9.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Content/js/External/jQuery-plugins/jquery.ui.numeric.js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/MVC/Dashboard/ScheduledItemCalendarData?startDate=%222020-03-01T08%3A00%3A00.000Z%22&endDate=%222020-03-08T08%3A00%3A00.000Z%22&calendarView=basicWeek&scheduledItemListType=User&scheduleItemTypes=1%2C2%2C10%2C11%2C20%2C21%2C25%2C100%2C110%2C200&categories=53%2C54%2C25%2C55%2C56%2C57%2C64", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZJfVC8FxtArQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtVvXr4CQjLZsjW_wkIy2loFNaJBQ=", "Referer=", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/match_disabled.png", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_submit_data("send", 
		"Action=https://staff.belflex.com/mvc/dispatch/send?transport=serverSentEvents&connectionToken=BAPI6AzYN5EA4TYCzKhMnKBgJBNonwkH4sAImBXUyvBFYEUy55ZbQOXz0lhZElbvZzCNAgNgUEzUB87M2VRj0wFNT7lnPszFgrZNKFH%2FX%2B7AwUaFYgwI37U4WWaEFjYvk6W1rg%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data", "Value={\"H\":\"notification\",\"M\":\"Register\",\"A\":[[\"/user/08b5c73d-8e4d-467c-82be-0c6789f8f6a5/phone\",\"/user/logout\"]],\"I\":0}", ENDITEM, 
		LAST);

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	web_url("seed_2", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=80", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t250.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("1_Company Search");

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://staff.belflex.com/Mvc/department/all

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://staff.belflex.com/Mvc/department/all", 
		"PollIntervalMs=500", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_0
URLs: 
	/Mvc/department/all
 */
	web_url("company", 
		"URL=https://staff.belflex.com//Search/company/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout-3.1.0.debug.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/Mvc/Content/js/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchPage.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/api.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/seq.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/keys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchResults.js", ENDITEM, 
		"Url=/Mvc/Content/js/Frame/container.js", ENDITEM, 
		"Url=/Mvc/Content/require/css.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.common.min.css", ENDITEM, 
		"Url=/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/Mvc/Content/require/text.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/autobind.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/InfoBox.js", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Help.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Criterion.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/LiveFilterService.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/js-debug/kendo.web.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Base.js", ENDITEM, 
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
		"Url=/Mvc/Content/js/Search/Filters/CheckboxFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AdSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/DateRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/Company.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Match/Match.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Industry.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Location.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/NotesFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Templates/Location.SearchFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FolderGroupsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SelectFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/CustomField.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Attachment.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OwnerType.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ComplexRecruiterFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CommunicationMethodsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ParentCompany.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/User.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/DivisionMarketFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedSearchButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/FolderGroup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Search/sidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/LegacyCooltipButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ExportButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Requirement/AddRequirementSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ScheduledItemButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/SearchSidebarButtons/BulkUpdate.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/DropDownFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagView.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/DateTimePicker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/ResourceKeys.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Base/DeclareDataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ListRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Company/Statuses-all", ENDITEM, 
		"Url=/Mvc/DepartmentDimension/DimensionValues-all", ENDITEM, 
		"Url=/Mvc/adSource/list-all?aboutType=1", ENDITEM, 
		"Url=/Mvc/adsource/allCategories", ENDITEM, 
		"Url=/Mvc/industry/list-all", ENDITEM, 
		"Url=//Mvc/List/GenericList_no?key=entity:Division", ENDITEM, 
		"Url=/Mvc/ownership/ownerTypes-all", ENDITEM, 
		"Url=/Mvc/location/states-all", ENDITEM, 
		"Url=/Mvc/location/regions-all", ENDITEM, 
		"Url=/Mvc/match/statuses-all", ENDITEM, 
		"Url=/api/tags/getVisibleTags?aboutType=1", ENDITEM, 
		"Url=/Mvc/company/Types-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/NoteAction.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Department.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/FlagListControl.js", ENDITEM, 
		"Url=/Mvc/Company/DivisionMarkets-all", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedShareableItemList.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Styles/SavedShareableItemList.css", ENDITEM, 
		"Url=/Mvc/noteaction/List-all", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationCategories", ENDITEM, 
		"Url=/Mvc/department/all", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationtypes", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/PopupSidebarButtonBase.js", ENDITEM, 
		"Url=/Mvc/folderGroup/all", ENDITEM, 
		"Url=/Mvc/folderGroup/allCategories", ENDITEM, 
		"Url=/Mvc/folderGroup/getStatuses?aboutType=1", ENDITEM, 
		"Url=/Mvc/folderGroup/allSubcategories", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/sendSurveyDialog.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/sendSurveyDialog.css", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleLinkSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItemModels.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Actions.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Sharing/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Recruiter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/SharedPopup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/designer.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Email/Template.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/designer.css", ENDITEM, 
		"Url=/Mvc/candidate/Statuses-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AboutTypeLookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/ReorderableList.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Ace.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/mode-less.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/ace.js", ENDITEM, 
		"Url=/Mvc/forms/list-all", ENDITEM, 
		"Url=/Mvc/Email/Templates-all", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/map.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/contact.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/position_disabled.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/position.png", ENDITEM, 
		LAST);

/* Added by Async CodeGen.
ID = Poll_0
 */
/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_url("SearchResults.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_2", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/select2.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/icon-menu.svg", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ4i6MPWZrWd8jLZFhlU4kIy2UkJL6JBQ=", "Referer=", ENDITEM, 
		"Url=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063667", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	web_url("Buttons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Buttons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FtsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FtsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Status.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/Status.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ-iXOYDUAe-wjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("Filter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/Filter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TextFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TextFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZqo4aQRk7oQcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("CheckboxFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AdsourceFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AdsourceFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t264.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("DateRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IndustryFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/IndustryFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Location.SearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/Location.SearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotesFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/NotesFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroupsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FolderGroupsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CustomField.Search.SimpleRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/CustomField.Search.SimpleRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t273.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AttachmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AttachmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t274.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComplexRecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ParentCompanyFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/ParentCompanyFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CommunicationMethodsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CommunicationMethodsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DivisionMarketFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/DivisionMarketFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t278.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedSearchButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedSearchButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t279.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroup.MassManageButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/FolderGroup.MassManageButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t280.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Search/Templates/sidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t281.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AddRequirementSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Requirement/Templates/AddRequirementSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t282.inf", 
		"Mode=HTML", 
		LAST);

	web_url("LegacyCooltipButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/LegacyCooltipButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t283.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExportButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ExportButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t284.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ScheduledItemButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ScheduledItemButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t285.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/MailingListButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleSidebarButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t287.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t288.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZcQHrpMZ_d50jLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("TagView.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t289.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateTimePicker.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t290.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZfznSSdwFfasjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_url("ListRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ListRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t293.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FlagListControl.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/FlagListControl.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t294.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedShareableItemList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedShareableItemList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t295.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_3", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZWr0W7XUFtJcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("sendSurveyDialog.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/sendSurveyDialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		LAST);

	web_url("RecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRNtuVwgB1_sjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLbkGb-gkIy04VOCHJCMtkWGVTiQjLZFhlU4kIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("designer-field.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-field.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-pageBreak.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-pageBreak.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t303.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZuIzT8NwPF9kjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLUFdWlUkIy1-xuI1JCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/company/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Apple\",\"SearchIndexes\":[{\"IndexName\":\"Notes\",\"LocalizedValue\":\"Search Notes\",\"Value\":0}],\"SearchRecord\":false,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,130,136,144,147],\"DimensionValueID\":null,\""
		"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Company\"},{\"ID\":\"CurrentLocation\"},{\"ID\":\"LastNote\"},{\"ID\":\"ContactCount\"},{\"ID\":\"PositionCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Company\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
		EXTRARES, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/4.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/5.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

/* Added by Async CodeGen.
ID = Push_2
 */
	web_stop_async("ID=Push_2", 
		LAST);

	lr_end_transaction("1_Company Search",LR_AUTO);

	return 0;
}