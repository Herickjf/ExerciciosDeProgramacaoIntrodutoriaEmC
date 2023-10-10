//Faça um programa que receba três notas, calcule e mostre a média aritmética das notas.
// Como fazer?
//
#include <stdio.h>

int main (void) {

    //Definir variáveis:
    float nota_1, nota_2, nota_3, media;

    //Receber as informações:
    printf("Ola! Vamos calcular a sua media!\n");
    printf("Digite sua Primeira nota e press ENTER.\n");
    scanf ("%f", &nota_1);

    printf("Agora, digite sua Segunda nota e press ENTER.\n");
    scanf ("%f", &nota_2);

    printf("Por fim, digite sua Terceira nota e press ENTER.\n");
    scanf ("%f", &nota_3);

    //Calcular a média:
    media = (nota_1 + nota_2 + nota_3) / 3;

    //Devolver ao user sua média:

    printf ("Sua media eh = %.1f", media);

    return 0;

}
