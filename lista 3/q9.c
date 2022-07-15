#include <stdio.h>
#include<stdlib.h>
#define tam 3
int main(){
  int m [tam][tam];

  for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
      printf("Digite um número.\n");
      scanf("%d", &m[i][j]);
    }
  }
  printf("Diagonal principal:\n");
  for(int i=0;i<tam;i++) printf("%d ", m[i][i]);
  return 0;
}
    