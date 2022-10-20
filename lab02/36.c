#include <stdio.h>

int main()
{
     float h, r, v; 
    
    printf("Digite o valor da altura:\n");
    scanf("%f",&h);

    printf("Digite o valor do raio:\n");
    scanf("%f",&r);

    v = 3.141592*(r*r*h); 
    
    printf("\nO volume do cilindro é %0f\n", v);
    
    return 0;
}