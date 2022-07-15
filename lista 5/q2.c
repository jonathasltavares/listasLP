#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int vetor[atoi(argv[1])], *p=NULL, aux=0;
  p=vetor;
  srand(time(NULL));
  for(int i=0;i<atoi(argv[1]);i++) vetor[i]=rand()%10;  
  
  for(int i=0; i<atoi(argv[1]); i++) printf("%d ", vetor[i]);
  printf("\n");
  for(int i=1;i<atoi(argv[1]);i++){
    if(*(p+aux)>*(p+i)) aux=i;
  }
  printf("O menor é %d [%p].\n", *(p+aux), p+aux);
  return 0;
}