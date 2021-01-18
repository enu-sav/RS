CKEDITOR.plugins.setLang( 'lite', 'sk', {
	TOGGLE_TRACKING: "Prepnúť záznam zmien",
	TOGGLE_SHOW: "Prepnúť zobrazenie zmien",
	ACCEPT_ALL: "Prijať všetky zmeny",
	REJECT_ALL: "Zrušiť všetky zmeny",
	ACCEPT_ONE: "Prijať zmenu",
	REJECT_ONE: "Zrušiť zmenu",
	START_TRACKING: "Zapnúť záznam zmien",
	STOP_TRACKING: "Vypnúť záznam zmien",
	PENDING_CHANGES: "Dokument obsahuje zaznamenané zmeny.\nPred ukončením režimu záznamu zmien treba všetky zmeny prijať alebo zrušiť.",
	HIDE_TRACKED: "Skryť zaznamenané zmeny",
	SHOW_TRACKED: "Zobraziť zaznamenané zmeny",
	CHANGE_TYPE_ADDED: "vložené",
	CHANGE_TYPE_DELETED: "zmazané",
	MONTHS: ["Január", "Február", "Marec", "Apríl", "Máj", "Jún", "Júl", "August", "September", "Október", "November", "December"],
	NOW: "teraz",
	MINUTE_AGO: "pred minútou",
	MINUTES_AGO: "pred xMinutes minútami",
	BY: "",
	ON: "",
	AT: "",
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
