// Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
// pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float d;
  int aX, aY, bX, bY;
  printf("Informe a coordenada aX\n");
  scanf("%d", &aX);
  
  printf("Informe a coordenada aY\n");
  scanf("%d", &aY);
  
  printf("Informe a coordenada bX\n");
  scanf("%d", &bX);
  
  printf("Informe a coordenada bY\n");
  scanf("%d", &bY);
  
  d= sqrt((bX-aX)*(bX-aX)+(bY-aY)*(bY-aY));
  
  printf("A distancia entre a e b é: %.2f\n", d);
  return 0;
    
}