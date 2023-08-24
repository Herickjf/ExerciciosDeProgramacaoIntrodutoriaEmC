/*A concession�ria de ve�culos �CARANGO VELHO� est� vendendo os seus ve�culos
com desconto. O desconto � calculado sobre o valor do ve�culo de acordo com o tipo do
combust�vel do ve�culo (�lcool � 25%, gasolina � 21% ou diesel �14%). Escreva um
programa que leia o valor de venda do ve�culo, calcule e mostre o valor do desconto e o
valor final do ve�culo que ser� pago pelo cliente.
*/

#include <stdio.h>

int main() {

    float pv, pvf, d=0;
    char tipo;

    printf("Type the price of the vehicle?\n\t--> ");
    scanf("%f", &pv);

    while (pv<0){
        printf("The price cant be negative, try again:\n");
        scanf("%f", &pv);
    }

    printf("\nNow, choose the type of the vehicle:\n\t(a) Alcohol;"
           "\n\t(g) Gasoline; \n\t(d) Diesel. \n\t(n) None.\n");
    scanf(" %c", &tipo);

    while (tipo != 'a' && tipo != 'g' && tipo != 'd' && tipo != 'n'){
        printf("Invalid choice, try again:\n\t");
        scanf("%c", &tipo);
    }


    switch(tipo) {

        case 'a':
            d = pv * 0.25;
            pvf = pv - d;
            break;
        case 'g':
            d = pv * 0.21;
            pvf = pv - d;
            break;
        case 'd':
            d = pv * 0.14;
            pvf = pv - d;
            break;
        case 'n':
            d = 0;
            pvf = pv - d;
            break;
    }

    printf("Discount: R$ %.2f ;\nFinal Price: R$ %.2f .", d, pvf);

    return 0;

}
