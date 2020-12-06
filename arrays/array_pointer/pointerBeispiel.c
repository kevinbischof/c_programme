/************************************************
* Programm Array und Pointer		           	*
*                                               *
* Autor: Kevin Bischof							*
* Datum: 04.01.2017								*
************************************************/

#include <stdio.h>

int main() {
    
    int x = 100;
    
    printf("\nAdresse von x(%i) ist %p", x, &x);
    
    x = 200;
    
    printf("\nAdresse von x(%i) ist %p", x, &x);
    
    return 0;
}
