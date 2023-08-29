#include <stdio.h>
#include <math.h>

int main (){

    int soma=0, i, n, m;

    for (i=10, n=1; i>=1 ; i--, n++){
        m = pow(2,n)/ i;
        soma = soma + m;
        printf("+ 2^%d / %d ", n, i);
    }
    printf(" = %d.", soma);

    return 0;
}
