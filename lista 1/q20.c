// Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
// Obs.: N ̃ao utilizar estrutura de decis ̃ao if.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num;
  printf("INforme um numero inteiro:");
  scanf("%d",&num);

  switch(num%2){

    case(0):
      printf("%d é par\n", num);
      break;
    default:
       printf("%d é impar\n", num);
      break;
    }
}