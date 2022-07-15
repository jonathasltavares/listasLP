
#include <stdio.h>
#include <stdlib.h>

int main(){
  int num1, num2;
  printf("INforme o primero numero inteiro:");
  scanf("%d",&num1);
   printf("INforme o segundo numero inteiro:");
  scanf("%d",&num2);

  switch(num1%num2){

    case(0):
      printf(" é multiplo\n");
      break;
    default:
       printf("não é multiplo\n");
      break;
    }
}