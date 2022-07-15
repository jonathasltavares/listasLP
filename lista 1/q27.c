
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