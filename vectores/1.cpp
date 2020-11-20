#include <stdio.h>
#include <stdlib.h>
int main(){
int y,rt=0,r[]{1,2,3,4,5};
for (y=0;y<5;y++){
printf("Ingrese las resistencia ");
scanf("%d",&r[y]);}
for (y=0;y<5;y++){
printf("\nlas resistencias son:%d",r[y]);
rt=rt+r[y];
}
printf("\nla resistencia total es:%d",rt);
return 0;
}
