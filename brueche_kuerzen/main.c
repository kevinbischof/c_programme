/************************************************
* Programm zum Kuerzen von Bruechen           	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 15.12.2016								*
************************************************/
#include <stdio.h>

unsigned int ggt(unsigned int a, unsigned int b) {
	while(b!=0) {
	int rest = a % b;
	a = b;
	b = rest;
}
	return a;
}

int main() {
	unsigned int zaehler;
	unsigned int nenner;
	printf("\nProgramm zum Kuerzen von Bruechen\n\n");
	printf("Bitte geben Sie den Zaehler ein: ");
	scanf("%i",&zaehler);
	fflush(stdin);
	printf("Bitte geben Sie den Nenner ein: ");
	scanf("%i",&nenner);
	fflush(stdin);
	int teiler = ggt(zaehler, nenner);
	printf("\nDer groesste gemeinsame Teiler ist: %i\n",teiler);
	int zaehlerKurz = zaehler / teiler;
	int nennerKurz = nenner / teiler;
	printf("\nDer gekuerzte Bruch heisst: %i/%i\n",zaehlerKurz,nennerKurz);
	return 0;
}


