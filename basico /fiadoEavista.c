/*Uma Loja de Utilidades utiliza o código 1-para vendas a vista e 2-para vendas a prazo.
Escreva um programa que leia, para cada venda realizada, o código da venda (1 ou 2) e o
valor da venda. O programa deve calcular e mostrar o valor total das vendas à vista, o
valor total das vendas a prazo e o valor total das vendas (a vista e a prazo) efetuadas. O
programa termina quando o código da venda for igual a zero.*/

#include <stdio.h>

int main() {

    int codigo;
    float vav = 0, vf = 0, somaav, somaf, vt;

    printf("Choose the the payment type:\n\t(1) Cash Payment;\n\t(2) Foward;\n\t"
    "(3) Final value;\n\t(0) Exit.\n");
    scanf("%d", &codigo);
    while (codigo != 0 && codigo != 1 && codigo != 2 && codigo != 3) {
        printf("\nInvalid Value, try again:\n");
        printf("\nChoose the the payment type:\n\t(1) Cash Payment;\n\t(2) Foward;\n\t"
        "(3) Final value;\n\t(0) Exit.\n");
        scanf("%d", &codigo);
    }
    while (codigo == 1 || codigo == 2) {
        switch(codigo){
            case 1: printf("\n(Cash Payment)\nType the value:\n");
                    scanf("%f", &vav);
                    break;
            case 2: printf("\n(Foward)\nType the value:\n");
                    scanf("%f", &vf);
                    break;
            default: printf("\nInvalid value.\n");
        }
        somaav = 0;
        somaf = 0;
        somaav = somaav + vav;
        somaf = somaf + vf;
        vt = 0;
        vt = somaav + somaf;
        
        printf("\nChoose the the payment type:\n\t(1) Cash Payment;\n\t(2) Foward;\n\t"
        "(3) Final value;\n\t(0) Exit.\n");
        scanf("%d", &codigo);
    }

    if (codigo == 3) {
        printf("\nTOTAL:\n\t--> Cash Payment: U$ %.2f;\n\t--> Foward:       "
        "U$ %.2f;\n\t--> Total:        U$ %.2f.\n\nThank you!", somaav, somaf, vt);
    }
    else 
        printf("See you.");
    
    return 0;

}
