#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arrayEinlesen(int zahlen[], int groesse);
int mittelwert(int zahlen[], int groesse);
int groessteZahl(int zahlen[], int groesse);
int kleinsteZahl(int zahlen[], int groesse);
int zweitkleinsteZahl(int zahlen[], int groesse, int max, int min);
int zahlenUmgekehrtAbsolut(int zahlen[], int groesse);

#endif