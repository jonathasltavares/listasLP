#include <stdio.h>
#include<stdlib.h>

int main(){
  int soma, num1, num2;
  int* p1 = NULL;
  int* p2 = NULL;

  printf("Informe o primeiro valor");
  scanf("%d",&num1);
  printf("Informe o segundo valor");
  scanf("%d",&num2);
  p1 = &num1;
  p2 = &num2;
  
  soma = *p1 + *p2;

  printf("Valor da soma: %d\n", soma);
  printf("Endereço da memoria: %p", &soma);
}
    