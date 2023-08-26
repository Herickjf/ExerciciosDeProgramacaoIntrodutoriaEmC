/*Escreva um programa que leia 3 números inteiros e mostre-os em ordem crescente.*/

#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Type 3 whole numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1<n2 && n2<n3){
        printf("The numbers u typed in ascending order are %d, %d, %d.\n", n1, n2, n3);
    }
    else
        if (n1<n3 && n3<n2) {
            printf("The numbers u typed in ascending order are %d, %d, %d.\n", n1, n3, n2);
        }
        else
            if (n2<n1 && n1<n3){
                printf("The numbers u typed in ascending order are %d, %d, %d.\n", n2, n1, n3);
            }
            else
                if (n2<n3 && n3<n1){
                    printf("The numbers u typed in ascending order are %d, %d, %d.\n", n2, n3, n1);
                }
                else
                    if (n3<n2 && n2<n1){
                        printf("The numbers u typed in ascending order are %d, %d, %d.\n", n3, n2, n1);
                    }
                    else
                        printf("The numbers u typed in ascending order are %d, %d, %d.\n", n3, n1, n2);
    return 0;
}
