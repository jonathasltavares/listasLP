#include <stdio.h>
#include<stdlib.h>
#define tam 50

int main(){
  char str1[tam], str2[tam], *pStr1=NULL, *pStr2=NULL;
  pStr1 = str1;
  pStr2 = str2;
  printf("Digite a primeira string\n");
  scanf("%s", str1);
  getchar();
  printf("Digite a segunda string\n");
  scanf("%s", str2);
  getchar();
  while(*pStr1!='\0'){
    pStr1++;
  }
  while(*pStr2!='\0'){
    *pStr1=*pStr2;
    pStr1++;
    pStr2++;
  }
  printf("A string é %s.\n", str1);
  return 0;
}
    