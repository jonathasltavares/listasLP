
#include <stdio.h>
#include <stdlib.h>

int main(){
  float r, pi = 3.14159;

  printf("Informe o raio: ");
    scanf("%f", &r);

  printf("diametro: %0.2f\ncomprimento: %0.2f\narea: %0.2f\n", r*2, 2*pi*r, pi*(r*r));
    return 0;
}