//Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica das notas.
// Como fazer?
//
#include <stdio.h>

int main (void) {

    //Definir vari�veis:
    float nota_1, nota_2, nota_3, media;

    //Receber as informa��es:
    printf("Ola! Vamos calcular a sua media!\n");
    printf("Digite sua Primeira nota e press ENTER.\n");
    scanf ("%f", &nota_1);

    printf("Agora, digite sua Segunda nota e press ENTER.\n");
    scanf ("%f", &nota_2);

    printf("Por fim, digite sua Terceira nota e press ENTER.\n");
    scanf ("%f", &nota_3);

    //Calcular a m�dia:
    media = (nota_1 + nota_2 + nota_3) / 3;

    //Devolver ao user sua m�dia:

    printf ("Sua media eh = %.1f", media);

    return 0;

}
