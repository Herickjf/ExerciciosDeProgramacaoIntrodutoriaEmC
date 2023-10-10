// Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário a receber, de acordo com as regras a seguir:
//• A hora trabalhada vale 1/8 do salário mínimo;
//• A hora extra vale ¼ do salário mínimo;
//• O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
//• A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
//• O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.

#include <stdio.h>

int main(void) {

  //Definir variaveis:
  float hrs_trabalhadas, salario_minimo, hrs_extra, salario_bruto, salario_extra, salario_total, vht, vhe;

  //Receber dados:
  printf("Ola, digite quantas horas voce trabalha por mes:\n");
  scanf("%f", &hrs_trabalhadas);

  printf("Agora digite quanto vale o salario minimo atualmente:\n");
  scanf("%f", &salario_minimo);

  printf("Por fim, digite quantas horas extra voce trabalhou:\n");
  scanf("%f", &hrs_extra);

  //Calculos:
  vht = salario_minimo/8;
  salario_bruto =  vht * hrs_trabalhadas;
  vhe = salario_minimo/4;
  salario_extra = vhe * hrs_extra;
  salario_total = salario_bruto + salario_extra;

  //Resuldado:
  if (hrs_trabalhadas < 0 || salario_minimo < 0 || hrs_extra < 0)
  {

    printf("Ops, tente com informacoes maiores que zero da proxima!");
    
  }
  else {
  printf("O seu salario eh R$ %.0f", salario_total);  
  }
  
  return 0;
}
