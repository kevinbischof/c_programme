/************************************************
* Programm Berechnung Schaltjahr        		*
* Autor: Kevin Bischof					        *
* Datum: 18.11.2016					            *
************************************************/

#include <stdio.h>

int main() {
	int jahr;
	printf("Programm Schaltjahr\n\n");
	printf("Bitte geben Sie eine Jahreszahl ein: ");
	scanf("%i",&jahr);
	if(jahr % 4 == 0 && !(jahr % 100 == 0)) {
		printf("%i ist ein Schaltjahr!",jahr);
	}else{
		if(jahr % 100 == 0 && !(jahr % 400 == 0)){
			printf("%i ist kein Schaltjahr!",jahr);
		}else{
			if(jahr % 400 == 0){
				printf("%i ist ein Schaltjahr",jahr);
			}else{
				printf("%i ist kein Schaltjahr",jahr);
			}
		}
	}
	printf("\n");
	return 0;
}
