// Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
// Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
// temperatura em Celsius.

#include <stdio.h>

int main(){
  float celsius, fahrenheit;

  printf("Informe uma temperatura em celsius: ");
  scanf("%f", &celsius);
  
  fahrenheit = (9 * celsius + 160) / 5;
  
  printf("%0.2fcelsius é igual %0.2f fahrenheit\n",celsius, fahrenheit);
  
  
}