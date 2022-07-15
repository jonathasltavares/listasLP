#include <stdio.h>
#include<stdlib.h>
struct estoque{
  char nomePeca[100];
  int id;
  float preco;
  int nPedido;
};

int main(){
    struct estoque p1;

    puts("informe o nome da peça: ");
    scanf("%s", p1.nomePeca);

    puts("inform o id da peça: ");
    scanf("%d",&p1.id);

    puts("informe o preço da peç: ");
    scanf("%f",&p1.preco);
  
    puts("informe o numero do pedido: ");
    scanf("%d",&p1.nPedido);

    return 0;
}
