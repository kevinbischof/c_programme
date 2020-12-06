/************************************************
* Programm Arrays					           	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 05.01.2017								*
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arrayFunctions.h"

int main() 
{
	int i = 0;
	const int groesse = 1000;
	int max, min = 0;
	int zahlen[groesse];
	printf("\nProgramm Arrays\n\n");

	int neueGroesse = arrayEinlesen(zahlen, groesse);
	mittelwert(zahlen, neueGroesse);
	max = groessteZahl(zahlen, neueGroesse);
	min = kleinsteZahl(zahlen, neueGroesse);
	zweitkleinsteZahl(zahlen, neueGroesse, max, min);
	zahlenUmgekehrtAbsolut(zahlen, neueGroesse);
	printf("\n");
	return 0;
}

