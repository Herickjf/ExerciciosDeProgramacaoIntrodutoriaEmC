/*
1.1 Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h (as medidas em centímetros dos 
dois ladosde um retângulo) e devolve, em parâmetros, A e P respectivamente, a área (b*h) e o perímetro (2*(b+h)) 
desteretângulo. Mostre os resultados na função main().

1.2 Altere a função anterior para que além de devolver osparâmetros A e P, respectivamente a área e o perímetro 
desteretângulo, retorne 1 caso o retângulo seja um quadrado, ou 0 caso contrário.
*/

#include <stdio.h>

int Troca(float *b, float *h);

int main(){
    float b, h;
    printf("Type two numbers:  ");
    scanf("%f %f", &b, &h);
    if(Troca(&b, &h))
        printf("\n\nQuadrado.\n\n");
    else printf("\n\nRetângulo.\n\n");
    printf("Área      =%.2f\nPerímetro =  %.2f", b, h);

    return 0;
}

int Troca(float *b, float *h){
    float a;
    if(*b == *h)
        return 1;
    else
        return 0;
    a  = *b;
    *b = *b*(*h);
    *h = 2*(a + *h);
}   
