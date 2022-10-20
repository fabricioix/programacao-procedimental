#include <stdio.h>

int main()
{
    float m, j;
    
    printf("Apresente o comprimento em jardas: ");
    scanf("%f",&j);
    
    m = 0.91*j;
	
    printf("\nO comprimento apresentado em metros é %0f\n", m);
    
    return 0;
}