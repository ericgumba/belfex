Candidate_Search()
{

	lr_start_transaction("Open Candidate Search");
	web_reg_find("Text=Search Candidates", LAST);
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("candidate", 
		"URL=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchPage.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout-3.4.2.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/Mvc/Content/require/css.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Frame/container.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchResults.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/Base/api.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.common.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/Base/seq.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/ResourceKeys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/keys.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/InfoBox.js", ENDITEM, 
		"Url=/Mvc/Content/require/text.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/autobind.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Help.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/LiveFilterService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Criterion.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/javascript/kendo.web.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/stylesheet.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Base.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Popup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Select.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/Columns.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SidebarButtonsTab.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FtsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/Filter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Status.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Location.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/LiveSkillsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Daxtra/DaxtraFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ComplexRecruiterFilter.js", ENDITEM, 
		"Url=/Mvc/Content/tslib.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/DropDownFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Templates/Location.SearchFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Daxtra/Templates/DaxtraFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/Currency/CurrencyService.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/Skill.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/User.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Department.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Address/Address.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedSearchButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/FolderGroup/FolderGroup.MassManageButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Search/SendSmartFormSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/LegacyCooltipButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/MarketingCampaign.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ExportButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/SearchSidebarButtons/SendMessages.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/SearchSidebarButtons/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/CompareResumeButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OnboardingIntegration/BulkOnboardButtonStart.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OnboardingIntegration/BulkOnboardButtonSync.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OnboardingIntegration/BulkOnboardButtonCancel.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/QuickTaskSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ScheduledItemButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SelectFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/SearchSidebarButtons/BulkUpdate.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/PopupSidebarButtonBase.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleLinkSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Base/DeclareDataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItemModels.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OnboardingIntegration/BulkOnboardButtonBase.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/OnboardingIntegration/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/check.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/delete.png", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/map.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/edit.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/note_add.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/open.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/calendar_add.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/position.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/newemail.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/newmatch.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/newopportunity.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/task_add.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/Skill.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/6.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/Note.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/Match.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/Involved.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/2.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/map.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/1.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/note.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/apps/linkedin.png", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/disk.png", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Attachment/AttachmentPreview.js", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/zoom.png", ENDITEM, 
		LAST);

	web_stop_async("ID=Push_0", 
		LAST);

	web_stop_async("ID=Push_0", 
		LAST);

	web_stop_async("ID=Push_0", 
		LAST);

/* Added by Async CodeGen.
ID = Push_0
 */
/* Added by Async CodeGen.
ID = Push_0
 */
/* Added by Async CodeGen.
ID = Push_0
 */
/* Added by Async CodeGen.
ID = Push_0
 */
	web_stop_async("ID=Push_0", 
		LAST);

	web_url("SearchResults.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Templates/SearchResults.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Controls/Templates/InfoBox.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Templates/Criterion.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Controls/Templates/Help.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/css/Library/select2.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/icon-menu.svg", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_url("Columns.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/Columns.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Buttons.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/Buttons.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FtsFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Filters/Templates/FtsFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Location.SearchFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Templates/Location.SearchFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Filter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Tags/Templates/Filter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DaxtraFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Daxtra/Templates/DaxtraFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Status.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Filters/Templates/Status.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComplexRecruiterFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Templates/DropDownFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("Tip", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("regions-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/location/regions-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("states-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/location/states-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DimensionValues-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/DepartmentDimension/DimensionValues-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_url("GetSimpleVisibleTags", 
		"URL=https://vmsrs.erecruitcloud.com/api/tags/GetSimpleVisibleTags?aboutType=6", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("DepartmentFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Templates/DepartmentFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedSearchButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedSearchButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CurrencyModel", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Currency/CurrencyModel", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroup.MassManageButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/FolderGroup/Templates/FolderGroup.MassManageButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SendSmartFormSidebarButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Forms/Search/Templates/SendSmartFormSidebarButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("LegacyCooltipButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/LegacyCooltipButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("Statuses-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Candidate/Statuses-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MarketingCampaign.AddPeoplePopup.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Templates/MarketingCampaign.AddPeoplePopup.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MarketingCampaign.AddPeopleSidebarButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/Templates/MarketingCampaign.AddPeopleSidebarButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("GetDefaultCountry", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Address/GetDefaultCountry", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/skill/all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("ExportButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/ExportButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("GetHtml", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Daxtra/GetHtml?url=action%3Dsearch_interface%26style%3Ddivs%26libs%3Djb_params%2Cprototype%2Ccontrols%2Ceffects%2Ccss%26ajax_updater%3Dhttps%3A%2F%2Fvmsrs.erecruitcloud.com%2FMvc%2FDaxtra%2FAjaxUpdater%26ajax_auto_completer%3Dhttps%3A%2F%2Fvmsrs.erecruitcloud.com%2FMvc%2FDaxtra%2FAjaxCompleter&_=1549583690261", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/MailingListButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleSidebarButtons.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/SimpleSidebarButtons.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CompareResumeButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/CompareResumeButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/SearchSidebarButtons/Templates/MailingListButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BulkOnboardButtonStart.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/OnboardingIntegration/Templates/BulkOnboardButtonStart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BulkOnboardButtonSync.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/OnboardingIntegration/Templates/BulkOnboardButtonSync.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BulkOnboardButtonCancel.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/OnboardingIntegration/Templates/BulkOnboardButtonCancel.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ScheduledItemButtons.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/ScheduledItemButtons.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_url("QuickTaskSidebarButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/ScheduledItem/Templates/QuickTaskSidebarButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("all_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/department/all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BulkOnboardPopUp.html", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Content/js/BL/OnboardingIntegration/Templates/BulkOnboardPopUp.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);
	
	lr_end_transaction("Open Candidate Search",LR_AUTO);
	
	lr_start_transaction("Candidate Search");

	web_add_auto_header("Origin", 
		"https://vmsrs.erecruitcloud.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("Search-FetchData", 
		"URL=https://vmsrs.erecruitcloud.com/Search/candidate/Search-FetchData", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":[\"erecruit Internal Database\",\"Job Boards\"],\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"java developer\",\"SearchIndexes\":[{\"IndexName\":\"Notes\",\"LocalizedValue\":\"Search Notes\",\"Value\":0},{\"IndexName\":\"Resumes\",\"LocalizedValue\":\"Search Resumes\",\"Value\":1}],\"SearchRecord\":false,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\""
		"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,1,2,8,23,24,26,27,31,32,33,34,40,43,44,45,46,47],\"DimensionValueID\":null,\"DimensionStatuses\":null}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"DefaultResumeId\"},{\"ID\":\"Candidate\"},{\"ID\":\"Title\"},{\"ID\":\"FolderGroup\"},{\"ID\":\"Location\"},{\"ID\":\"Status\"},{\"ID\":\"DateEntered\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"DateEntered\",\"Direction\":1}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/statusicons/99.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/0.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/5.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	lr_end_transaction("Candidate Search",LR_AUTO);


	lr_start_transaction("Candidate Cooltip");

	web_custom_request("GetCounts", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetCounts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'abouttype':'candidate','referenceid':'5157404','userid':'3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d','loggedinas':'Recruiter','entityid':'00000000-0000-0000-0000-000000000e01'}", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com//Search/candidate/", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidateoverview','data':'{\"AboutType\":\"candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_dadada_1x400.png", "Referer=https://vmsrs.erecruitcloud.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("Candidate Cooltip",LR_AUTO);

	lr_start_transaction("Drill into Candidate");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("manage.aspx", 
		"URL=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3ab7585254-495e-4311-9545-1f910247aca5%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a6a6d718d%3ae330518b%3a1e771326%3a8e6f0d33%3a7165f74", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/OnboardingMenu.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/dataSource.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Select.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/interfaces.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/OnboardingProgress.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_url("KendoConfiguration_4", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Localization/KendoConfiguration", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("LocalizationModel_3", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Localization/LocalizationModel?1-1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		LAST);

	web_url("OnboardingMenu.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/OnboardingIntegration/Templates/OnboardingMenu.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_3", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"Resource=0", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/Templates/Onboarding.css", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_url("OnboardingProgress.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/OnboardingIntegration/Templates/OnboardingProgress.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/phone.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vmsrs.erecruitcloud.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("addrecent", 
		"URL=https://vmsrs.erecruitcloud.com/api/bookmark/addrecent", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"abouttypeid\":6,\"referenceid\":5157404,\"name\":\"Nick Schuler (5157404)\",\"userinfo\":\"%7b%22UserID%22%3a%223ed4c5ce-6114-4c0e-9261-2e64c8e6c52d%22%2c%22EntityID%22%3a%2200000000-0000-0000-0000-000000000e01%22%2c%22LoggedInAsMode%22%3a1%2c%22TimeZone%22%3a%22Eastern+Standard+Time%22%7d\"}", 
		LAST);

	web_custom_request("GetWidgetWithSession_2", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'tags/tags','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		LAST);

	web_custom_request("GetWidget", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/status','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_2", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/people','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_3", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/description','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_4", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/lookingfor','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_5", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'extendedproperties','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_6", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/hr','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_7", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'candidate/general','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Candidate%27%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_8", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'contactmethods','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%22Name%22%3A%22Nick%2BSchuler%22%2C%22Email%22%3A%22%22%2C%22Address%22%3A%22eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJNQSIsIlN0YXRlTmFtZSI6Ik1hc3NhY2h1c2V0dHMiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjUyMzM4LCJBZGRyZXNzTGluZTEiOiIxIE1haW4gU3QiLCJBZGRyZXNzTGluZTIiOiIiLCJDaXR5IjoiQm9zdG9uIiwiU3RhdGVJRCI6MjgsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMDIxMTAiLCJSZWdpb25JRCI6b"
		"nVsbH0%253d%22%2C%22AddressID%22%3A%2252338%22%2C%22NrOfAddresses%22%3A1%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/edit.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_3", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'notelist','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20ShowTitle%3A%20false%2C%20ShowReferences%3A%20false%2C%20LastNoteProvider%3A%20%27Context_Candidate_5157404_main_79d5fab7-a534-4293-9945-d8c87b47c5bf%27%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/info.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_ok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/print.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_ok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_ok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_nok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_nok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_nok.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_9", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'address/address','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJNQSIsIlN0YXRlTmFtZSI6Ik1hc3NhY2h1c2V0dHMiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjUyMzM4LCJBZGRyZXNzTGluZTEiOiIxIE1haW4gU3QiLCJBZGRyZXNzTGluZTIiOiIiLCJDaXR5IjoiQm9zdG9uIiwiU3RhdGVJRCI6MjgsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMDIxMTAiLCJSZWdpb25JRCI6bnVsbH0%253d%27%2C%20%27AddressID%27%3A%2052338%2C%20%"
		"27NrOfAddresses%27%3A%201%20%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/RightBarSettings/RightBarSettings.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_4", 
		"URL=https://vmsrs.erecruitcloud.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'communicationlist','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":5157404,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"3ed4c5ce-6114-4c0e-9261-2e64c8e6c52d\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20%27Email%27%20%3A%20%27%27%2C%20%27FullName%27%20%3A%20%27Nick%2BSchuler%27%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/MVC/Content/js/Base/autobind.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Help.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/house.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/link.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/houses.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/profile.png", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("Help.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/Help.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("GetPlacementTypes", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/onboarding/GetPlacementTypes?aboutType=6&referenceId=5157404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_url("GetDocumentDefinitions", 
		"URL=https://vmsrs.erecruitcloud.com/api/onboarding/GetDocumentDefinitions", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("OnboardingProgressOptions", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Onboarding/OnboardingProgressOptions?AboutType=6&ReferenceId=5157404&ProgressType=3", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AllCancellationReasons", 
		"URL=https://vmsrs.erecruitcloud.com/api/onboarding/AllCancellationReasons?OnboardingType=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://vmsrs.erecruitcloud.com");

	web_add_header("__XSRF-TOKEN", 
		"p_LEz6Gv8M7ToJBPlQtLAaql41RTU0S7gP11CEmncASkp0gC240fH2UUCCJz0B7eEecauPD4U-9us0p03-imqUiRlW6Pw1zXJdCoLMaXkHIOWGjw0k9ysnw4_TTP3scAlMV5RQ5eeYLjuazlj8Kc0Jev2n2_Y3F6XB3Hhi_KXEGPHPdA0");

	web_custom_request("get", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/userSettings/get", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.SectionsOrder\"}", 
		LAST);

	web_url("getdefaultplacementtype", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/onboarding/getdefaultplacementtype/?aboutType=6&referenceId=5157404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Candidate/CandidateOnboardingWidget.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Social/Social.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagsView.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Candidate/CandidateReview.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/css/Library/select2.png", "Referer=https://vmsrs.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://vmsrs.erecruitcloud.com");

	web_add_header("__XSRF-TOKEN", 
		"FiDlEH5KxAsU_0IDq0SKDzO55B09vcC2E1Xdzmgid1QZv335hAiV4y2D--O0BUmrGbTPK3q-0hqMRhhxDWlReh8WvKJwF8sUNuUkWWUdnCx_jvW48aBqEG-MHzcoFwVrynjKBRkdpDflieSY7_nwJrKI4NEnwAb3F1uhj4utwcharocL0");

	web_custom_request("get_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/userSettings/get", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.CollapsedSections\"}", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Onboarding/OnboardingWidgetBase.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagView.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/common.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("TagsView.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Tags/Templates/TagsView.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TagsGridCell.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Tags/Templates/TagsGridCell.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Social/Templates/Social.css", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_url("Social.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Social/Templates/Social.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CandidateReviewsList.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Candidate/Templates/CandidateReviewsList.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Currency/CurrencyService.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout.mapping-latest.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		"Url=/MVC/Content/js/Values/Types/CLR/numericType.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", ENDITEM, 
		LAST);

	web_url("OnboardingWidget.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Onboarding/Templates/OnboardingWidget.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TagView.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Tags/Templates/TagView.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CurrencyModel_2", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Currency/CurrencyModel", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("GetOnboardingInformation", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/Onboarding/GetOnboardingInformation?aboutType=6&referenceId=5157404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		LAST);

	web_url("forLookup-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/currency/forLookup-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		LAST);

	web_url("GetByCandidateId", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/CandidateReview/GetByCandidateId/?id=5157404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Drill into Candidate",LR_AUTO);

	lr_start_transaction("Candidate Notes");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("LoadUserControl.aspx", 
		"URL=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/candidate/manage.aspx?refid=5157404&null", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("KendoConfiguration_5", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Localization/KendoConfiguration", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Content/js/BL/Note/NotesList.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=../Content/js/Search/EmbeddedSearch.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("NotesList.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Note/Templates/NotesList.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/SearchResults.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("InfoBox.html_4", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"Resource=0", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/LiveFilterService.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("SearchResults.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Criterion.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("Help.html_3", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/Help.html", 
		"Resource=0", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("record", 
		"URL=https://vmsrs.erecruitcloud.com/Search/note/by/record?aboutType=Candidate&referenceID=5157404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/Filters/ComplexRecruiterFilter.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/NoteAction.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/Components/Columns.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/DateRangeFilter.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/DropDownFilter.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/User.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/Department.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("ComplexRecruiterFilter.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Base/DeclareDataSource.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Controls/DateTimePicker.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("Columns.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateRangeFilter.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/BL/Templates/DepartmentFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/Filters/SelectFilter.js", "Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", ENDITEM, 
		LAST);

	web_url("DateTimePicker.html", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Controls/Templates/DateTimePicker.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_2", 
		"URL=https://vmsrs.erecruitcloud.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("all_3", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/department/all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		LAST);

	web_url("List-all", 
		"URL=https://vmsrs.erecruitcloud.com/Mvc/noteaction/List-all", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid=5157404&control=Notes", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Candidate Notes",LR_AUTO);

	web_custom_request("ping", 
		"URL=https://vmsrs.erecruitcloud.com/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1549583650053", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vmsrs.erecruitcloud.com/Recruiter/", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		LAST);

	return 0;
}