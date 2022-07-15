#include <stdio.h>

int main(void) {
  int quadrad=0, mult=0;
  for(int i=1; mult<91; i++){
    mult=4*i;
    quadrad=mult*mult;
    
    if(mult>=15 && mult<=90){
      printf("%d.\n", quadrad);
    }
    
  }
  return 0;
}