// Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
// vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores
// ap ́os a efetiva ̧c ̃ao do processamento da troca.

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