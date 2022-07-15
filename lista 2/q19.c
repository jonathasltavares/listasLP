#include <stdio.h>
#include<math.h>

int main(void) {
    int limiteA, limiteB; 
    float media, tot, soma = 0;
    printf("Começando de: ");
    scanf("%d", &limiteA);
    printf("Terminando em: ");
    scanf("%d", &limiteB);

    for(limiteA; limiteA <= limiteB; limiteA++){
        soma += limiteA;
        tot += 1;
    }
    media = soma / tot;
    printf("A media dos numeros e %0.2f", media);
}