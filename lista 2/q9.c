#include <stdio.h>

int main(void) {
  int a=1, b=1, fibonacci;
  printf("%d, ", a);
  printf("%d, ", b);
  
  for(int i=0; i<18; i++){
    fibonacci=a+b;
    printf("%d, ", fibonacci);
    a=b;
    b=fibonacci;
  }
  printf("\n");
  return 0;
}