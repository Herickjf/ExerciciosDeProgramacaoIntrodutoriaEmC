/*
Obter um vetor V de 20 posições. Mostrar o maior elemento dovetor V e a sua posição
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int V[20], maior=0, linha;
    srand(time(NULL));
    printf("Elementos da array V:  ");
    for(int i=0; i<20; i++){
        V[i] = rand() % 100; 
        printf("%d", V[i]);
        i<19 ? printf(",  "):printf(".");
        
        if(V[i]>maior){
            maior=V[i];
            linha=i+1;
        };
    }printf("\n\n");
    printf("Maior:   %d;\nLinha   :%d.", maior, linha);
    return 0;
}