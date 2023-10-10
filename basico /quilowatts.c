// Sabe-se que o quilowatt de energia custa 1/5 do salário mínimo. Faça um programa que receba ovalor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e mostra:
// • O valor de cada quilowatt; 
// • O valor a ser pago por essa residência; 
// • O valor a ser pago com desconto de 15%.

#include <stdio.h>

int main(void) {

  //Definir Variáveis:
  float potencia, salario, vkw, vpr, vpd;

  //receber dados
  printf("Ola, digite quantos quilowatts de potencia sua casa consome por mes:\n");
  scanf("%f", &potencia);

  printf("Bom, agora digite quanto vale o salario minimo atualmente:\n");
  scanf("%f", &salario);

  //Cálculos: 
  vkw = salario / 5;
  vpr = vkw * potencia;
  vpd = vpr * 0.85;

  //Devolver os dados:
  if (potencia > 0) {
    printf("Cada quilowatt da sua residencia custou %.0f R$ \nO total a pagar pela energia eh %.0f R$ \nAdicionando o desconto, voce vai pagar %.0f R$.\nAgora vai pagar pra nao vencer!", vkw, vpr, vpd);

    
  }
  else {
    printf("Foi mal, tente uma potencia maior que zero da proxima vez!");
  }

  
  return 0;
}
