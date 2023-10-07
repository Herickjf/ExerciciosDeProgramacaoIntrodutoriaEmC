/*
5. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N 
e retorna o valor de S. Escreva também uma função para mostrar a sequência 
no formato a presentado abaixo.
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(N²+1)/(N+3)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float returnS(int N);
int main(){
    int N;
    srand (time(NULL));
    N = rand() % 10;
    printf("N = %d", N);
    returnS(N);
    return 0;
} 
float returnS(int N){
    float S=0;
    printf("\n\nS = ");
    for(int i=1; i<=N; i++){
        int a = pow(i, 2)+1;
        printf("%d/%d  ", a, i+3);
        if(i<N)printf("+  ");
        S += (pow(i, 2)+1)/ i+3;
    }
    printf("\n\nS = %.2f", S);
    return S;
}
