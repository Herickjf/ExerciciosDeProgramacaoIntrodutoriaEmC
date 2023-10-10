#include <stdio.h>

int funcao(int a, int b, int c){
    int soma=0, i, j;
    for( i= b>c ? b:c, j = b<c ? b:c; i>=j ;i--){
        if(i%a == 0){
            soma+= i;
        }
    }
    return soma;
}

int main(){

    int a, b, c;

    do {
        printf("type three numbers:\n");
        scanf("%i %i %i", &a, &b, &c);
    }while(a<1);


    printf("%i", funcao(a,b,c));

}

