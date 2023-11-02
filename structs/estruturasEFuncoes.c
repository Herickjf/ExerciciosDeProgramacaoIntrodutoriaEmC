#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(){
    struct time test(struct time x);

    struct time now;
    now.hour = 12;
    now.minutes = 02;
    now.seconds = 10;

    struct time next;
    next = test(now);

    printf("\n%d:%d:%d\n\n", next.hour, next.minutes, next.seconds);

    return 0; 
}

struct time test(struct time x){

    printf("\n\n%d:%d:%d\n", x.hour, x.minutes, x.seconds);

    //isso não precisa fazer sentido algum. É apenas um teste.
    x.hour +=5;
    x.minutes += 20;
    x.seconds += 30;

    return x;
}
