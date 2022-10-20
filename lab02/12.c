#include <stdio.h>

int main()
{
    float k, m;
    
    printf("Apresente a velocidade milhas: ");
    scanf("%f",&m);
    
       k = 1.61*m;
	
    printf("\nA velocidade apresentada em quilometros é %0f\n", k);
    
    return 0;
}