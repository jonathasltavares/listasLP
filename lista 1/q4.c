// Sabendo que os argumentos da fun ̧c ̃ao ”printf”podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
// argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
// seu meio.

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int num;
  
  printf("informe um numero inteiro: ");
  scanf("%d", &num);

  printf("triplo: %d\n", num*3);
  printf("quadrado: %d\n", num*num);
  printf("meio: %d\n", num/2);
}