#include <stdio.h>

int main(void) {
  int jose= 150, pedro=110, anos=1;
  
  while(jose!=pedro){
    jose=jose+2;
    pedro=pedro+3;
    anos++;
  }
  printf("Em %d anos José e Pedro terão a mesma altura.\n", anos);
  return 0;
}