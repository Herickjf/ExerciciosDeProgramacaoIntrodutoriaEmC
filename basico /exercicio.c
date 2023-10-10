#include <stdio.h>

int caracter(char c){
    printf("%c\n", c);
    return 0;
}

int main(){

    int n;
    char c;

    printf("type a caracter and a number:\n");
    scanf("%c %i", &c, &n);

    for(int i=0; i<n; i++){
        caracter(c);
    }

    return 0;
}
