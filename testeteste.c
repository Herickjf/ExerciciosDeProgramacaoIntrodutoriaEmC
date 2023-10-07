#include <stdio.h>

int main(){
    char a[10];
    int b[10], tamaA, tamaB, tamaC, tamaD;
    float c[10];
    double d[10];
    tamaA = sizeof(a)/sizeof(char);
    tamaB = sizeof(b)/sizeof(int);
    tamaC = sizeof(c)/sizeof(float);
    tamaD = sizeof(d)/sizeof(double);
    printf("Tamanho de A: %d\nTamanho de B: %d\nTamanho de C: %d\nTamanho de D: %d\n\n\n", tamaA, tamaB, tamaC, tamaD);
    printf("Tamanho de char: %d\nTamanho de int: %d\nTamanho de float: %d\nTamanho de double: %d\n\n\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
    printf("Tamanho de a: %d\nTamanho de b: %d\nTamanho de c: %d\nTamanho de d: %d\n\n\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}