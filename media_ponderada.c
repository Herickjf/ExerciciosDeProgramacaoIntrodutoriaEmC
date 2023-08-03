//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada das notas.

#include <stdio.h>

int main (void) {

    //Definir variáveis:
    float nota_1, nota_2, nota_3, media;
    int peso_1, peso_2, peso_3;

    //Receber as informações:
    printf("Ola! Vamos calcular a sua media!\n");

    //Nota 1 e Peso 1:
    printf("Digite sua Primeira nota e press ENTER.\n");
    scanf ("%f", &nota_1);
    printf("Digite o PESO da primeira nota e press ENTER.\n");
    scanf ("%i", &peso_1);
    //Nota 2 e peso 2:
    printf("Agora, digite sua Segunda nota e press ENTER.\n");
    scanf ("%f", &nota_2);
    printf("Digite o peso da segunda nota e press ENTER.\n");
    scanf ("%i", &peso_2);
    //Nota 3 e peso 3:
    printf("Por fim, digite sua Terceira nota e press ENTER.\n");
    scanf ("%f", &nota_3);
    printf("Digite o peso da terceira nota e press ENTER.\n");
    scanf ("%i", &peso_3);

    //Calcular a média ponderada:
    media = (nota_1*peso_1 + nota_2*peso_2 + nota_3*peso_3) / (peso_1 + peso_2 + peso_3);

    //Devolver ao user sua média ponderada:
    printf ("Sua media ponderada eh = %.1f", media);
    if (media>=7.0){
            printf("Parabens, voce passou por media! Vai curtir as ferias!!");
    }
    if (media < 7.0 && media >= 4.0) {
        printf("Estuda mais um pouco, ce consegue!!!");
    }
    if (media < 4.0) {
        printf("Sinto muito, voce foi reprovado");
    }
    return 0;


}
