#include <stdio.h>

int main()
{
    float f, c;
    
    printf("Apresente a temperatura em Fahrenheit: ");
    scanf("%f",&f);
    
    c = 5.0*(f- 32.0)/9.0;
	
    printf("\nA temperatura apresentada em Celsius é %0f\n", c);
    
    return 0;
}