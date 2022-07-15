#include <stdio.h>
#define TAM 15

int main(){
    float vetor[TAM], menor, maior;

    for(int i = 0; i < TAM; i++){
        printf("Informe o %d elemento: ", i + 1);
        scanf("%f", &vetor[i]);
        if(i == 0){
            menor = vetor[i];
            maior = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("A soma de %0.2f e %0.2f é %0.2f\n", maior, menor, maior+menor);
}