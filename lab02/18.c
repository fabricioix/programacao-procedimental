#include <stdio.h>

int main()
{
    float l, m;
    
    printf("Apresente o volume em metros cubicos: ");
    scanf("%f",&m);
    
    l = 1000*m;
	
    printf("\nO volume em litros é %0f\n", l);
    
    return 0;
}