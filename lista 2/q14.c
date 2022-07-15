#include <stdio.h>

int main(void) {
  int limiteA, limiteB, aux, cont=0;
  printf("Começando de:\n");
  scanf("%d", &limiteA);
  printf("Terminando em:\n");
  scanf("%d", &limiteB);
  if(limiteA>limiteB){
    aux=limiteA;
    limiteA=limiteB;
    aux=limiteA;
  }
  while(limiteA<=limiteB){
    if(limiteA%3==0){
      cont++;
    }
    limiteA++;
  }
  printf("Possui %d números divisiveis por 3 no intervalo informado.\n", cont);
  return 0;
}