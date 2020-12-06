/************************************************
* Programm Array und Pointer		           	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 04.01.2017								*
************************************************/

#include <stdio.h>

int main()
{
	int a[3] = {42, 1337, 50};
	int i;
	int *ptr;
	
	ptr = a;
	printf("%d \n",*ptr);
	
	return 0;
}
