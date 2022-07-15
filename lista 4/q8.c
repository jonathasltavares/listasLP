#include <stdio.h>
#include<stdlib.h>
#define tam 50

int main(){
  int cont = 0;
  char str[tam], c, *pStr=NULL;
  pStr = str;
  printf("Digite uma string\n");
  scanf("%s", str);
  getchar();
  printf("Digite um caractere\n");
  c = getchar();
  getchar();  
  while(*pStr!='\0'){
    if(c==*pStr) cont++;
    pStr++;
  }
  printf("O char aparece %d vezes.\n", cont);
  return 0;
}
    