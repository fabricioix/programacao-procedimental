#include <stdio.h>

int main()
{
    float a, m;
    
    printf("Apresente a area em acres: ");
    scanf("%f",&a);
    
    m = a*4048.58;
	
    printf("\nA area apresentada em metros quadrados é %0f\n", m);
    
    return 0;
}