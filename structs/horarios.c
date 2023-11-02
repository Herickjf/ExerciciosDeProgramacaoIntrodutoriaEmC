#include <stdio.h>

int main(){
    struct time
    {
        int hour;
        int minutes;
        int seconds;
        double teste;
        char letra;
    };

    struct time now;
    now.hour = 11;
    now.minutes = 36;
    now.seconds = 41;
    printf("\n\ntime:  %d:%d:%d\n\n", now.hour, now.minutes, now.seconds);


    struct time after;
    after.hour = now.hour+10;
    after.minutes = now.minutes;
    after.seconds = now.seconds+18;
    after.teste = 55.505 / 123; //é só um valor aleatório a fim de realizar testes
    after.letra = 'a';

    printf("\n%i", after.hour);
    printf("\n%i", after.minutes);
    printf("\n%i", after.seconds);
    printf("\n%f", after.teste);
    printf("\n%c", after.letra);

    return 0;
}
