Perform_Financial_Account_Update()
{
	
web_submit_form("SIW_DMX_LITE_2", 
		"Snapshot=t104.inf", 
		ITEMDATA, 
		"Name=SELECTED.DUMMY_OCCURRENCES.MENSYS.1", "Value=<OFF>", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp123", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", ENDITEM, 
		"Name=store.DUMMY_OPTIONS.MENSYS.1", "Value=Save", ENDITEM, 
		LAST);
	
	
	return 0;
}
