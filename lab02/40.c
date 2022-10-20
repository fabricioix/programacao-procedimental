#include <stdio.h>

int main()
{
     int d, vl, vt;
    
    printf("Digite o numero de dias trabalhados pelo encanador:\n");
    scanf("%d",&d);

    vl = (d*30); 
    
    vt= vl-(vl*0.08);

    printf("\nO valor a ser pago é %d\n", vt);
    
    return 0;
}