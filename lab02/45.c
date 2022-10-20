#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    char letra;
    
    printf("Digite uma letra minuscula: ");
    
    scanf("%c", &letra);
    
    letra = toupper(letra);
    
    printf("\nLetra em maiusculo: %c " , letra);
    
    return 0;
}