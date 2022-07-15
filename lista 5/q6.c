#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define tam 10
#define range 100

void mediana(int v[]);
void media(int v[]);
void moda(int v[]);

int main(int argc, char *argv[]){
  int vetor[tam];
  int random;
   srand (time(NULL));

  
  for(int i = 0; i<tam; i++){
    random = rand() % range;
    vetor[i] = random;
  }
  mediana(vetor);
  moda(vetor);
  media(vetor);
  
}
void mediana(int v[]){
	int T = 10;
	int mediana;
	mediana = v[T/2-1];
	printf("Mediana: %i", mediana);
}
void media(int v[]){
	int T = 10;
	int soma=0;
	int media=0;
	int i;
	
    for(i=0;i<T;++i){
    	soma = soma + v[i];
	}
	media = soma/T;
	printf("Media: %.2f", media);
}
void moda(int v[]){
	int T = 10;
	int i, j, cont[T];
	int conta, moda;
	
	for(i=0;i<T;i++){
        for(j=i+1;j<T;j++){
        	
			if(v[i]==v[j]){
				cont[i]++;
					if(cont[i]>conta){
						conta=cont[i];
						moda=v[i];
					}
			}
        }
        cont[i]=0;
    }
    if(conta == 0){
    	printf("Nao existe moda\n");
	}
	else{
		printf("Moda: %.2f\n", moda);
	}
}
