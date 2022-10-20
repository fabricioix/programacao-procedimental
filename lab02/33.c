#include <stdio.h>

int main()
{
     float l, a; 
    
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f",&l);

    a = l*l; 
    
    printf("\nO valor da area do quadrado é %0f\n", a);
    
    return 0;
}