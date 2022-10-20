#include <stdio.h>

int main()
{
     float s, a; 
    
    printf("Digite o valor do salario inicial:\n");
    scanf("%f",&s);

    a = s+(s*0.25); 
    
    printf("\nO valor do novo salario apos o aumento é %0f\n", a);
    
    return 0;
}