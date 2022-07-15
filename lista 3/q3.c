#include <stdio.h>
#define TAM 15

int main(){
  int quant = 0;
  char string[TAM];

  printf("Informe uma palavra: ");
  scanf("%s", string);

  for(int i = 0; string[i] != '\0'; i++){
      quant++;
  }

  printf("A string tem %d caracteres", quant);
}