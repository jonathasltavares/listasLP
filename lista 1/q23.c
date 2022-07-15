
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