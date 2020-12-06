/******************************************************************************

Programm, um ein Wuerfelspiel mit 5 wuerfen zu simulieren.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    const int wuerfe = 5;
    int array[wuerfe];
    int count[wuerfe];
    int i;
    int fullHouse = 0;
    
    printf("\nWürfelspiel mit 5 Würfen");
    
    for (i = 0; i < wuerfe; i++) {
        //Initialize count array with 0
        count[i] = 0;

        //scan input from user
        printf("\nWürfel %i: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n Es wurde gewürfelt:");
    
    for (i = 0; i < wuerfe; i++) {
        
        printf("\nWürfel %i Augenzahl: %i", i+1, array[i]);

        switch (array[i]) {
        case 1:
            count[0]++;
            break;
        case 2:
            count[1]++;
            break;
        case 3:
            count[2]++;
            break;
        case 4:
            count[3]++;
            break;
        case 5:
            count[4]++;
            break;
        default:
            break;
        }
        
    }

    printf("\nDein Gewinn: ");

    for (i = 0; i < wuerfe; i++) {
                
        switch (count[i]) {
        case 2:
            fullHouse++;
            if (fullHouse = 2) {
                printf("\nFull House!\n");
                return 0;
            }
            break;
        case 3:
            fullHouse++;
            if (fullHouse = 2) {
                printf("\nFull House!\n");
                return 0;
            }
            break;
        case 4:
            printf("Poker!\n");
            return 0;
        case 5:
            printf("Grand!\n");
            return 0;
        default:
            if (i == wuerfe-1) {
                printf("Leider nix gewonnen!\n");
                return 0;
            }
            break;
        }
        
    } 

    return 0;
}
