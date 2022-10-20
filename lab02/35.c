#include <stdio.h>
#include <math.h>

int main()
{
     float a, b, h; 
    
    printf("Digite o valor do primeiro cateto do triangulo:\n");
    scanf("%f",&b);

    printf("Digite o valor do segundo cateto do triangulo:\n");
    scanf("%f",&a);

    h = sqrt(a*a + b*b); 
    
    printf("\nO valor da hipotenusa do triangulo é %0f\n", h);
    
    return 0;
}