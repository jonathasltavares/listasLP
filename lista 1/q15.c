// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
// dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
// trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
// tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
// Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>

int main(){
  int dias;
  float salarioBruto, salarioLiquido;

  printf("Informe a quant. dias trabalhados ");
  scanf("%d", &dias);

  if(dias<=10){
    salarioBruto = 50.25*dias;
    salarioLiquido = salarioBruto-(salarioBruto*0.1);
    printf("Valor a receber: %0.2f \n", salarioLiquido);
  }
  else if(dias>10 && dias<=20){
    salarioBruto = 50.25*dias-((50.25*dias)*0.1);
    salarioLiquido = salarioBruto+(salarioBruto*0.2);
    printf("Valor a receber: %0.2f \n", salarioLiquido);
  }
  else if(dias>20 && dias<=30){
    salarioBruto = 50.25*dias-((50.25*dias)*0.1);
    salarioLiquido = salarioBruto+(salarioBruto*0.3);
    printf("Valor a receber: %0.2f \n", salarioLiquido);
    
  }
  
}