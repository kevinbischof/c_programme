/************************************************
* Programm Dualzahl	               		        *
* Autor: Kevin Bischof					        *
* Datum: 21.11.2016					            *
************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	
	/* Wertebereich 8 Bit Dualzahl: 0=<Wert<=2^8-1
	Definitionsbereich Dezimalzahl: 0-255 */
	/*Deklarieren der Variablen*/
	int dezimalzahl = 0;
	int dualzahl[7] = {0};
	int i=0,j=0,rest;
	/*Programmtitel*/	
	printf("\nProgramm Dualzahl\n\n");
	printf("Geben Sie bitte eine ganze Zahl ein: ");
	/*Einlesen der Benutzereingabe*/
	scanf("%i",&dezimalzahl);
	/*Leeren des Puffers*/
	fflush(stdin);
	/*Pruefen, ob die Benutzereingabe korrekt war*/
	while(!(dezimalzahl>=0 && dezimalzahl<=255)) {
		printf("Fehler! Bitte geben Sie eine Zahl zwischen 0 und 255 ein: ");
		scanf("%i",&dezimalzahl);
		fflush(stdin);
	}
	/*Berechnung der Dualzahl*/	
	for(i=7;i>=0;i--){
		rest = dezimalzahl % 2;
		dualzahl[i] = rest;
		dezimalzahl = (dezimalzahl - rest)/2;		
	}	
	/*Ausgabe der Dualzahl*/
	printf("Ausgabe im Dualsystem: ");
	for(i=0;i<4;i++){
		printf("%i",dualzahl[i]);
	}
	printf(" ");
	for(i=4;i<8;i++){
		printf("%i",dualzahl[i]);
	}
	printf("\n");
	/*Programmende*/
	return 0;
}
