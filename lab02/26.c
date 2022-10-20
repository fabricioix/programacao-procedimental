#include <stdio.h>

int main()
{
    float h, m;
    
    printf("Apresente a area em metros quadrados: ");
    scanf("%f",&m);
    
    h = m*0.0001;
	
    printf("\nA area apresentada em hectares é %0f\n", h);
    
    return 0;
}