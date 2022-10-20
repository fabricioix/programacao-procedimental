#include <stdio.h>

int main()
{
     float a,b,c, soma;
    
    printf("Digite tres valores:\n");
    scanf("%f %f %f",&a, &b, &c);
    
    soma = (a*a)+(b*b)+(c*c); 
    
    printf("\nA soma dos quadrados dos tres valores apresentados é %0f\n", soma);
    
    return 0;
}