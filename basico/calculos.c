// Fazer um programa que receba um número positivo e maior que zero, calcule e mostre
// > O número digitado ao quadrado;
// > O número digitado ao cubo;
// > A raíz quadrada do número digitado;
// > A raíz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

int main () {

//Definir as variáveis:
    float n, quadrado, cubo, raiz_quadrada, raiz_cubica;

//Receber dados:
    printf("Ola, esse eh um programa que te responde o quadrado, o cubo, a raiz quadrada e a raiz cubica de um numero\n Por favor, insira um numero positivo e maior que 0 para comecarmos:\n");
    scanf ("%f", &n);

//Calcular:
    quadrado = pow(n,2);
    cubo = pow(n,3);
    raiz_quadrada = sqrt(n);
    raiz_cubica = pow(n,1.0/3);
//Devolver respostas a depender da entrada:
    if (n > 0) {
        printf("\n O quadrado de %.2f eh = %.2f\n O cubo de %.2f eh = %.2f\n A raiz quadrada de %.2f eh = %.2f\n E a raiz cubica de %.2f eh = %.2f .", n, quadrado, n, cubo, n, raiz_quadrada, n, raiz_cubica);

    }
     else {
        printf ("Ops, voce inseriu um numero que nao corresponde aos nossos calculos, tente novamente com um numero positivo e maior que zero.");

     }
     return 0;



}
