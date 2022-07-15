#include <stdio.h>
#include<stdlib.h>
#define tam 50

int main(){
  int cont = 0;
  char c[tam], *pChar=NULL;
  pChar = c;
  printf("Digite uma string\n");
  scanf("%s", c);
  while(*pChar!='\0'){
    cont++;
    pChar++;
  }
  printf("A string possui %d caracteres.\n", cont);
  return 0;
}
    