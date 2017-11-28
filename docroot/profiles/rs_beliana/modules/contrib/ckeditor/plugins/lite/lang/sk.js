CKEDITOR.plugins.setLang( 'lite', 'sk', {
	TOGGLE_TRACKING: "Zapnúť/Vypnúť zaznamenávanie zmien",
	TOGGLE_SHOW: "Zapnúť/Vypnúť zaznamenávanie zmien",
	ACCEPT_ALL: "Prijať všetky zmeny",
	REJECT_ALL: "Odmietnuť všetky zmeny",
	ACCEPT_ONE: "Prijať zmenu",
	REJECT_ONE: "Odmietnuť zmenu",
	START_TRACKING: "Zapnúť zaznamenávanie zmien",
	STOP_TRACKING: "Vypnúť zaznamenávanie zmien",
	PENDING_CHANGES: "V dokumente sú zaznamenané zmeny.\nPred vypnutím zaznamenávania zmien ich treba prijať alebo odmientnuť",
	HIDE_TRACKED: "Skryť zaznamenané zmeny",
	SHOW_TRACKED: "Zobraziť zaznamenané zmeny",
	CHANGE_TYPE_ADDED: "Pridané",
	CHANGE_TYPE_DELETED: "Zmazané",
	MONTHS: ["Jan", "Feb", "Mar", "Apr", "Máj", "Jún", "Júl", "Aug", "Sep", "Okt", "Nov", "Dec"],
	NOW: "teraz",
	MINUTE_AGO: "pred minútou",
	MINUTES_AGO: "pred xMinutes minútami",
	BY: "autor",
	ON: "",
	AT: "on",
	LITE_LABELS_DATE: function(day, month, year)
	{
		if(typeof(year) != 'undefined') {
			year = ", " + year;
		}
		else {
			year = "";
		}
		return this.MONTHS[month] + " " + day + year;
	}
});
