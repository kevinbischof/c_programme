/************************************************
* Einlesen von zwei Integer-Zahlen und          *
* Berechnung deren Summe, Differenz, Produkt	*
* und Quotienten.                               *
* Autor: Kevin Bischof					        *
* Datum: 26.10.2016					            *
************************************************/

#include <stdio.h>
int main() {

	/*Deklarieren der Variablen*/
	int a, b, summe, differenz, produkt;
	float quotient;

	/*Programmbeginn*/
	printf("\nProgramm zur Berechnung der Summe, Differenz, Produkt und Quotient zweier Zahlen\n\n");
	printf("Bitte geben Sie zwei ganze Zahlen ein:\n");
	
	/*Einlesen der Benutzereingaben*/
	printf("Erste Zahl: \n");
	scanf("%i", &a);
	printf("Zweite Zahl: \n");
	scanf("%i", &b);

	/*Ausgabe der Benutzereingaben*/
	printf("\nDie erste Zahl lautet: %i.\nDie zweite Zahl lautet: %i.\n",a,b);
	
	/*Berechnungen*/
	summe = a + b;
	differenz = a - b;
	produkt = a * b;
	/*Typkonvertierung (Type Casting) der Integer Zahlen in Fliesskommazahlen*/
	quotient = (float) a / (float) b;



	/*Augabe der Ergebnisse*/
	printf("Die Summe der Zahlen lautet: %i\n", summe);
	printf("Die Differenz der Zahlen lautet: %i\n", differenz);
	printf("Das Produkt der Zahlen lautet: %i\n", produkt);
	printf("Der Quotient der Zahlen lautet: %.2f\n\n", quotient);

	/*Programmende*/
	return 0;
}
