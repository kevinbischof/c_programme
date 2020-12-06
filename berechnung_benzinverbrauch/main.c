/************************************************
* Berechnung des Benzinverbrauchs eines Autos   *
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 26.10.2016					            *
************************************************/

#include <stdio.h>
int main() {

	/*Deklarieren der Variablen*/
	float benzin, km, verbrauch;

	/*Programmbeginn*/
	printf("\nProgramm zur Berechnung des Benzinverbrauchs eines Autos\n\n");
	printf("Bitte geben Sie die verbrauchte Benzinmenge in Liter ein: \n");

	/*Einlesen der Benutzereingaben*/
	scanf("%f", &benzin);
	printf("Bitte geben Sie die gefahrenen Kilometer ein: \n");
	scanf("%f", &km);
	
	/*Berechnung*/
	verbrauch = (benzin * 100)/(km);
	


	/*Ausgabe des Ergebnisses*/
	printf("Ihr Wagen verbraucht %05.2f Liter Benzin auf 100 Kilometer.\n",verbrauch);
	
	/*Programmende*/
	return 0;
}
