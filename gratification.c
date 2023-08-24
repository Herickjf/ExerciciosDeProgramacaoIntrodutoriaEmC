/*. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários de acordo com
o número de horas extras e o número de horas que o funcionário faltou ao trabalho. O
valor do prêmio é obtido pela consulta à tabela que se segue, em que:
H = número de horas extras – (2/3 * (número de horas falta));
Escreva um programa que calcule o valor de H, consulte a tabela e mostre o valor da
gratificação que o funcionário receberá.
H (minutos) Gratificação (R$)
     >= 2400          500,00
1800 ●-----○ 2400     400,00
1200 ●-----○ 1800     300,00
600 ●-----○ 1200      200,00
      < 600           100,00
*/

#include <stdio.h>

int main(){

    float het, hf, hrt, g;

    printf("How many extra hours did you worked?\n");
    scanf("%f", &het);

    while(het < 0){
        printf("Invalid, try again:\n");
        scanf("%f", &het);
    }

    het = het * 60;

    printf("How many hours have you missed?\n");
    scanf("%f", &hf);

    while(hf < 0){
        printf("Invalid, try again:\n");
        scanf("%f", &hf);
    }

    hf = hf * 60;

    hrt = het - ((float) 2/3 * hf);

    if ( hrt >= 2400)
        printf("Gratification: R$ 500,00");
    else if (hrt<2400 && hrt >= 1800)
        printf("Gratification: R$ 400,00");
        else if (hrt<1800 && hrt >= 1200)
            printf("Gratification: R$ 300,00");
            else if (hrt<1200 && hrt >= 600)
                printf("Gratification: R$ 200,00");
                else if (hrt < 600)
                    printf("Gratification: R$ 100,00");
                    else
                        printf("Invalid.");

    return 0;

}

