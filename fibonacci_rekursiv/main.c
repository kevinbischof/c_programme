/************************************************
* Programm Fibonacci				          	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 07.01.2017								*
************************************************/

#include <stdio.h>
#include "fibonacci.h"

int main() {
	int eingabe = 0, ergebnis = 0;
	printf("\nProgramm Fibonacci\n");
	printf("\nBitte geben Sie eine Zahl ein: ");
	scanf("%i",&eingabe);
	ergebnis = f(eingabe);
	printf("\nErgebnis: %i\n",ergebnis);
	/* Spaetestens ab der Zahl 46 kann man auf das Ergebnis nicht mehr warten.
	Die Dauer betraegt ca. 1min 04 sek. */
	return 0;
}
