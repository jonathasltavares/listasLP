// Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
// min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
// seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.

#include <stdio.h>
#include <stdlib.h>

int main(){
  char A = 'A', B='B', C = 'C', a ='a', b='b', c='c', zero ='0', um = '1', dois ='2', $ = '$', mult = '*', soma = '+', divi = '/';

  printf("A = %d\nB = %d\nC = %d\na = %d\nb = %d\nc = %d\n0 = %d\n1 = %d\n2 = %d\n$ = %d\n* = %d\n+ = %d\n/ = %d\n",A,B,C,a,b,c,zero,um,dois,$,mult,soma,divi);
}