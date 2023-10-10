// Faça um programa que exiba um menu e resolva as operações que o user selecionar.
//menu:
// 1. adição
// 2. subtração
// 3. multiplicação
// 4. divisão
// 0. sair.

#include <stdio.h>

int main(){

    float n1, n2, r;
    int op;

    printf("MENU:\n\t(1) Addition;\n\t(2) Subtraction;\n\t(3) Multiplication;"
           "\n\t(4) Division;\n\t(0) Exit. \n\nChoose an operation:");
    scanf("%d", &op);

    switch(op){
        case 1: printf("Addition.\n");
                printf("Type 2 numbers:\n");
                scanf("%f %f", &n1, &n2);
                r = n1 + n2;
                printf("The result of your addition is equals %.2f", r);
                break;

        case 2: printf("Subtraction.\n");
                printf("Type 2 numbers:\n");
                scanf("%f %f", &n1, &n2);
                r = n1 - n2;
                printf("The result of your subtraction is equals %.2f", r);
                break;

        case 3: printf("Multiplication.\n");
                printf("Type 2 numbers:\n");
                scanf("%f %f", &n1, &n2);
                r = n1 * n2;
                printf("The result of your multiplication is equals %.2f", r);
                break;

        case 4: printf("Division.\n");
                printf("Type 2 numbers:\n");
                scanf("%f %f", &n1, &n2);
                r = n1 / n2;
                printf("The result of your division is equals %.2f", r);

                break;

        case 0: printf("Bye, Bye!");
                break;

        default: printf("Invalid choice.");
    }

    return 0;
}
