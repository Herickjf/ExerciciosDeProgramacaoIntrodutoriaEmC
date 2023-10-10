/*Dados três valores X, Y e Z, verificar se eles podem ser oscomprimentos dos lados de um triângulo e, se for, verificarse é um triângulo equilátero, isósceles ou escaleno. Seeles não formarem um triângulo, escrever a mensagem“Os valores não formam um triângulo”. Propriedades edefinições:
 Propriedade – o comprimento de cada lado de umtriângulo é menor do que a soma dos comprimentosdos outros dois lados.
 Definição 1 – chama-se triângulo equilátero o triânguloque tem os comprimentos dos três lados iguais.
 Definição 2 – chama-se triângulo isósceles o triânguloque tem os comprimentos de dois lados iguais. Portantotodo triângulo equilátero é também isósceles.
 Definição 3 – chama-se triângulo escaleno o triânguloque tem os comprimentos de seus três lados diferentes.*/

#include <stdio.h>

int main(void){

    float a, b, c;

    printf("Type 3 values to know if it is a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a>b+c || b>a+c || c>a+b)
        printf("It is not a Triangle.");
    else if (a==b && b==c)
            printf("It is Equilateral Triangle.");
        else if (a==b && b!=c)
            printf("It is a Isosceles Triangle.");
            else if (a!=b && b==c)
                printf("It is a Isosceles Triangle.");
                else if (a!=b && a==c)
                    printf("It is a Isosceles Triangle.");
                    else if (a!=b && b!=c && a!=c)
                        printf("It is a Scalene Triangle.");

    return 0;

}
