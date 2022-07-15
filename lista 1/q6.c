

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  float altura, pIdeal;
  char sexo;
  
  printf("Informe sua altura em metros: \n");
  scanf("%f",&altura);
  printf("Informe seu sexo: (h ou m)\n");
  scanf(" %c", &sexo);

  if(sexo == 'h'){
    pIdeal = 72.7 * altura - 58;
    printf("Peso ideal: %f\n", pIdeal);
  }
  else if(sexo =='m'){
    pIdeal = 62.1 * altura - 44.7;
    printf("Peso ideal: %f\n", pIdeal);
  }

  
 
  return 0;
}
