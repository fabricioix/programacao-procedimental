#include <stdio.h>

int main()
{
    float f, c;
    
    printf("Apresente a temperatura em Celsius: ");
    scanf("%f",&c);
    
    f = c*(9.0/5.0)+32.0;
	
    printf("\nA temperatura apresentada em Fahrenheit é %0f\n", f);
    
    return 0;
}