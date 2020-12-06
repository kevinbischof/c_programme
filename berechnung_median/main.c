/************************************************
* Programm Median                         	    *
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 15.11.2016					            *
************************************************/

#include <stdio.h>

/* Funktion Bubblesort definieren */
void bubbleSort(int a[], int n) {
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < n-1 ;i++) {
			if(a[i] > a[i+1]) {
			int b = a[i];
			a[i] = a[i+1];
			a[i+1] = b;
			}
		}
	}
}

int main() {
	/*Deklarieren der Variablen*/
	int i;
	const int groesse = 6;
	int a[groesse];
	int summe = 0;
	int stelle = 0;
	int stelle1 = 0;
	int stelle2 = 0;
	float median = 0;
	


/*Programmtitel*/
	printf("\nProgramm Median\n");
	
	/* for-Schleife fuer die Abfrage der Wert */
	for (i=0; i < groesse; i++) {
		printf("Bitte geben Sie den %i. Wert ein: ", i+1);
		scanf("%i", &a[i]);
	}
	/*Ausgabe der unsortierten Zahlenfolge*/
	printf("\nUnsortierte Zahlenfolge:\n");
	for(i=0; i < groesse; i++) {
		printf("%i", a[i]);
		if(i < groesse-1) {
			printf(", ");
		}
	}
	/*Ausgabe der sortierten Zahlenfolge*/
	printf("\nSortierte Zahlenfolge:\n");
	/*Sortieren der Zahlen mittels Funktion bubbleSort*/
	bubbleSort(a, groesse);
	for(i=0; i < groesse; i++) {
		printf("%i", a[i]);
		if(i < groesse-1) {
			printf(", ");
		}
	}
	/*Pruefung ob Anzahl der eingegebenen Zahlen
	* grade oder ungrade sind. Je nach dem wird
	* der Median berechnet.
	* a % b liefert den Restwert */
	if(groesse % 2 > 0) {
		/*Ermittlung der mittleren Zahl*/
		stelle = (groesse / 2);
		printf("\nDer Median der eingegebenen Zahlenfolge lautet: %i\n", a[stelle]);
	}else{
		/*Ermittlung der beiden Mittleren Zahlen*/
		stelle1 = (groesse / 2) - 1;
		stelle2 = (groesse / 2);
		/*Berechnung des Median
		* Typkonvertierung von int nach float*/
		median = (float)(a[stelle1] + (float)a[stelle2]) / 2;
		/*Ausgabe des Ergebnisses*/
		printf("\nDer Median der eingegebenen Zahlenfolge lautet: %.2f\n", median);
	}
	/*Programmende*/
	 return 0;	
}
