#include <stdio.h>

int main(void) {
  int limiteA, limiteB, aux, soma=0;
  printf("Começando de:\n");
  scanf("%d", &limiteA);
  printf("Terminando em:\n");
  scanf("%d", &limiteB);
  
  if(limiteA>limiteB){
    aux=limiteA;
    limiteA=limiteB;
    limiteB=aux;
  }
  
  while(limiteA<=limiteB){
    if(limiteA%2==0){
      soma=soma+limiteA;
    }
    limiteA++;
  }
  
  printf("O somatorio dos números pares no intervalo fornecido %d\n", soma);
  return 0;
}