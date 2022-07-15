#include <stdio.h>
#include<stdlib.h>

int main(){
    int *p1= NULL, *p2 = NULL; 
    int aux, num1, num2;
  
    printf("Informe o primeiro valor");
    scanf("%d",&num1);
    printf("Informe o segundo valor");
    scanf("%d",&num2);
  
    p1 = &num1;
    p2 = &num2;
    
    puts("Antes: ");
    printf("Num1: %d\nNum2: %d\n", num1, num2);
    
    aux = *p2;
    num2 = *p1;
    num1 = aux;
    
    puts("Depois: ");
    printf("Num1: %d\nNum2: %d\n", num1, num2);
}
    