// Fa ̧ca um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float num;
  
  printf("informe um numero real: ");
  scanf("%f", &num);

  printf("%0.1f\n", num);
  
}