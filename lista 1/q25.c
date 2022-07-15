// Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
// h ́a neste tempo.

#include <stdio.h>
#include <stdlib.h>

int main(){
   int tempo, segundos, minutos, horas;

  puts("Informe um tempo em segundos:");
  scanf("%d", &tempo);

  horas = tempo/3600;
  minutos = (tempo - (3600 * horas))/60;
  segundos = (tempo - (3600 * horas)) - (60 * minutos);

  printf("%d segundos equivale a: %d hora(s)\n%d minutos\n%d segundos\n", tempo, horas, minutos, segundos);
  
  return (0);
    
}