/*
Faça uma função que recebe, por parâmetro, 2 vetores A e B detamanho 10 de inteiros. Ao final da função, B deve conter ofatorial de cada elemento de A. O vetor B retorna alterado.
A = 4 1 0 3 ...
B = 24 1 1 6 ...
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int A[10], B[10];
    srand(time(NULL));
    printf("Elementos da array A:  ");
    for(int i=0; i<10; i++){
        A[i] = rand() % 10; 
        B[i] = A[i];
        for(int j=1; j<A[i];B[i]*=j, j++);
        printf("%d", A[i]);
        i<9 ? printf(",  "):printf(".");
    }printf("\n");
    printf("Elementos da array B:  ");
    for(int i=0; i<10; i++){
        printf("%d", B[i]);
        i<9 ? printf(",  "):printf(".");
    }
    return 0;
}
