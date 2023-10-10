//Fazer programa que calcule e mostre a área e o volume de um cilindro, sabe-se que A= 2pi r (h+r) e V=pi r² h.

#include <stdio.h>
#include <math.h>

int main() {

    float h, r, volume, area;

    printf("Ola, voce tem um cilindro\? Vamos calcular a Area Total e o Volume dele!\nPrimeiro, informe a altura do seu cilindro:\n ");
    scanf ("%f", &h);

    printf("Certo, agora informe o raio da base do cilindro:\n");
    scanf("%f", &r);

    area = 2 * 3.14 * r * (h+r);
    volume = 3.14 * pow(r, 2) * h;

    printf("O seu cilindro tem %.2f m2 de area e %.2f m3 de volume.", area, volume);
    return 0;


}
