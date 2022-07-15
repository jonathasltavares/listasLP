// Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
// geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a, b, c, mAritm, mGeom;
  printf("Digite o primerio numero real\n");
  scanf("%f", &a);
  
  printf("Digite o segundo numero real\n");
  scanf("%f", &b);
  
  printf("Digite o terceiro numero real\n");
  scanf("%f", &c);
  
  mAritm= (a+b+c)/3;
  mGeom= pow(a*b*c,1.0/3.0);
  
  printf("Media aritimética = %.2f\n", mAritm);
  printf("Media geomética = %.2f\n", mGeom);
  return 0;
}