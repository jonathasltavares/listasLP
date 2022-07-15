
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