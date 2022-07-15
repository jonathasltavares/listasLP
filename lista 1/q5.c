

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
