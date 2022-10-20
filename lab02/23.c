#include <stdio.h>

int main()
{
    float m, j;
    
    printf("Apresente o comprimento em metros: ");
    scanf("%f",&m);
    
    j = m/0.91;
	
    printf("\nO comprimento apresentado em jardas é %0f\n", j);
    
    return 0;
}