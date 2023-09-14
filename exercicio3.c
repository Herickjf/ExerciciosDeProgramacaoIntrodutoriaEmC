#include <stdio.h>

int maior(int a, int b, int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
            return b;
            else
                return c;
}

int main(){

    int a, b, c;

    printf("type three numbers:\n");
    scanf("%i %i %i", &a, &b, &c);

    printf("the biggest one is --> %i", maior(a,b,c));

    return 0;
}
