
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