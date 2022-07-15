// Refa ̧ca o programa da Quest ̃ao 1, utilizando a estrutura de repeti ̧c ̃ao com teste no final.

#include <stdio.h>

int main(void) {
  int num;
    do{
      printf("Digite um numero entre 1 e 7 ou digite 0 para finalizar.\n");
      scanf("%d", &num);
      if(num==1){
        printf("Domingo.\n");
      }
      else if(num==2){
        printf("Segunda.\n");
      }
      else if(num==3){
        printf("Terça.\n");
      }
      else if(num==4){
        printf("Quarta\n");
      }
      else if(num==5){
        printf("Quinta\n");
      }
      else if(num==6){
        printf("Sexta\n");
      }
      else if(num==7){
        printf("Sabado\n");
      }
      else{
        printf("Número invalido\n");
      }    
    }while(num!=0);
    if(num==0){
      printf("Fim.\n");
    }
}

