#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct Nodes{
  int x;
  int y;
  float z;
  struct Nodes *prox;
} Node;

void media ( Node *a, int t);

int main(void) {
  Node *p;
  p=(Node*)malloc(TAM*sizeof(Node));
  
  for(int i=0;i<TAM;i++){
    p=(p+i);
    printf("Digite x e y do %d° nó.\n", i+1);
    scanf("%d%d", &p->x, &p->y);
    if(i==TAM-1) p->prox= (p-(TAM-1));
    else p->prox= (p+i+1);
  }
  
  media(p, TAM);
  
  for(int i=0;i<TAM;i++){
    p=(p+i);
    printf("Os elementos do %d° nó.\n", i+1);
    printf("x: %d e y: %d.\n", p->x, p->y);
    printf("A media é: %.2f e a do proximo é: %.2f.\n", p->z, p->prox->z);
  }
  return 0;
}
void media ( Node *a, int t){
  for(int i=0;i<t;i++) a[i].z=((float)a[i].x+a[i].y)/2;
}
void adicionar(Node *est, int *qnt) {
 
}
void remover(Node *est, int *qnt, int pos) {
  for (int i = 0; i < pos - 1; i++) {
    est = est->prox;
  }
  est->prox = est->prox->prox;
  *qnt -= 1;
}