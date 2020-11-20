#include <stdio.h>
#include <stdlib.h>
int main(){
    int y,total,mv,vendedores[20],v;
    int i=1;
    for (y=0;y<20;y++){
printf("Ingrese el total de unidades vendidas en 15 dias %d ",y);
scanf("%d",&vendedores[y]);
i++;
}
for (y=0;y<20;y++){
	total=total+vendedores[y];
}
for (y=0;y<20;y++){
if (mv<vendedores[y]){
    mv=vendedores[y];
}
mv=mv/15;
}
printf(" El total es %d",total);
printf("\n La mayor venta diaria esde  %d\n Y por el vendedor %d",mv,i);
return 0;
}


