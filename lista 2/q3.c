
#include <stdio.h>

int main(void) {
  int n, fatorial;
  printf("Informe um numero inteiro positivo.\n");
  scanf("%d", &n);
  
  fatorial=1;
  
  while(n>0){
    fatorial=fatorial*n;
    n--;
  }
  
  printf("O fatorial é: %d.\n", fatorial);
}

