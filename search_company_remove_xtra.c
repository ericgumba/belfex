Company_Search()
{
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

	lr_start_transaction("1_Navigate To Company Search Tab"); 

    
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
	lr_end_transaction("1_Navigate To Company Search Tab",LR_AUTO);


	lr_start_transaction("1_Perform Company Search");
    web_reg_find("Text=Wilson", LAST);

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

	lr_end_transaction("1_Perform Company Search",LR_AUTO);

	return 0;
}