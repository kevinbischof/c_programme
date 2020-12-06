/*************************************************
* Berechnung der Sekunden im Monat November 2016 *
*                                                *
* Autor: Kevin Bischof					         *
* Datum: 26.10.2016				            	 *
*************************************************/

#include <stdio.h>

int main() {

	/*Deklarieren der Variablen*/
	int tage_nov_2016 = 30;
	int sek_nov_2016;

	/*Berechnung der Sekunden*/
	sek_nov_2016 = tage_nov_2016 * 24 * 3600;

	/*Ausgabe der Berechnung*/
	printf("Der Monat November 2016 hat %i Sekunden\n",sek_nov_2016);

	/*Programmende*/
	return 0;
}
