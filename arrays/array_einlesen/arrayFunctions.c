#include "arrayFunctions.h"

int arrayEinlesen(int zahlen[], int groesse)
{
	/* Arrays einlesen */
	int i = 0;	
	int tmp = 1;
	printf("Geben Sie ganze Zahlen ein. Die Eingabe wird durch die Eingabe einer Null beendet.\n");

		for(i=0;i<groesse;i++)
		{
			printf("Bitte ganze Zahl eingeben: ");
			scanf("%i",&tmp);
			fflush(stdin);
			
			if(tmp == 0) 
			{
				printf("\nEinlesen beendet.\n");
				break;			
			}else{
				zahlen[i] = tmp;
			}
		}
	return i;
}

int mittelwert(int zahlen[], int groesse)
{
	/* Mittelwert berechnen */
	int i = 0, summe = 0;
	float mittelwert = 0;
	for(i=0;i<groesse;i++)
	{
		summe += zahlen[i];
	}
	mittelwert = (float)summe / (float) groesse;
	printf("\nMittelwert: %0.2f", mittelwert);
}

int groessteZahl(int zahlen[], int groesse)
{
	int max = zahlen[0];
	int i = 0;
	for(i = 1; i<groesse;i++)
	{
		if(zahlen[i] > max)
		{
			max = zahlen[i];
		}
	}
	printf("\nGroesste Zahl: %d", max);
	return max;
}

int kleinsteZahl(int zahlen[], int groesse)
{
	int min = zahlen[0];
	int i = 0;
	for(i = 1; i<groesse;i++)
	{
		if(zahlen[i] < min)
		{
			min = zahlen[i];
		}
	}
	printf("\nKleinste Zahl: %d", min);
	
	return min;
}

int zweitkleinsteZahl(int zahlen[], int groesse, int max, int min)
{
	int zweitMin = max;
	int i = 0;
	for(i = 1; i<groesse;i++)
	{
		if((zahlen[i] < zweitMin) && zahlen[i] != min)
		{
			zweitMin = zahlen[i];
		}
	}
	printf("\nZweitkleinste Zahl: %d", zweitMin);
}

int zahlenUmgekehrtAbsolut(int zahlen[], int groesse)
{
	/* Wenn Zahl negativ ist, den Absolutbetrag mit der Funktion abs() erstellen */
	int i = 0;
	for(i = 0;i<groesse;i++)
	{
		if(zahlen[i] < 0)
		{
			zahlen[i] = abs(zahlen[i]);
		}
	}
	
	printf("\nZahlen im Absolutbetrag: ");
	for(i=0;i<groesse;i++)
	{
		printf("%d, ", zahlen[i]);
	}
	
	/* Arraywerte in umgekehrter Reihenfolge in ein neues Array kopieren */
	int zahlenUmgekehrt[groesse];
	for(i=0;i<groesse;i++)
	{
		zahlenUmgekehrt[i] = zahlen[groesse-1-i];
	}
	
	printf("\nZahlen im Absolutbetrag umgekehrt: ");
	for(i=0;i<groesse;i++)
	{
		printf("%d, ", zahlenUmgekehrt[i]);
	}
	
}

