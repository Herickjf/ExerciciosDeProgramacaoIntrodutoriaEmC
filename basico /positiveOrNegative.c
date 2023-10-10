//Ler um número e dizer se ele é positivo ou negativo. Caso seja 0, o programa finaliza.

#include <stdio.h>

int main(){

    int n;

    do {
        printf("Type a number:\n");
        scanf("%d", &n);

        if(n>0)
            printf("%d is positive.\n", n);

        else if (n<0)
            printf("%d is negative.\n", n);

    } while(n!=0);

    printf("%d is 0", n);

    return 0;

}
