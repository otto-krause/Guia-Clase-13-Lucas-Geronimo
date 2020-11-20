#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[4], y, ascendente=0, descendiente=0;
    for(y=0;y<5;y++){
        printf("Ingrese los numeros: ");
        scanf("%d",&num[y]);
    }
    for (y=0;y<4;y++){
        if(num[y]<=num[y+1]){
            ascendente++;
        }
        if(num[y]>=num[y+1]){
            descendiente++;
        }
    }
    if (ascendente==4){
        printf(" Fueron ingresados de forma Ascendente\n");
    }
    else
    {
        if (descendiente==4){
            printf(" Fueron ingresados de forma Descendiente\n");
        }
        else
            printf(" Fueron ingresados de forma Desordenada\n|");
    }
    printf("Suma entre extremos %d",num[0]+num[4]);
    return 0;
}
