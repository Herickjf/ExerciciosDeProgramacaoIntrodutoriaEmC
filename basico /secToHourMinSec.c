/*
Escreva uma função que receba um numero inteiro positivo
representando os segundos e converta-o para horas, minutos
e segundos.
*/

#include <stdio.h>

void secToHourMinSec(int sec);
int main(){
    int sec;
    printf("Type the a number for seconds:  ");
    scanf("%d", &sec);
    secToHourMinSec(sec);
    return 0;
}
void secToHourMinSec(int sec){
    int hr, min;
    hr  = sec/3600;
    min = (sec%3600)/60;
    sec = (sec%3600)%60;

    printf("\n\n%d hrs, %d min and %d sec.\n", hr, min, sec);
}
