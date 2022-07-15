#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
	char string1[TAM], string2[TAM], string3[TAM];
  
  printf("Primeira String: ");
  scanf("%s", string1);
  printf("Segunda String: ");
  scanf("%s", string2);
	
  strcat(string1, string2);

	printf("String concatenada: %s\n", string1);	
}
    