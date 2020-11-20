#include <stdio.h>
#include <stdlib.h>
int main(){
    int y,mas=0,menos=0,sueldo[20];
    for (y=0;y<20;y++){
  printf("Ingrese el sueldo ");
  scanf("%d",&sueldo[y]);  
  if(sueldo[y]>2000){
    mas++;
    }else{menos++; }
     }
  printf(" %d ganan mas de 2000\n ",mas);
  printf("\n %d ganan menos de 2000\m",menos);
  return 0;
} 	
