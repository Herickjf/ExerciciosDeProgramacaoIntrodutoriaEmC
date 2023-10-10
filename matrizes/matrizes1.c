//Seja A uma matriz 4x5, diga qual o maior valor de A e sua posição.

#include <stdio.h>
#include <stdlib.h>

void PreencherEMostrar(int A[][5]);
int Maior(int A[][5]);

int main(void){
    int A[4][5];

    PreencherEMostrar(A);
    Maior(A);

    return 0;
}

void PreencherEMostrar(int A[][5]){
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            A[i][j] = rand() % 100;
        }
    }
    printf("Elementos da Matriz:\n\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
           printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int Maior(int A[][5]){
    int maior=0, linha, coluna;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(A[i][j]>maior){
                maior = A[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    
    printf("O maior elemento da Matriz é:  %d.\n", maior);
    printf("\nEsse maior elemento da Matriz está na linha %d, coluna %d.\n", linha+1, coluna+1);

    return maior;
}
