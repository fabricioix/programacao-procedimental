#include <stdio.h>

int main()
{
    float r, g;
    
    printf("Apresente o ângulo em radianos: ");
    scanf("%f",&r);
    
    g = r*180/3.141592;
	
    printf("\nO angulo em graus é %0f\n", g);
    
    return 0;
}