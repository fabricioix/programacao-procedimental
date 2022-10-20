#include <stdio.h>
#include <stdlib.h>

int main() 
{
   
   int horas, minutos, segundos;
   
   printf("Digite os segundos: ");
   
   scanf("%d" , &segundos);
   
   horas = segundos / 3600;
   
   minutos = (segundos -(horas*3600))/60;
   
   segundos = segundos - (horas*3600)-(minutos*60);
   
   printf("%dh: %dm: %ds: ", horas, minutos, segundos);
   
   return 0;
}