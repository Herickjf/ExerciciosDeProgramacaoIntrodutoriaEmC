/*Faça um programa que receba como entrada oscoeficientes (a, b, c) de uma equação do 2º grau,calcule e mostre as raízes desta equação. As raízesde uma equação do 2º grau são calculadas pela fórmula -b+-raizD/2a
onde D é o discriminante da equação.Para esse discriminante há três possíveis situações:
a) Se D < 0 – não há solução real, pois não existe raizquadrada de número negativo;
b) Se D = 0 – há duas soluções iguais: x1 = x2 = -b/2a.
c) Se D > 0 – há duas soluções reais e diferentes: x1 e x2.
*/

#include <stdio.h>
#include <math.h>

float D(float a, float b, float c);
void X(float d, float a, float b);

int main(){

    float a, b, c;

    printf("Digite os índices a, b e c da sua equação de Segundo Grau: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\n\nDelta = %.2f\n\n\n", D(a,b,c));
    if (D(a,b,c)< 0)
        printf("Não há resultado para essa equação. Pois delta é menor que 0.\n\n\n");
    else
        X(D(a,b,c), a, b);

    return 0;
}

float D(float a, float b, float c){
    float delta;
    delta = pow(b,2) - (4* a * c);
    return delta;
}

void X(float d, float a, float b){
    float x1, x2;

    x1 = (-b + (sqrt(d)))/ 2*a;
    x2 = (-b - (sqrt(d)))/ 2*a;

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n\n", x2);
}
