#include <stdio.h>

int main(void) {
  for(double i = 0; i <= 7; i++){
      printf("3 ** %0.lf = %0.lf\n", i, pow(3, i));
  }
  return 0;
}