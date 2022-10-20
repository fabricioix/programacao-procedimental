#include <stdio.h>

int main()
{
    float h, m;
    
    printf("Apresente a area em hectares: ");
    scanf("%f",&h);
    
    m = h*10000;
	
    printf("\nA area apresentada em metros quadrados é %0f\n", m);
    
    return 0;
}