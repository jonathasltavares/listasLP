// Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
// sucessor e antecessor.

#include <stdio.h>

int main(){
  int num;
  printf("informe um valor:\n");
  scanf("%d", &num);
  printf("O antecessor de %d é %d\n", num, num-1);
  printf("O sucessor de %d é %d\n", num, num+1);
  return 0;
}