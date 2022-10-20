#include <stdio.h>

int main()
{
     float a,b,c,d, media;
    
    printf("Digite quatro valores:\n");
    scanf("%f %f %f %f",&a, &b, &c, &d);
    
    media = (a+b+c+d)/4; 
    
    printf("\nA media aritmetica dos quatro valores apresentados é %0f\n", media);
    
    return 0;
}