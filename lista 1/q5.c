// Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
// pago, considerando que o restaurante cobra 10% de taxa para o gar com.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float subtotal, total;
  
  printf("Insira o valor total da conta: R$");
  scanf("%f",&subtotal);


  total = subtotal+(subtotal*0.1);
  
  printf("O total a ser pago é: R$%0.2f\n", total);
 
  return 0;
}
