//Faça um programa que leia o salário bruto de um funcionário, calcule e mostre o seu salário líquido.
//Sabe-se que:
//• O salário bruto teve um reajuste de 38%;
//• O funcionário receberá uma gratificação de 20% do salário bruto;
//• O salário total é descontado em 15%.

#include <stdio.h>

int main(void) {

  //definir variaveis
  float salario, salario_bruto, salario_gratificado, salario_liquido;

  //receber dados:
  printf("Digite o seu salario:\n");
  scanf("%f", &salario);

  //calculos:
  salario_bruto = salario * 1.38;
  salario_gratificado = salario_bruto * 1.20;
  salario_liquido = salario_gratificado * 0.85;

  //devolvendo resultados:
  if (salario > 0) {
    printf("O seu salario liquido, no final das contas, sera de R$ %.2f", salario_liquido);
  }
  else {
    printf("Voce esta em trabalho escravo. Procure ajuda!!");
  }

  return 0;
}