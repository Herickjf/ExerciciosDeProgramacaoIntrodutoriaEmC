/*Faça um programa que leia a idade de 2 homens e 2 mulheres (considere que a 
idade dos homens será sempre diferente, assim como das mulheres). Calcule e 
escreva a soma das idades do homem mais velho com a mulher mais nova, e o 
produto das idades do homem mais novo com a mulher mais velha.*/

#include <stdio.h>

int main() {
    //declarar variaveis
    int iddh1, iddh2, iddm1, iddm2, soma, produto;
    
    //receber dados
    printf("To the 1st man, type the age:\n");
    scanf("%i%*c", &iddh1);

    printf("To the 2nd man, type the age:\n");
    scanf("%i%*c", &iddh2);

    while (iddh1==iddh2){
        printf("Type a different age!!! To the 2nd man, type the age:\n");
    scanf("%i%*c", &iddh2);
    }

    printf("To the 1st woman, type the age:\n");
    scanf("%i%*c", &iddm1);

    printf("To the 2nd woman, type the age:\n");
    scanf("%i%*c", &iddm2);

    while (iddm1==iddm2){
        printf("Type a different age!!! To the 2nd woman, type the age:\n");
    scanf("%i%*c", &iddm2);
    }

    //soma 
    if(iddh1>iddh2 && iddm1>iddm2)
        soma = iddh1 + iddm2;
    else if (iddh2 > iddh1 && iddm2>iddm1)
            soma = iddh2 + iddm1;
        else if (iddh1>iddh2 && iddm1<iddm2)
            soma=iddh1 + iddm1;
            else if(iddh2 > iddh1 && iddm2<iddm1)
                soma = iddh2 + iddm2;
                else
                    printf("Error.\n");
    
    //multiplicação
    if(iddh1>iddh2 && iddm1>iddm2)
        produto = iddh2 * iddm1;
    else if (iddh2 > iddh1 && iddm2>iddm1)
            produto = iddh1 * iddm2;
        else if (iddh1>iddh2 && iddm1<iddm2)
            produto=iddh2 * iddm2;
            else if(iddh2 > iddh1 && iddm2<iddm1)
                produto = iddh1 * iddm1;
                else
                    printf("Error.\n");
    
    printf("The sum of the age of the oldest man and youngest woman equals %i.\n"
           "The multiplication of the age of the yungest man and oldest man equals %i.", soma, produto);

    return 0;
}
