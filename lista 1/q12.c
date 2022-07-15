// Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
// a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.

#include <stdio.h>

int main(){
  int a, b;

  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("Digite outro numero: ");
  scanf("%d", &b);

  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d - %d: %d\n", a, b, a - b);
  printf("%d / %d = %0.2f\n", a, b, ((float)a) / ((float) b));
  printf("o resto de %d/%d =  %d\n", a, b, a % b);
}