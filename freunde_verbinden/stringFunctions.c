#include <stdio.h>
#include <stdlib.h>
#include "stringFunctions.h"
void vornameEinlesen(char *vorname, int *anzahl)
{
	*anzahl = *anzahl + 1;
	printf("Bitte geben Sie den %d. Vornamen ein: ", *anzahl);
	scanf("%s", vorname);
}

int equal(char *x, char *y)
{
	int ergebnis = 0;
	int i = 0;
	

	while(x[i] != '\0')
	{
		if(x[i] == y[i])
		{
			ergebnis = 0;
			i++;	
		}else{
			ergebnis = 1;
			break;
		}
	}
	
	return ergebnis;
}




void stringconcatenate(char *x, char *y, char *friends)
{
	int i = 0, j = 0, k = 0;
	char tmp[20] = " sind Freunde.";
	while(x[i] != '\0')
	{
		friends[i] = x[i];
		i++;
	}
	friends[i] = ' ';
	i++;
	friends[i] = '&';
	i++;
	friends[i] = ' ';
	i++;
	while(y[j] != '\0')
	{
		friends[i] = y[j];
		i++;
		j++;
	}
	for(k=0;k<20;k++)
	{
		friends[i] = tmp[k];
		i++;
	}
}

