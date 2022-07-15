#include <stdio.h>
#include<stdlib.h>

int main(){
  int *pmenor = NULL, *pNum = NULL;
  int num, laco = 1, menor;
    
  pmenor = &menor;
    
  do{
     puts("Digite um numero: ");
      scanf("%d", &num);
      pNum = &num;

      if(laco == 1){
          menor = *pNum;
          laco++;
      }
      else if(*pNum < *pmenor && *pNum != 0){
          menor = *pNum;            
      }        
      printf("Menor: %d\n", *pmenor);
        
    }while(num != 0);

    return 0;
}
    