
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