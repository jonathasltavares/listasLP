#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>

int main(){
  int vet[3];
  float mAritm=0, mGeom=1;
  for(int i=0; i<3; i++) vet[i]=rand()%20;
  for(int i=0; i<3; i++){
    mAritm=mAritm+vet[i];
    mGeom=mGeom*vet[i];
  }
  mAritm = ((float) mAritm/3.0);
  mGeom = ((float) pow(mGeom,1.0/3.0));
  for(int i=0; i<3; i++) printf("%d ", vet[i]);
  printf("\n");
  printf("Media Aritimética = %.2f\n", mAritm);
  printf("Media Geomética = %.2f\n", mGeom);

}
    