#include <stdio.h>

int maior(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){

    int a, b;

    printf("type two numbers:\n");
    scanf("%i %i", &a, &b);

    printf("the biggest one is --> %i", maior(a,b));

    return 0;
}
