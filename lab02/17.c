#include <stdio.h>

int main()
{
    float c, p;
    
    printf("Apresente o comprimento em centimetros: ");
    scanf("%f",&c);
    
     p = c*2.54;
	
    printf("\nO comprimento em polegadas é %0f\n", p);
    
    return 0;
}