/*Faça um programa que mostre o menu de opções a seguir, receba a 
opção do usuário e os dados necessários para cada operação.
Menu de opções:
1 - Somar dois números;
2 - Raiz quadrada de um número.
Digite a opção desejada:*/

#include <stdio.h>
#include <math.h>

int main(void){

    float soma, raiz, n, m;
    int tipo;

    printf("MENU:\n\t1 - To sum 2 numbers;\n\t2 - To get the Square Root of a number;"
           "\n\t0 - Exit.\n\nType the option:\n");
    scanf("%i", &tipo);

    switch(tipo){
    case 1:
        printf("\nNow, type 2 numbers: ");
        scanf("%f %f", &n, &m);
        printf("%f + %f = %f.\n\nEnd.", n, m, soma=n+m);
        break;
    case 2: 
        printf("\nNow, type a number: ");
        scanf("%f", &n);
        printf("The Square Root of %f = %f.\n\nEnd.", n, raiz=sqrt(n));
        break;
    case 0: 
        printf("End.");
        break;
    default: printf("Invalid choice.");
    }

    return 0;
}