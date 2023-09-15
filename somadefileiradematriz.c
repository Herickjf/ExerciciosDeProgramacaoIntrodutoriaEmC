#include <stdio.h>

int main(){
    
    int l, i;
    char operacao;
    float n[12][12], soma=0, media;
    
    scanf("%i", &l);
    scanf(" %c", &operacao);

    //definição dos valores
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &n[i][j]);
        }
    }

    //cálculo da soma
    for(i=0;i<=11; i++){
        soma += n[l][i];
    }

    //cálculo da media
    media = soma/12;


  //Escolha 'S' para soma ou 'M' para media 
    switch(operacao){
        case 'S': 
            printf("%.1f\n", soma);
            break;
        case 'M': 
            printf("%.1f\n", media);
            break;
        default: printf("Error\n");
    }
    
    return 0;
}
