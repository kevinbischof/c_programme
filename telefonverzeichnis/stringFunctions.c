#include <stdio.h>
#include "stringFunctions.h"

Eintrag einfuegen(Eintrag *verzeichnis, int y, int *p)
{
	char name[200];
	if(*p == 0)
	{
		*p = 1;
	}
	if(*p < y)
	{
		int i = 0, j = 0, l = 0, gefunden = 0, korrekt = 0;
		printf("\nBitte einen Namen eintragen: ");
		/* Speichern der Eingabe in einer Zwischenvariablen */
		scanf("%s",name);
		/* Ueberpruefen, ob es bereits einen Eintrag mit diesem Namen gibt */
		for(i=0;i<=*p;i++)
		{
			while(name[j] != '\0')
			{
				if(name[j] == verzeichnis[i].name[j])
				{
					korrekt = 1;
					j++;
					gefunden = i;
				}else{
					korrekt = 0;
					gefunden = 1000;
					break;
				}
			}
		}
		if(gefunden != 1000)
		{
			printf("\nFehler! Eintrag %s ist bereits vorhanden.", name);
		}else{
			for(i=0;i<200;i++)
			{
				if(name[i] != '\0')
				{
					verzeichnis[*p].name[i] = name[i];
				}						
			}
			printf("\nBitte einen Vornamen eintragen: ");
			scanf("%s",verzeichnis[*p].vorname);
			printf("\nBitte einen Vorwahl eintragen: ");
			scanf("%s",verzeichnis[*p].vorwahl);
			printf("\nBitte einen Nummer eintragen: ");
			scanf("%s",verzeichnis[*p].nummer);	
			printf("\nNeuer Eintrag gespeichert:\n");
			printf("%s, %s: %s %s\n", verzeichnis[*p].name, verzeichnis[*p].vorname, verzeichnis[*p].vorwahl, verzeichnis[*p].nummer );
			*p += 1;		
		}
	}else{
		printf("\nFehler! Telefonbuch ist voll! Bitte loeschen Sie einen Eintrag.");
	}

}

Eintrag loeschen(Eintrag *verzeichnis, int *p)
{
	/* Loeschen indem man den Namen mit dem determinierenden Nullbyte an der 1. Stelle ueberschreibt*/
	char eingabe[200];
	int i = 0, j = 0, gefunden = 0, korrekt = 0;
	printf("\nWelcher Eintrag soll geloscht werden?: ");
	scanf("%s", eingabe);
	for(i=0;i<=*p;i++)
	{
		while(eingabe[j] != '\0')
		{
			if(eingabe[j] == verzeichnis[i].name[j])
			{
				korrekt = 1;
				j++;
				gefunden = i;
			}else{
				korrekt = 0;
				gefunden = 1000;
				break;
			}
		}	
	}
	if(gefunden == 1000)
	{
		printf("\n%s konnte nicht gefunden werden.\n", eingabe);
	}else{
		Eintrag leer = {'\0', '\0', '\0', '\0'};
		verzeichnis[gefunden] = leer;
		printf("\nEintrag %s wurde geloescht!\n", eingabe);				
	}
}

Eintrag suchen(Eintrag *verzeichnis, int *p)
{
	char suche[200];
	int i = 0, j = 0, gefunden = 0, korrekt = 0;
	printf("\nGeben Sie den gesuchten Namen ein: ");
	scanf("%s", &suche);			
	for(i=0;i<=*p;i++)
	{
		while(suche[j] != '\0')
		{
			if(suche[j] == verzeichnis[i].name[j])
			{
				korrekt = 1;
				j++;
				gefunden = i;
			}else{
				korrekt = 0;
				gefunden = 1000;
				break;
			}
		}	
	}
	if(gefunden == 1000)
	{
		printf("\n%s konnte nicht gefunden werden.\n", suche);
	}else{
		printf("\%s gefunden:\n", suche);
		printf("%s, %s: %s %s\n", verzeichnis[gefunden].name, verzeichnis[gefunden].vorname, verzeichnis[gefunden].vorwahl, verzeichnis[gefunden].nummer );					
	}
	
	
}

Eintrag anzeigen(Eintrag *verzeichnis, int *p)
{
	int i;
	if(*p == 0)
	{
		printf("\nFehler! Das Telefonbuch ist leer\n");
	}else{
		for(i=0;i<=*p;i++)
		{
			if(verzeichnis[i].name[0] != '\0')
			{
				printf("\nTelefonbucheintrag %d\n", i);
				printf("%s, %s: %s %s\n", verzeichnis[i].name, verzeichnis[i].vorname, verzeichnis[i].vorwahl, verzeichnis[i].nummer );
			}
		}
	}
}
