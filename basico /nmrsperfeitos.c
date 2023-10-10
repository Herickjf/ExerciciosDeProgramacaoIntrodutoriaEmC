/*Escreva um programa que leia um número inteiro maior que zero e mostre se o número
é perfeito ou não. Sabe-se que um número é perfeito quando ele é igual à soma dos seus
divisores (exceto ele mesmo).
Por exemplo, 6 é perfeito pois 6 = 1+2+3.
Outros exemplos de números perfeitos: 28, 496 e 8128.
*/

#include <stdio.h>

int main() {

    int n, i, soma=0;

    printf("Type a whole number:\n");
    scanf("%d", &n);

    for(i=n-1; i>0; i--) {
        if( n % i == 0)
            soma = soma + i;
    }
    
    if(n == soma)
        printf("%d is a perfect number!\n", n);
    else 
        printf("%d is not a perfect number!\n", n);

    return 0;
}
