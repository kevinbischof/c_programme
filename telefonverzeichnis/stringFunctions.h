struct Eintrag {
	char name[200];
	char vorname[200];
	char vorwahl[10];
	char nummer[10];
};
typedef struct Eintrag Eintrag;
Eintrag einfuegen(Eintrag *verzeichnis, int y, int *p);
Eintrag loeschen(Eintrag *verzeichnis, int *p);
Eintrag suchen(Eintrag *verzeichnis, int *p);
Eintrag anzeigen(Eintrag *verzeichnis, int *p);

