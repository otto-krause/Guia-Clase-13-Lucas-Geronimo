#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,may,min,rt[20],v;
    int y=1;
    for (a=0;a<20;a++){
printf("Ingrese el total de unidades vendidas en 15 dias %d ",y);
scanf("%d",&rt[a]);
y++;
}
for (a=0;a<20;a++){
if (y=1){
    may=rt[a]/15;
    v=y;
}
}
for (a=0;a<20;a++){
if ((rt[a]/15)>may){
    may=rt[a]/15;
    v=y;
}
min=min+rt[a];
}


printf("\n El total es %d",min);
printf("\n La mayor venta diaria es %d por el vendedor %d",may,v);
}

