// Diga a ordem de c ́alculo dos operadores em cada uma das instru ̧c ̃oes em C a seguir e mostre o valor
// de x depois que cada instru ̧c ̃ao for executada.

#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("x = 7 + 3*6/2-1: Primeiro a multiplicação 3*6, depois divide o resultado da mulp. por 2, depois soma 7 ao resultado da divisao. enfim subtrai 1 do resultado.\n ");
  a = 7 + 3*6/2-1;
  printf("x = %d\n", a);

  printf("x = 2%2 + 2*2-2/2: multiplica 2*2, faz o resto da divisao de 2por2 e divide 2 por 2 ao mesmo tempo, depois subtrai e por fim, soma o resto da divisao de 2 por2.\n");
  b = 2%2 + 2*2-2/2;
  printf("x = %d\n", b);

  printf("x = (3 * 9 * (3 + (9*3/ (3) ) ) ): multiplica 9 * 3 = 27, depois divide o resultado da mulpl por 3, soma 3+9, mulpl 3 * 9, depois mulplica 27 * 12\n");
  c = (3 * 9 * (3 + (9*3/ (3) ) ) );
  printf("x = %d\n", c);
  
}