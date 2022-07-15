
#include <stdio.h>

int main(){
  int a, b, aux;

  printf("Digite um numero a: ");
  scanf("%d", &a);
  printf("Digite outro numero b: ");
  scanf("%d", &b);
  printf("ANTES: a = %d e b=%d\n",a, b);
  aux = a;
  a = b;
  b = a;
  printf("DEPOIS: a = %d e b=%d\n",a, b);
  
  
}