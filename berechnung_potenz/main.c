/************************************************
* Programm zur Berechnung der Potenz           	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 14.12.2016								*
************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	int x = 0, y = 0;
	printf("\nProgramm zur Berechnung der Potenz\n");
	printf("Bitte geben Sie x ein: ");
	scanf("%i",&x);
	printf("Bitte geben Sie y ein: ");
	scanf("%i",&y);
	int ergebnis = pow(x,y);
	printf("Die Potenz von %i hoch %i ist: %i",x,y,ergebnis);
	return 0;
}
