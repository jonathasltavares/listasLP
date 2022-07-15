#include <stdio.h>
#include<math.h>

int main(void) {
    float soma = 0;
    for(int i = 1; i <= 64; i++){
        soma += pow(2, i - 1);  
    }
    printf("O somatorio dos graos de trigo foi de %0.f", soma);
}