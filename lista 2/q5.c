#include <stdio.h>

int main(void) {
  int menor = 0, maior = 0, n;
  do{
    printf("Digite um número ou digite zero para finalizar.\n");
    scanf("%d", &n);
    if(n>maior){
      maior = n;
    }
    else if(n<menor && n!=0){
      menor = n;
    }  
  }
  while(n!=0);
  printf("O maior valor foi: %d.\n", maior);
  printf("O menor valor foi: %d.\n", menor);

  return 0;
}