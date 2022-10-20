#include <stdio.h>

int main()
{
    float c, p;
    
    printf("Apresente o comprimento em polegadas: ");
    scanf("%f",&p);
    
     c = p*2.54;
	
    printf("\nO comprimento em centimetros é %0f\n", c);
    
    return 0;
}