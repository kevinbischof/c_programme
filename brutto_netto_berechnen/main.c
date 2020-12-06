/*************************************************
* Einlesen eines Nettobetrages, Berechnung der   *
* MWSt, des Bruttobetrages mit 2 Nachkommast.	 *
* Autor: Kevin Bischof      					 *
* Datum: 26.10.2016			            		 *
*************************************************/

#include <stdio.h>
#include <math.h>

int main() {

	/*Deklarieren der Variablen*/
	float netto;
	float mwst;
	float brutto;

	/*Programmbeginn*/
	printf("Programm zur Berechnung eines Bruttobetrages\n\n");
	printf("Bitte geben Sie einen Nettobetrag in EUR ein: ");

	/*Eingabe des Benutzers*/
	scanf("%f", &netto);

	/*Ausgabe des Nettobetrages und Berechnungen der MWSt und des Bruttobetrages*/
	printf("Nettobetrag	    =	%08.2f EUR \n", netto);
	mwst = netto * 0.19;
	printf("MWSt-Satz 19.00 %%   =	%08.2f EUR \n", mwst);
	brutto = netto * 1.19;
	printf("Bruttobetrag	    =	%08.2f EUR \n", brutto);

	/*Programmende*/
	return 0;
}
