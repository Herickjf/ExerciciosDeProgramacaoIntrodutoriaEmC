//Seja A uma matriz 3x3, calcule a soma da diagonal principal de A e armazene e mostre os elementos dessa diagonal em um vetor.

#include <stdio.h>
#include <stdlib.h>

void PreencherEMostrar(int A[][3]);
void Diagonal(int A[][3]);
void Diagonal2(int A[][3]);


int main(void){
    int A[3][3];

    PreencherEMostrar(A);
    Diagonal(A);
    Diagonal2(A);

    return 0;
}

void PreencherEMostrar(int A[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            A[i][j] = rand() % 100;
        }
    }
    printf("\nElementos da Matriz:\n\n\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void Diagonal(int A[][3]){
    int soma=0, diagonal[3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == j){
                soma += A[i][j];
                diagonal[i] = A[i][j];
            }

        }
            
    }
    printf("\nSoma da diagonal principal da Matriz =   %d.\n", soma);

    printf("\nElementos da diagonal:  ");
    for(int i=0; i<3; i++){
        printf("%d  ", diagonal[i]);
    }
    printf("\n\n\n");
} 

void Diagonal2(int A[][3]){
    int soma=0, diagonal[3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if((i==0 && j==2)||(i==1 && j==1)||(i==2 && j==0)){
                soma += A[i][j];
                diagonal[i] = A[i][j];
            }

        }
            
    }
    printf("\nSoma da diagonal Secundária da Matriz =   %d.\n", soma);

    printf("\nElementos da diagonal Secundária:  ");
    for(int i=0; i<3; i++){
        printf("%d  ", diagonal[i]);
    }
    printf("\n\n");
} 

