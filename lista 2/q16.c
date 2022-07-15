#include <stdio.h>

int main(void) {
  int s3=0, s5=0;
  for(int i=0;i<=200;i++){
    if(i<=100){
      if(i%3==0){
        s3=s3+i;
      }
    }
    else{
      if(i%5==0){
        s5=s5+i;
      }
    }
  }
  printf("Somatorio do número divisiveis por 3 de 0-100 é: %d\n", s3);
  printf("Somatorio do número divisiveis por 5 de 101-200 é: %d\n", s5);
  return 0;;
}