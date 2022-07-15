// Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
// e sua  ́area. Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
// instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.

#include <stdio.h>
#include <stdlib.h>

int main(){
  float r, pi = 3.14159;

  printf("Informe o raio: ");
    scanf("%f", &r);

  printf("diametro: %0.2f\ncomprimento: %0.2f\narea: %0.2f\n", r*2, 2*pi*r, pi*(r*r));
    return 0;
}