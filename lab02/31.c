#include <stdio.h>

int main() {
  int n, antecessor, sucessor;

  printf("Insira um numero inteiro: ");
  scanf("%d", &n);

  antecessor = n - 1;
  sucessor = n + 1;
  
  printf("\n");
  printf("o numero antecessor é %d \n", antecessor);
  printf("o numero sucessor é %d\n", sucessor);
  
  return(0);
}