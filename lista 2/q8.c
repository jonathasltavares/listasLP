#include <stdio.h>

int main(void) {
  int parcelas;
  float valor, entrada;
  
  printf("Digite o valor da mercadoria.\n");
  scanf("%f", &valor);
  
  parcelas=valor/3;
  entrada=valor-(parcelas*2);
  
  printf("R$:%.2f de entrada e prestações de: R$:%d.00\n", entrada, parcelas);
  return 0;
}