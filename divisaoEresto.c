//Fazer um programa para calcular dois números inteiros e devolver a divisão deles e o resto:

#include <stdio.h>
#include <math.h>

int main () {

    int n1, n2, divisao, resto;

    printf("Ola!, essa eh uma calculadora de divisoes.\n Primeiro digite um dividendo inteiro:");
    scanf("%d", &n1);

    printf("Muito bem!! Agora digite um divisor, tambem inteiro:\n");
    scanf ("%d", &n2);

    divisao = n1 / n2;
    resto = n1 % n2;

    printf("Aqui esta, o resultado da divisao eh = %.2d \n e o resto eh %.2d", divisao, resto);
    return 0;

}
