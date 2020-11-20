#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,my8=0,nota[15],i=1;
    for (x=0;x<15;x++){
printf("\nIngrese la nota del alumno %d ",i);
scanf("%d",&nota[x]);

if(nota[x]>8){
printf("\n alumno %d tiene nota con mas de ocho",i);
my8++;
}
i++;
}
printf("\n%d alumnos tiene una nota mayor a  ocho",my8);
return 0;
}
