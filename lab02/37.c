#include <stdio.h>

int main()
{
     float p, d; 
    
    printf("Digite o valor do produto:\n");
    scanf("%f",&p);

    d = p-(p*0.12); 
    
    printf("\nO valor do produto com desconto é %0f\n", d);
    
    return 0;
}