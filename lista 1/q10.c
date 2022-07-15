// Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
// f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(){
  float largura, altura, comprimento;
  float volume;
  
  printf("Informe a largura em centimetros: ");
  scanf("%f", &largura);

  printf("Informe a altura em centimetros: ");
  scanf("%f", &altura);

  printf("Comprimento em centimetros: ");
  scanf("%f", &comprimento);

  volume = comprimento*largura*altura;

  printf("O volume do retangulo é igual a: %0.2fM: \n", volume/100);
  
  return 0;
}