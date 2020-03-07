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
  
	lr_start_transaction("1_Quicksearch");
	web_reg_find("Text=Candidate", LAST);
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
 

	lr_end_transaction("1_Quicksearch",LR_AUTO);

	return 0;
}