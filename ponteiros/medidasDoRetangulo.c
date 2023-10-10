/* Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h (as medidas em centímetros dos dois ladosde um retângulo) e devolve, em parâmetros, A e Prespectivamente, a área (b*h) e o perímetro (2*(b+h)) desteretângulo. Mostre os resultados na função main().*/

#include <stdio.h>

void Troca(float *base, float *altura){
    float A, P;
    A = ((*base)*(*altura));
    P = (2*(*base+*altura));

    *base = A;
    *altura = P;
}

int main(){
    float b, h;

    //receber variaveis:
    printf("Digite a base e a altura do seu retângulo:\n");
    scanf("%f %f", &b, &h);

    Troca(&b,&h);  

    printf("Area = %.2f.\nPeritmetro = %.2f.\n", b, h);

    return 0;
}
