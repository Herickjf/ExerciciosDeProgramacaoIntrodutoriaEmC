//Código de teste de struct, recebe 5 horarios e devolve o que o user pedir.
#include <stdio.h>

struct time{
    int hour;
    int minute;
    int second;
};
int main(){
    struct time list[5];
    void PreencheTime(struct time list[5]);
    void PrintTime(struct time list[5]);

    PreencheTime(list);
    PrintTime(list);

    return 0;
}

void PreencheTime(struct time list[5]){
    printf("Digite os horarios(5 no total):\n\n");
    for(int i=0; i<5; ++i){
        printf("\t(hh:mm:ss)Horario %d:  ", i+1);
        scanf("%d:%d:%d", &list[i].hour, &list[i].minute, &list[i].second);
        printf("\n");
    }
    printf("\n\n");
}
void PrintTime(struct time list[5]){
    int qual, a;
    
    do{
        printf("\nEscolha qual horario voce quer ver(1-5): ");
        scanf("%d", &qual);

        if(qual==1 || qual==2 || qual==3 || qual==4 || qual==5){
            printf("\n\nHorario %d  ->  %d:%d:%d", qual, list[qual-1].hour, 
            list[qual-1].minute, list[qual-1].second);
            printf("\n\nDigite 1 para escolher outro horario, ou qualquer outra tecla para sair: ");
            scanf("%d", &a);
        }
        else{
            printf("\n\nOpcao invalida.");
            printf("\n\nDigite 1 para escolher outro horario, ou qualquer outra tecla para sair: ");
            scanf("%d", &a);
        }
    }while(a==1);
}
