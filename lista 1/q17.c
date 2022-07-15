// Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
// N ̃ao utilize estrutura de decis ̃ao if.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num;

  printf("Informe um valor inteiro: \n");
  scanf("%d",&num);

  printf("O modulo de %d é %d\n", num, abs(num));

}