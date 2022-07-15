#include <stdio.h>

int main(void) {
  int num, cont=0;
  printf("Informe um numero\n");
  scanf("%d", &num);
  do{
    if(num%10==7){
      cont++;
    }
    num=num/10;
  }while(num>1);
  printf("Possui %d algarismo 7.\n", cont);
  return 0;
}