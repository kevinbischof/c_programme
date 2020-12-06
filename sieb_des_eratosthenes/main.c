/************************************************
* Programm Sieb des Eratosthenes               	*
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 21.11.2016					            *
************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	/*Deklarieren der Variablen*/	
	bool stellen[1000] = {0};
	/*Initialisieren des ersten Arrays mit Null,
	* die restlichen Zahlen sind nicht initialisiert
	* und daher automatisch Null.*/
	int i, j;
	/*Setzen der Vielfachen einer Zahl auf false*/
	for(i=2;i<1000;i++) {
		/*Pruefen, ob Array-Stelle false ist*/
		if(!stellen[i-2]) {
			/*Falls nicht, alle Vielfachen
			* der Zahl auf false setzen*/
			for(j=2*i;j<1000;j+=i) {
				stellen[j-2] = true;
			}
		}
	}
	/*Ermittlung der Anzahl von Primzahlen*/
	int primzahlen[168];
	int anzahl = 0;
	for(i=2; i<1000;i++) {
		if(!stellen[i-2]) {
			primzahlen[anzahl] = i;
			anzahl++;
		}
	}
	/*Ausgabe der Primzahlen*/
	for(i=0;i<anzahl;i++) {
		printf("%i", primzahlen[i]);
		if(i<anzahl-1) {
			printf(", ");
		}
	}
	printf("\n");
	/*Programmende*/
	return 0;	
}
