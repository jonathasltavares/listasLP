

#include <stdio.h>

int main(){
  float celsius, fahrenheit;

  printf("Informe uma temperatura em celsius: ");
  scanf("%f", &celsius);
  
  fahrenheit = (9 * celsius + 160) / 5;
  
  printf("%0.2fcelsius é igual %0.2f fahrenheit\n",celsius, fahrenheit);
  
  
}