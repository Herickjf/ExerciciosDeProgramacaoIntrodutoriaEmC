#include<stdio.h>

int main(){

    int somah=0,somam=0, somaam=0, mediaam, menorA, maiorA, i, a;
    char sexo;

    for(i=0; i<=15; i++){
        printf("Type the high: ");
        scanf("%i%*c", &a);
        printf("\nType the sex (f) or (m): ");
        scanf("%c", &sexo);

        switch(sexo){
        case 'm':
            somah += 1;
            break;
        case 'f':
            somam = somam + 1;
            somaam += a;


        }
    }


    return 0;
}
