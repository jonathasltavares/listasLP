

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