/************************************************
* Berechnung von Rechtecken                    	*
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 26.10.2016					            *
************************************************/

#include <stdio.h>

int main() {

	/*Deklarieren der Variablen*/
	float seite_a;
	float seite_b;
	float umfang;
	float flaeche;

	/*Programmbeginn*/
	printf("Programm zur Berechnung des Umfanges und der Flaeche von Rechtecken\n\n");

	/*Einlesen der Benutzereingaben*/
	printf("Bitte geben Sie die Seite a in cm ein: ");
	scanf("%f", &seite_a);
	printf("Bitte geben Sie die Seite b in cm ein: ");
	scanf("%f", &seite_b);

	/*Ausgabe der Benutzereingaben*/
	printf("\n\nDie Seite a ist %08.2f cm lang.\n", seite_a);
	printf("Die Seite b ist %08.2f cm lang.\n", seite_b);
	
	/*Berechnung*/
	umfang = (seite_a * 2) + (seite_b *2);
	flaeche = seite_a * seite_b;

	/*Ausgabe der Ergebnisse*/
	printf("Der Umfang des Rechtecks betraegt %08.2f cm.\n",umfang);
	printf("Die Flaeche des Rechtecks betraegt %08.2f cmÂ².\n\n",flaeche);

	/*Programmende*/
	return 0;
}
