/************************************************
* Programm zum einlesen von ganzen Zahlen      	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 21.12.2016								*
************************************************/

#include <stdio.h>
#include <stdlib.h>

int einlesen() {
	int groesse = 0;
	int h = 1;
	printf("Geben Sie ganze Zahlen ein. Die Eingabe wird durch die Eingabe einer Null beendet.\n");
	int *p = (int*)malloc(37 * sizeof (int));
	if(p == NULL) {
		printf("Fehler! Pointer ist Null!");
	}else{
		while(h != 0) {
			printf("Bitte ganze Zahl eingeben: ");
			scanf("%i",&h);
			
			if(h != 0) {
			groesse++;
			p[groesse] = h;
			}else{
				printf("\nEinlesen beendet.\n");
			}
		}

	}
	int i = 0;
	for (i = 1; i <= groesse; i++) {
		printf("\n%i",p[i]);
	}
	
	
	free(p);
	p = NULL;
}

int main() {

	printf("\nProgramm Arrays\n\n");
	einlesen();
	return 0;
}
