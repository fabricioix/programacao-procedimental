#include <stdio.h>
#include <stdlib.h>

int main() {
    float vlrtot;

    printf("Qual o valor total? ");
    scanf("%f", &vlrtot);

    float des10, vlrapagar;
    
    des10 = vlrtot * 0.10;
    
    vlrapagar = vlrtot - des10;
    
    printf("\nTotal a pagar com desconto de 10 porcento: R$%.2f" , vlrapagar);
    
    float parc3;
    
    parc3= vlrtot / 3;
    
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parc3);
   
    float comissao;
    
    comissao= vlrapagar * 0.05;
    
    printf("\nComissao venda a vista: R$%.2f", comissao);
    
    float comissao2;
    
    comissao2= vlrtot * 0.05;
    
    printf("\nComissao venda parcelada: R$%.2f", comissao2);
    
    return 0;
}