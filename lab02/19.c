#include <stdio.h>

int main()
{
    float l, m;
    
    printf("Apresente o volume em litros: ");
    scanf("%f",&l);
    
     m = l /1000;
	
    printf("\nO volume em metros cubicos é %0f\n", m);
    
    return 0;
}