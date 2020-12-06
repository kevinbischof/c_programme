/************************************************
* Programm zur Verwaltung			          	*
* eines Telefonverzeichnisses					*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 08.01.2017								*
************************************************/

#include <stdio.h>
#include "stringFunctions.h"

int main()
{
	int laengeName = 200;
	int laengeVorwahl = 10;
	int laengeNummer = 10;
	int anzahlEintraege = 50;
	int aktuelleAnzahlEintraege = 0;
	int *p = &aktuelleAnzahlEintraege;
	int eingabe = 0;
	char suche[200];

	Eintrag verzeichnis[50];

	printf("\nProgramm zur Verwaltung eines Telefonverzeichnisses\n");
	
	while(eingabe != 5)
	{
		printf("\nBitte waehlen Sie eine Funktion aus: \n");
		printf("\n1. Eintrag einfuegen.");
		printf("\n2. Eintrag loeschen.");
		printf("\n3. Eintrag suchen.");
		printf("\n4. Eintraege anzeigen.");
		printf("\n5. Programm beenden.\n");
		printf("\nEingabe: ");
		scanf("%d", &eingabe);
		
		switch(eingabe)
		{
			case 1:
			//Eintrag einfuegen	
			einfuegen(verzeichnis, anzahlEintraege, p);
			break;
			case 2:
			//Eintrag loeschen	
			loeschen(verzeichnis, p);
			break;
			case 3:
			//Eintrag suchen
			suchen(verzeichnis, p);	
			break;
			case 4:
			//Eintraege anzeigen
			anzeigen(verzeichnis, p);
		}
	}
	printf("\nProgramm wird beendet.\n");

	return 0;
}
