#include <stdio.h>

int main(void) {
int paulo = 0, renata = 0, voto = 0, nulo = 0, branco = 0, total = 0;
    float porcentPaulo, porcentRenata, porcentNulo, porcentBranco;
    int confir;

    while (1){
        puts("5 - Paulo\n");
        puts("7 - Renata\n");
        puts("0 - Branco\n");
        puts("Vote:");
        scanf("%d", &voto);

        if(voto < 0){
            break;
        }

        printf("Confirma?\n1 - sim\n2 - não\n");
        scanf("%d", &confir);
        
        if (confir == 1){
            total += 1;
            switch (voto){
            case (5):
                paulo += 1;
                break;
            case (7):
                renata += 1;
                break;
            case (0):
                branco += 1;
                break;
            default:
                nulo += 1;
                break;
            }
        }else if(confir == 'n'){
            continue;
        }
    }

    porcentPaulo = 100 * ((float) paulo / total);
    porcentRenata = 100 * ((float) renata / total);
    porcentNulo = 100 * ((float) nulo / total);
    porcentBranco = 100 * ((float) branco / total);

    printf("Paulo: %0.1f %%\n", porcentPaulo);
    printf("Renata: %0.1f %%\n", porcentRenata);
    printf("Nulo: %0.1f %%\n", porcentNulo);
    printf("Branco: %0.1f %%\n", porcentBranco);

    if(porcentPaulo > porcentRenata){
        printf("Paulo ganhou as eleicoes");
    }else if(porcentRenata > porcentPaulo){
        printf("Renata ganhou as eleicoes");
    }else{
        printf("Empate tecnico");
    }
}