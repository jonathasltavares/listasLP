// Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
//quadrado.

#include <stdio.h>

int main(){
  int num;
  printf("informe um nuemro:\n");
  scanf("%d", &num);

  printf("O quadrado de %d é igual a %d\n", num, num*num);     return 0;
}