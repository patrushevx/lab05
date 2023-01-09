#include <stdio.h>

int main(){
    int wysokosc, i=1;

    printf("| Podaj wysokosc: ");
    scanf("%d", &wysokosc);
    
    if (wysokosc == 0)
    {
        printf("(!) Nie ma choinki :C");
    } else if (wysokosc == 1){
        printf("   *   \ntylko pien :/");
    } else {
        for (i=1; i <= wysokosc; i++)
        {
            for (int j = 0; j < wysokosc-i; j++)
            {
                printf(" ");
            }
            
            for (int k = 0; k < i*2-1; k++)
            {
                printf("*");
            }
            printf("\n");
         
        }
        for (int b = 0; b < wysokosc-1; b++)
            {
            printf(" ");
            } printf("*");
        
    }

    getchar();
    return 0;
}