// Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
// d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
// entrada de 123, a resposta do programa seria 321.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, c, d, u;
  printf("Digite um num com centena, dezena e unidade: ");
  scanf("%d", &num);

  c = num / 100;
  num -= c * 100;
  d = num / 10;
  num -= d * 10;
  u = num;

  printf("O numero escrito ao contrario fica %d%d%d\n", u ,d, c);

    
}