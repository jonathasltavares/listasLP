#include <stdio.h>

int main(void) {
  int numero, vetorNum[5], aux = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    vetorNum[0] = numero / 10000;
    vetorNum[1] = (numero % 10000) / 1000;
    vetorNum[2] = (numero % 1000) / 100;
    vetorNum[3] = (numero % 100) / 10;
    vetorNum[4] = numero % 10;

    for(int i = 0; i <= 4; i++){
        if(vetorNum[i] == vetorNum[4 - i]){
            aux++;
        }
    }
    
    if(aux == 5){
        printf("É palidromo");
    }else{
        printf("Não é palindromo");
    }
}