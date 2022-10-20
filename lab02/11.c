#include <stdio.h>

int main()
{
    float k, m;
    
    printf("Apresente a velocidade em m/s: ");
    scanf("%f",&m);
    
      k = m*3.6;
	
    printf("\nA velocidade apresentada em km/h é %0f\n", k);
    
    return 0;
}