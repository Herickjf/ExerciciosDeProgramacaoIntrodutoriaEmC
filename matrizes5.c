/*
Seja a declaração: int N[LINHA][COLUNA]; Escrever um programa capaz de:
a) ler os elementos da matriz.
b) identificar o número de elementos iguais a zero em cada uma daslinhas.
c) identificar o número de elementos iguais a zero em cada uma dascolunas.
d) identificar o número de elementos pares em determinada linha (a linha 
será fornecida pelo usuário).
e) identificar o número de elementos pares em determinada coluna (acoluna 
será fornecida pelo usuário).
f) calcular a média aritmética dos elementos de cada uma das linhas,
armazenando esses valores em um vetor.
g) identificar a linha que tem a maior média de seus elementos.
h) mostrar todos os resultados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int zlinha=0, zcoluna=0, l, c, maiorL=0, linhaP, colunaP, linha, coluna;

void PreencheEMostra(int Matrix[][c], float m[c]);
void ZerosNasLinhasEColunas(int Matrix[][c]);
void ParesNasLinhasEColunas(int Matrix[][c]);
void MostraAMedia(float m[c]);

int main(){
    printf("Escreva o tamanho da sua Matriz em linhas e colunas:  ");
    scanf("%d%d", &l, &c);printf("\n\n");
    int N[l][c];
    float m[c];
    for (int i=0; i<c; i++){
        m[i]=0;
    }
    PreencheEMostra(N, m);
    ZerosNasLinhasEColunas(N);
    MostraAMedia(m);
    printf("Escolha uma linha e uma coluna:  ");
    scanf("%d%d", &linha, &coluna);printf("\n\n");
    ParesNasLinhasEColunas(N);

    return 0;
}
void PreencheEMostra(int Matrix[][c], float m[c]){
    int i, j;
    float maior=0;
    srand(time(NULL));
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            Matrix[i][j] = rand() % 20;
            printf("%d\t", Matrix[i][j]);
            m[i]+= Matrix[i][j];
        }printf("\n\n");
        m[i]/=c;
        if(m[i]>maior){
            maior = m[i];
            maiorL=i+1;
        } 
    }
}
void ZerosNasLinhasEColunas(int Matrix[][c]){
    for(int i=0; i<l; i++){
        zlinha=0;
        for(int j=0; j<c; j++){
            if(!(Matrix[i][j]))zlinha++;
        }
        printf("A quantidade de zeros na linha %d é %d.\n", i+1, zlinha);
    }printf("\n\n");
    for(int j=0; j<c; j++){
        zcoluna=0;
        for(int i=0; i<l; i++){
            if(!(Matrix[i][j]))zcoluna++;
        }
        printf("A quantidade de zeros na coluna %d é %d.\n", j+1, zcoluna);
    }printf("\n\n");
}
void ParesNasLinhasEColunas(int Matrix[][c]){
    int j, i;
    colunaP=0;
    linhaP=0;
    for( j=0; j<c; j++){
        if(Matrix[linha-1][j]%2==0)colunaP++;
    }printf("A quantidade de pares na linha %d é %d.\n\n", linha, colunaP);
    for( i=0; i<l; i++){
         if(Matrix[i][coluna-1]%2==0)linhaP++;
    }printf("A quantidade de pares na coluna %d é %d.\n\n", coluna, linhaP);
}
void MostraAMedia(float m[]){
    for (int i=0; i<l; i++){
        printf("Media da linha %d é %.2f.\n", i+1, m[i]);
    }printf("\nLinha com a maior media da Matriz é a %d.\n\n", maiorL);
}