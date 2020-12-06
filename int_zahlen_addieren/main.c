/************************************************
* Programm Integer Zahlen addieren              *
* Autor: Kevin Bischof					        *
* Datum: 21.11.2016					            *
************************************************/

#include <stdio.h>

int main() {
	/*Deklarieren der Variablen*/
	int x,y,summe;
	/*Programmtitel*/
	printf("\nProgramm Bereichsueberschreitungen\n\n");
	printf("Geben Sie bitte zwei Integerzahlen ein: x, y\n\n");
	/*Eingabe des Benutzers speichern und Puffer loeschen*/
	scanf("%i",&x);
	fflush(stdin);
	scanf("%i",&y);
	fflush(stdin);
	/*Berechnung*/
	summe = x + y;
	/*Ausgabe des Ergebnisses*/
	printf("Die Summe von x=%i und y=%i ist: %i\n",x,y,summe);
	
	/*Bei der Addition von zwei sehr grossen Zahlen, kann kein
	korrektes Ergebnis ausgegeben werden. Das liegt daran, dass der Zahlenbereich
	von int beschraenkt ist. Groessere Berechnungen koennen mit
	dem Datentyp float oder long durchgefuehrt werden */
	/*Programmende*/
	return 0;
}
