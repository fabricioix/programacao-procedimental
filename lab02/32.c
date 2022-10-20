#include <stdio.h>

int main() {
  int n, antecessor, sucessor, soma;

  printf("Insira um numero inteiro: ");
  scanf("%d", &n);

  antecessor = 2*(n - 1);
  sucessor = 3*(n + 1);
  
  soma = antecessor + sucessor;

  printf("\n");
  printf("o dobro do antecessor é %d \n", antecessor);
  printf("o triplo do sucessor é %d\n", sucessor);
  
  printf("a soma do dobro com o triplo é %d\n", soma);
  
  return(0);
}