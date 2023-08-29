#include<stdio.h>

int main(){

    int soma=0, i, n, m;

    for (i=10, n=480; i<40 ; i++, n = n-5){
        m = n / i;
        if (i==10) {
                soma = soma + m;
        }
        else
            soma = (soma + m) * (-1);
        printf("+ 2^%d / %d ", n, i);
    }
    printf(" = %d.", soma);


    return 0;
}
