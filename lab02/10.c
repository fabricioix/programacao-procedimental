#include <stdio.h>

int main()
{
    float k, m;
    
    printf("Apresente a velocidade em km/h: ");
    scanf("%f",&k);
    
     m = k/3.6; 
	
    printf("\nA velocidade apresentada em m/s é %0f\n", m);
    
    return 0;
}