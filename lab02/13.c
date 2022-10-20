#include <stdio.h>

int main()
{
    float k, m;
    
    printf("Apresente a velocidade quilômetros: ");
    scanf("%f",&k);
    
       m = k/1.61;
	
    printf("\nA velocidade apresentada em milhas é %0f\n", m);
    
    return 0;
}