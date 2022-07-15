#include<stdio.h>
#include<stdlib.h>

int main(){
  //declarações
  int numero, menorNum, *p = NULL, *p2 = NULL;

  //atribuindo variaveis aos ponteiros
  p = &numero;
  p2 = &menorNum;

  do{
  printf("Insira um valor:\n");
  scanf("%d",&*p);

    if(!*p2){
      *p2 = *p;
    }
    if(*p<*p2){
      *p2 = *p;
    }
    printf("Menor numero digitado foi: %d\n",*p2);
    continue;
  }while(*p>=0);
  
}