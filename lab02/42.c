#include <stdio.h>
#include <stdlib.h>

int main() {
    float s, i, g, st;

    printf("Insira o salario: ");
    scanf("%f", &s);

    g = s*0.05;

    i = s*0.07;

    st = s + g - i;

    printf("\nO salario a ser recebido é: %0f", st);

    printf("\n\n");

    return 0;
}