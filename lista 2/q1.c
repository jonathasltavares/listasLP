// Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
// da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
// sexta, s ́abado). Se o n ́umero lido n ̃ao estiver no intervalo 1-7, imprima: “N ́umero de dia n ̃ao v ́alido”. O
// programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
// teste no in ́ıcio).

#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um numero entre 1 e 7 ou digite 0 para finalizar.\n");
  scanf("%d", &num);
  if(num==0){
      printf("Finalizado.\n");
    }
  while(num!=0){
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

    printf("Digite um numero de 1 a 7 ou digite 0 para finalizar.\n");
    scanf("%d", &num);
    
  }
  if(num==0){
    printf("Fim.\n");
  }
  return 0;
}