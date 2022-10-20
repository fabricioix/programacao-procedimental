#include <stdio.h>

int main()
{
    float n;
    
    printf("Digite um número real:\n");
    scanf("%f",&n);
    
    n = n * 0.2;
	
    printf("\n%0f\n", n);
    
    return 0;
}