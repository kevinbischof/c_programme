/************************************************
* Berechnung der Oberflaeche und des Volumens   *
* einer Kugel.                                  *
* Autor: Kevin Bischof					        *
* Datum: 26.10.2016					            *
************************************************/

#include <stdio.h>
int main() {

	/*Deklarieren der Variablen*/
	float radius;
	float volumen;
	float oberflaeche;
	float pi = 3.141592654;

	/*Programmbeginn*/
	printf("\nProgramm Kugelberechnung\n\n");
	printf("Bitte geben Sie den Radius der Kugel in cm ein: ");

	/*Einlesen der Benutzereingabe*/
	scanf("%f", &radius);

	/*Berechnung*/
	volumen = (4 * pi * (radius*radius*radius))/3;
	oberflaeche = 4 * pi * (radius*radius);

	/*Ausgabe der Ergebnisse*/
	printf("\nDas Volumen der Kugel betraegt %07.2f cmÂ³\n", volumen);
	printf("Die Oberflaeche der Kugel betraegt %07.2f cmÂ²\n\n", oberflaeche);

	/*Programmende*/
	return 0;
}
