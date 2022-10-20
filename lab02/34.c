#include <stdio.h>

int main()
{
     float r, a; 
    
    printf("Digite o valor do raio do circulo:\n");
    scanf("%f",&r);

    a = 3.141592*(r*r); 
    
    printf("\nO valor da area do circulo é %0f\n", a);
    
    return 0;
}