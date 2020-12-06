/************************************************
* Programm zum Verbinden von Freunden          	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 07.01.2017								*
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "stringFunctions.h"

	const int groesse = 25;

int main() {
	int anzahlVornamen = 0;
	int *anzahl = &anzahlVornamen;
	char friends[100];
	char vorname1[groesse];
	char vorname2[groesse];
	int i = 0, vergleich = 0;

	printf("\nProgramm zum Verbinden von Freunden\n\n");

	/* Eingabe von zwei Vornamen */
	/* Bei Character Arrays muss bei scanf kein & angegeben werden und auch kein []  */
	vornameEinlesen(vorname1, anzahl);
	vornameEinlesen(vorname2, anzahl);
	
	/* Vergleich der Vornamen */
	vergleich = equal(vorname1, vorname2);
	
	/* Wenn ERgebnis des Vergleichs */
	if(vergleich == 1)
	{
		stringconcatenate(vorname1, vorname2, friends);
		printf("\nStatus: %s\n",friends);
	}else{
		printf("\nStatus: %s hat keine Freunde.\n", vorname1);
	}
	
	
	return 0;
}
