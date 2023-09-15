#include <stdio.h>

int equivalente(char a){
    int b;
    b = a - 64;
    return b;
}

int main(){
    char a;
    int b;
    scanf("%c", &a);
    printf("%d\n", equivalente(a));
    
    return 0;
}
