/************************************************
* Berechnung von Jahrespraemien abhaenging     	*
* vom Dienstalter.                              *
* Autor: Kevin Bischof					        *
* Datum: 29.10.2016					            *
************************************************/

#include <stdio.h>
int main() {

	/*Deklarieren der Variablen*/
	int alter, dienstalter, praemie;
	
	/*Programmbeginn*/
	printf("\nProgramm zur Berechnung von Jahrespraemien\n\n");
	printf("Alter des Angestellten: \n");

	/*Einlesen des Alters und Dienstalters*/
	scanf("%d", &alter);
	printf("Dienstalter in ganzen Jahren: \n");
	scanf("%d", &dienstalter);

	/*Berechnung der Praemie*/
	if (dienstalter == 0) {
		praemie = 0;
	}else {
		if(dienstalter >= 1 && dienstalter <6) {
			praemie = 600;
		}else {
			if(dienstalter >= 6 && alter < 50) {
				praemie = 250 + (75 * dienstalter);
		}else {
			if(dienstalter >= 6 && alter >= 50) {
				praemie = 500 + (75 * dienstalter);
				}
			}
		}
	}

	/*Ausgabe der Praemie*/
	printf("Praemie: %d EUR\n", praemie);

	/*Programmende*/
	return 0;
}
