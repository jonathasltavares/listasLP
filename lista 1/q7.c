// Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Informe o total de horas: \n");
    scanf("%d", &horas);
  
    printf("Informe o total de minutos: \n");
    scanf("%d", &minutos);
  
    printf("Informe o total de segundos: \n");
    scanf("%d", &segundos);

    segundos += (horas * 3600) + (minutos * 60);

    printf("Em segundos: %ds\n", segundos);

    return 0;
}