// Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
// necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
// percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
// o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
// liquido do professor.

#include <stdio.h>

int main(){
  int horas, desct;
  float horaAula, salarioLiquido, salarioBruto;

  printf("Informe o valor da sua hora aula: ");
  scanf("%f", &horaAula);
  printf("Informe suas horas trabalhadas: ");
  scanf("%d", &horas);
  printf("Informe a porcentagem do desconto do INSS: ");
  scanf("%d", &desct);

  salarioBruto = horaAula*horas;
  
  salarioLiquido = salarioBruto-(salarioBruto * (((float)desct)/100));

  printf("Valor a receber: %0.2f\n", salarioLiquido);
  
}