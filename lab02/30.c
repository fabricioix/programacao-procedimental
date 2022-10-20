#include <stdio.h>

int main()
{
     float real, dolar, calculo;
    
    printf("Digite o valor em real:\n");
    scanf("%f",&real);
    
    printf("\nDigite a cotacao atual do dolar: ");
    scanf("%f",&dolar);

    calculo = real/dolar; 
    
    printf("\nO valor em dolares é %0f\n", calculo);
    
    return 0;
}