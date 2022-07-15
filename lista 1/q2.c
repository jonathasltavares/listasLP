// Fa ̧ca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
// hexadecimal e octal.

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num;
  
  printf("informe um numero decimal: ");
  scanf("%d", &num);

  printf("%d em hexa: %x\n", num, num);
  printf("%d em octa: %o\n", num, num);
  
}