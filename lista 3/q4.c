#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
  char str1[TAM], str2[TAM];
  int resultado, aux = 0;

  printf("Digite uma palavra: ");
  scanf("%s", str1);
  printf("Digite outra palavra: ");
  scanf("%s", str2);

  resultado = strcmp(str1, str2);

  if(resultado == 0){
      printf("As palavras sao iguais\n");
  }else{
      printf("As palavras nao sao iguais\n");
}
    