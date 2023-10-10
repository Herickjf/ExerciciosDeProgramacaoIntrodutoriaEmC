//Seja A uma matriz 3x3, calcule a soma da diagonal principal de A e armazene e mostre os elementos dessa diagonal em um vetor.

#include <stdio.h>
#include <stdlib.h>

void PreencherEMostrar(int A[][3]);
void Transposta(int A[][3], int T[][3]);



int main(void){
    int A[3][3], T[3][3];

    PreencherEMostrar(A);
    Transposta(A, T);

    return 0;
}

void PreencherEMostrar(int A[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            A[i][j] = rand() % 100;
        }
    }
    printf("\nElementos da Matriz:\n\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void Transposta(int A[][3], int T[][3]){
    //int *k, *l;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            T[j][i] = A[i][j];
        }
            
    }



    printf("\nElementos da Matriz Trasposta:\n\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
} 

