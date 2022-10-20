#include <stdio.h>

int main()
{
    float k, c;
    
    printf("Apresente a temperatura em Celsius: ");
    scanf("%f",&c);
    
     k = c + 273.15;
	
    printf("\nA temperatura apresentada em Kelvin é %0f\n", k);
    
    return 0;
}