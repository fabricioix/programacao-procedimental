#include <stdio.h>

int main()
{
    float l, k;
    
    printf("Apresente a massa em quilogramas: ");
    scanf("%f",&k);
    
    l = k/0.45;
	
    printf("\nA masssa apresentada em libras é %0f\n", l);
    
    return 0;
}