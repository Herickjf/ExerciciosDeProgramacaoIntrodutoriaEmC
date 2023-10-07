/*
1.1 Dados dois vetores A e B com 10 elementos cada. Armazenar 
novetor C a soma do elemento em A com o elemento em B em cada
uma das posições.

1.2 Ler dois vetores A e B de 10 elementos cada. Intercalar os
elementos de A com os elementos de B de maneira a formar um
terceiro vetor, C. Escrever o vetor C.

1.3 Ler um vetor A com 20 elementos. Gerar e mostrar o vetor B
obtido pela inversão da ordem do vetor A.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PreencherEMostrar(int A[], int B[]);
void SomaAeB(int A[], int B[], int C[]);
void IntercalaAeB(int A[], int B[], int C[]);
void PreencheMostraEInverte(int A[]);

int main(){
    int A[10], B[10], C[20], a[20];
    PreencherEMostrar(A,B);
    SomaAeB(A,B,C);
    IntercalaAeB(A,B,C);
    PreencheMostraEInverte(a);
    return 0;
}
void PreencherEMostrar(int A[], int B[]){
    srand(time(NULL));
    for(int i=0; i<10; i++){
        A[i] = rand() % 100; 
    }
    printf("Elementos da array A:  ");
    for(int i=0; i<10; i++){
        printf("%d", A[i]);
        i<9 ? printf(",  "):printf(".");
    }
    printf("\n");
    for(int i=0; i<10; i++){
        B[i] = rand() % 100;
        
    }
    printf("Elementos da array B:  ");
    for(int i=0; i<10; i++){
        printf("%d", B[i]);
        i<9 ? printf(",  "):printf(".");
    }
    printf("\n\n");
}
void SomaAeB(int A[], int B[], int C[]){
    for(int i=0; i<10; i++){
            C[i] = A[i]+B[i];
        
    }
    printf("An + Bn:  ");
    for(int i=0; i<10; i++){
        printf("%d", C[i]);
        i<9 ? printf(",  "):printf(".");
    }
    printf("\n\n");
}
void IntercalaAeB(int A[], int B[], int C[]){
    for(int i=0, j=0; i<20; i+=2, j++){
        C[i]=A[j];
        C[i+1]=B[j];
    }
    printf("Elementos da Array C:  ");
    for(int i=0; i<20; i++){
        printf("%d", C[i]);
        i<19 ? printf(",  "):printf(".");
    }
    printf("\n\n");
}
void PreencheMostraEInverte(int A[]){
    int B[20];
    srand(time(NULL));
    for(int i=0; i<20; i++){
        A[i] = rand() % 100; 
    }
    printf("Elementos da array a:  ");
    for(int i=0; i<20; i++){
        printf("%d", A[i]);
        i<19 ? printf(",  "):printf(".");
    }
    printf("\n");
    for(int i=0, j=19; i<20; i++, j--){
        B[i] = A[j]; 
    }
    printf("Elementos da array b:  ");
    for(int i=0; i<20; i++){
        printf("%d", B[i]);
        i<19 ? printf(",  "):printf(".");
    }
    printf("\n\n");
}