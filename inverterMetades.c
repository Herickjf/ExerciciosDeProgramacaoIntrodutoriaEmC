/*
Ler um vetor de 16 posições. Troque os 8 primeiros valores pelos 8últimos. 
Escreva ao final o vetor obtido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int V[16], T[16];
    srand(time(NULL));
    printf("Elementos da array V:  ");
    for(int i=0; i<16; i++){
        V[i] = rand() % 100; 
        printf("%d", V[i]);
        i<15 ? printf(",  "):printf(".");
    }printf("\n\n");
    for(int i=0; i<16; i++){
        if(i<8)
            T[i]=V[i+8];
        else
            T[i]=V[i-8];
    }
    printf("Elementos da array T:  ");
    for(int i=0; i<16; i++){
        printf("%d", T[i]);
        i<15 ? printf(",  "):printf(".");
    }printf("\n\n");
    return 0;
}