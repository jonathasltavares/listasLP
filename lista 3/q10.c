#include <stdio.h>
#include<stdlib.h>
#define tam 5
int main(){
  int m [tam][tam];
  int n, cont=0;
  for(int i=0; i<tam; i++){
    printf("[");
    for(int j=0; j<tam; j++){
      m[i][j]=rand()%100;
      printf("%d ", m[i][j]);
    }
    printf("]\n");
  }
  printf("Digite um número\n");
  scanf("%d", &n);
  for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
      if(n==m[i][j]) cont++;
    }
  }
  printf("O número digitado aparece %d vezes.\n", cont);
  return 0;
}
    