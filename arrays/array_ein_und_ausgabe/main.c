/************************************************
* Programmbeschreibung                          *
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 14.11.2016					            *
************************************************/

#include <stdio.h>

int main() {
	/*Deklarieren der Variablen*/
	int i,j;
	/*Festlegen der Array Groesse*/
	const int groesse = 5;
	/*Erstellen des Arrays*/
	int a[groesse];
	/*Programmtitel*/
	printf("\nProgramm Array Ein- und Ausgabe\n\n");
	/*Eingabe des Benutzers in Array speichern*/
	for (i=0; i < groesse; i++) {
		printf("Bitte geben Sie den %i. Wert ein: \n", i+1);
		scanf("%i",&a[i]);
	}
	/*Eingegebene Werte aus dem Array auslesen*/
	printf("Sie haben folgende Werte eingegeben: ");
	for (i=0; i < groesse; i++) {
		printf("%i", a[i]);
		if(i<groesse-1) {
			printf(", ");
		}
	}
	printf("\n");
	/*Programmende*/
	return 0;
}
