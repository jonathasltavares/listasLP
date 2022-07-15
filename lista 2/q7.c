#include <stdio.h>

int main(void) {
  float num1, num2, c;
  printf("Digite o primeiro valor.\n");
  scanf("%f", &num1);
  
  printf("Digite o segundo valor.\n");
  scanf("%f", &num2);
  while(num2==0){
    printf("Divisor invalido, digite outro valor.\n");
    scanf("%f", &num2);
  }
  printf("%.2f dividido por %.2f =  é: %.2f\n", num1 , num2, num1/num2);
  return 0;
}