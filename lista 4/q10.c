#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define TAM 15

int main(void) {
  int vet[TAM], vetorF[TAM], cont;
  
  for(int i=0;i<TAM;i++){
    vet[i]=rand()%10;
  }
  
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]); 
  
  for(int i=0;i<TAM;i++){
    cont=0;
    for(int j=0;j<TAM;j++){
      if(vet[j]==i) cont++;
    }
    vetorF[i]=cont;
  }
  
  puts("\n");
  for(int i=0; i<TAM; i++) printf("%d ", vetorF[i]);
  return 0;
  }