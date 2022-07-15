
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