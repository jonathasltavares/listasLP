#include <stdio.h>
#define TAM 15

int main(){
  int caracNaStr = 0;
  char caractere, string[TAM];

  printf("Caractere: ");
  scanf("%c", &caractere);
  printf("String: ");
  scanf("%s", string);

  for(int i = 0; i < TAM; i++){
      if(string[i] == caractere){
           caracNaStr += 1;
      }
  }
  if(caracNaStr > 0){
      printf( "%s tem o caracter %c", string, caractere);
  }else{
      printf( "%s não tem o caracter %c", string, caractere);
  }
}