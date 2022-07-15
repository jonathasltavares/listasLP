
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