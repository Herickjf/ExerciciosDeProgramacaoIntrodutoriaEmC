#include<stdio.h>

int main(){

    int soma=0, i, n, m, o;

    printf("Type how many terms, after the 10th, do you want to be calculated:\n");
    scanf("%d", &o);

    for (i=10, n=480; i<10+o ; i++, n = n-5){
        m = n / i;
        if (i==10) {
                soma = soma + m;
        }
        else
            soma = (soma + m) * (-1);
        printf("+%d / %d ", n, i);
    }
    printf(" = %d.", soma);


    return 0;
}
