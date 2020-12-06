/************************************************
* Programm Matrix fuellen  	             	    *
* Autor: Kevin Bischof					        *
* Datum: 18.11.2016					            *
************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	/*Deklarieren der Variablen*/
	int matrix[5][5]={};
	int i,j,eingabe;
	/*Programmtitel*/
	printf("\nProgramm 5 * 5 Matrix\n");
	printf("\nBitte waehlen Sie:\n");
	printf("Option 1: Fuelle die erste Zeile und letzte Spalte mit Einsen\n");
	printf("Option 2: Fuelle die beiden Diagonalen der Matrix mit Einsen\n");
	printf("Bitte 1 oder 2 eingeben: ");
	/*Einlesen der Benutzereingabe*/
	scanf("%i",&eingabe);
	/*Pruefen, ob Eingabe korrekt war*/
	while(eingabe != 1 && eingabe != 2){
	printf("Fehler. Bitte geben Sie 1 oder 2 ein:");
	scanf("%i",&eingabe);
	}
	printf("\n");
	/*Matrix fuer Option 1 fuellen*/
	if(eingabe == 1){
		for(j = 0; j < 5;j++){
			matrix[0][j]=1;
		}
		for(i = 1; i < 5;i++){
			matrix[i][4]=1;
		}
	/*Matrix fuer Option 2 fuellen*/
	}else{
		for(i=1;i<=5;i++){
			matrix[i-1][i-1]=1;
			matrix[i-1][5-i]=1;
		}
	}
	/*Ausgabe der Matrix*/
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	/*Programmende*/
	return 0;
}
