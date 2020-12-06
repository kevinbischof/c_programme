/************************************************
* Programm zur Berechnung des Alters           	*
* einer Person                                  *
* Autor: Kevin Bischof							*
* Datum: 14.12.2016								*
************************************************/

#include <stdio.h>

int geburtsjahr() {
	int gebJahr;
	scanf("%i",&gebJahr);
	return gebJahr;
}

int alterBerechnung(int gebJahr) {
	int aktuellesJahr = 2016;
	int alter = aktuellesJahr - gebJahr;
	return alter;
}

void ausgabeAlter(int alter) {
	printf("Sie sind heute %i Jahre alt.",alter);
}


int main() {
	printf("\nProgramm zur Berechnung des Alters einer Person\n");
	printf("\nBitte geben Sie Ihr Geburtsjahr ein: ");
	int gebJahr = geburtsjahr();
	int alter = alterBerechnung(gebJahr);
	ausgabeAlter(alter);
	
	return 0;
}
