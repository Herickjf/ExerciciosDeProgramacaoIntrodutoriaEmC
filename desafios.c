// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi R²

#include <stdio.h>
#include <math.h>

int main () {

    // Definir Var
    float area, r;

    // Receber dados do user
    printf("Ola, este eh um programa que vai calcular a area do seu circulo pra voce!\n\tDigite o raio do seu circulo (lembre-se, raio = metade do diametro:");
    scanf ("%f", &r);

    //Cálculos:
    area = 3.14 * pow(r,2);

    //Exibir o resultado:
    printf("A area do seu circulo eh = %.2f m^2", area);

    return 0;

}
