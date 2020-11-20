#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,VP,prom,alumnos[30];
    int a=1;
    for (x=0;x<30;x++){
    printf("Ingrese notas del  alumnos %d ",x);
    scanf("%d",&alumnos[x]);
    a++;
    VP=VP+alumnos[a];
	}
    prom=prom/30;
    printf("el promedio general de la clase es &d",VP);
    }
