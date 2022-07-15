// Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
// programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
// deseja converter.

#include <stdio.h>

int main(){
  float real, dolar, cotaDolar;

  printf("Informe a cotação do dolar:\n");
  scanf("%f", &cotaDolar);
  printf("Informe o valor em reais: R$");
  scanf("%f", &real);

  dolar = real/cotaDolar;

  printf("R$%0.2f em dolares são $%0.2f.\n", real, dolar);
  return 0;
}