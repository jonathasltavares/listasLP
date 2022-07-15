#include <stdio.h>
#include<stdlib.h>
#include <time.h>


void gerarVetor(float*, int);
void soma(float*, int);

int main (int argc, char *argv[]) {
	int tam;
	float *pV = NULL;

	tam = atoi(*(argv + 1));
	pV
  = malloc(tam * sizeof(float));
	
    if (!pV
    ) {
		puts("Infelizmente não foi possível alocar a memória.");
		exit(1);
	}

    gerarVetor(pV, tam);
    soma(pV, tam);

	return (0);
}


void gerarVetor(float *pV, int tam){
	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(pV
    + k) = (rand() % 100) + (float)(rand() % 100)/100;
	}

}

void soma(float *pV, int tam){
    float soma;
    for(int i = 0; i < tam; i++){

        soma += *(pV
        + i);
    }
    printf("O valor da soma de todos elemento do vetor:\n%.2f", soma);
}
