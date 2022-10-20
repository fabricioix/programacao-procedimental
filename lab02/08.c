#include <stdio.h>

int main()
{
    float k, c;
    
    printf("Apresente a temperatura em Kelvin: ");
    scanf("%f",&k);
    
    c = k-273.15;
	
    printf("\nA temperatura apresentada em Celsius é %0f\n", c);
    
    return 0;
}