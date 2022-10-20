#include <stdio.h>

int main()
{
    float a, m;
    
    printf("Apresente a area em metros quadrados: ");
    scanf("%f",&m);
    
    a = m*0.000247;
	
    printf("\nA area apresentada em acres é %0f\n", a);
    
    return 0;
}