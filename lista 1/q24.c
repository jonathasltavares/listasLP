// Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
// Obs.: Utilize operadores bin ́arios.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, n, prod;
  printf("informe o valor de x: ");
  scanf("%d", &x);
  printf("informe o valor de n: ");
  scanf("%d", &n);
    
  prod = x*(2<<(n-1));
  printf("o produto é igual a: %d", prod);
  return 0;
    
}