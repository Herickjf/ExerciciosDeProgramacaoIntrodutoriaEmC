//Escrever um código que converta qualquer quantidade de segundos em horas, minutos e segundos.

#include <stdio.h>

int main () {
    //definir variáeis
    int  s, hr, min, sec;

    s = -1;

    //Coleta de dados
     while (s < 0) {

        printf("Digite um tempo em segundos: \n");
        scanf("%d", &s);
        if (s < 0)
        {
                printf("Ops, o tempo em segundos que voce informou eh invalido. Tente novamente com um numero maior que 0.\n");
        }


     }

    //Fazer os calculos
    hr = s / 3600;
    min = (s % 3600) / 60;
    sec = (s % 3600) % 60;



    //Devolver o resultado
    printf("Muito bem, o tempo em segundos que voce informou equivale a %d horas, %d minutos e %d segundos!", hr, min, sec);

    return 0;
}
