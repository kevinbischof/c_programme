/************************************************
* Simulation eines einfachen Taschenrechners   	*
*                                               *
* Autor: Kevin Bischof					        *
* Datum: 31.10.2016					            *
************************************************/

#include <stdio.h>
int main() {

	/*Deklarieren der Variablen*/
	char operator;
	int operator_check;
	float operand1, operand2, ergebnis;

	/*Programmbeginn*/
	printf("\nEinfacher Taschenrechner\n\n");
	printf("Geben Sie den gewuenschten Operator ein (+,-,*,/): \n");
	
	/*operator_check ist ein Hilfsoperator
	 * Einlesen der Benutzereingabe
	 * Ueberpruefung, ob ein korrekter Operator eingegeben wurde
	 * Ggf. wiederholte Aufforderung zur Eingabe eines Operators*/
	operator_check=1;
	while(operator_check==1){
		fflush(stdin);
		scanf("%c", &operator);
		if(operator == '+' || operator == '-' || operator == '*' || operator == '/') {
			operator_check = 0;
		}else{
			operator_check = 1;
			printf("Fehler. Bitte einen korrekten Operator eingeben:\n");	
		}	
	}

	/*Aufforderung zur Eingabe der beiden Operanden*/
	printf("Geben Sie die beiden Operanden ein.\n");
	printf("Operand 1: \n");
	scanf("%f", &operand1);
	printf("Operand 2: \n");
	scanf("%f", &operand2);

	/*Ausgabe der eingegebenen Operanden*/
	printf("Operand 1: %.2f, Operand 2: %.2f\n", operand1, operand2);		
	
	/*Berechnung der Operanden mit dem eingegebenen Operator
	 * Bei Division durch Null wird das Programm direkt beendet.
	 * Das Ergebnis wird direkt ausgegeben*/
	switch(operator) {
		case '+':
			ergebnis = operand1 + operand2; printf("Ergebnis: %.2f\n", ergebnis); break;
		case '-':
			ergebnis = operand1 - operand2; printf("Ergebnis: %.2f\n", ergebnis); break;
		case '*':
			ergebnis = operand1 * operand2; printf("Ergebnis: %.2f\n", ergebnis); break;
		case '/':
			if(operand2 == 0) {
				printf("Eine Division durch Null ist nicht erlaubt!\n");
			}else{ 
				ergebnis = operand1 / operand2; printf("Ergebnis: %.2f\n", ergebnis); break;
			}
	}

	/*Programmende*/
	return 0;
}
