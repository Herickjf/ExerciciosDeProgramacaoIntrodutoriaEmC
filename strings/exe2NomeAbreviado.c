#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int HowManyWords(char nome[MAX]);
void Abbreveate(char nome[MAX], char shortname[MAX], int n);

int main(){
    int n;
    char nome[MAX], shortname[MAX];
        printf("\nNome:  ");
        fgets(nome, MAX, stdin); 
        n = HowManyWords(nome);
        Abbreveate(nome, shortname, n);
        printf("Abreviacao: %s\n", shortname);
    return 0;
}
int HowManyWords(char nome[MAX]){
    //essa funcao deve contar quantas palavras ha no nome.
    int j=1, i;
    for(i=0; nome[i] !='\0'; i++){
        if(nome[i]==' ') j++;
    }
    return j;
}
void Abbreveate(char nome[MAX], char shortname[MAX], int n){
    n--;//quantidade de palavras vira quantidade de espacos
    int j=0, k=0, l=0, i, m=0;// a variavel m eh usada apenas para a condicional da linha 57
    //escreve o primeiro nome
    for(i=0; nome[i]!= ' '; i++, j++){
        if(i==0) 
            shortname[j] = toupper(nome[i]);
        else 
            shortname[j] = nome[i];
        l=i;
    }
    //caso seja mais do que um nome
    if(n>1){
       for(i=l; nome[i]!='\0'; ++i){
            //conta em qual paravra o loop esta passando
            if(nome[i]==' '){
                k++;}

            //abrevia os nomes intermediarios
            if(k<n){
                if(nome[i]==' '){
                    shortname[j]   = ' ';
                    shortname[j+1] = toupper(nome[i+1]);
                    shortname[j+2] = '.';
                    j+=3;
                }
            }
            //adiciona o ultimo sobrenome
            if(k==n){
                for(;nome[i]!='\n'; i++, j++){
                    if(m==0){
                    shortname[j] = toupper(nome[i]);
                    m++;    
                    }
                    else
                        shortname[j] = nome[i];
                    shortname[j+1] ='\0';}
                break;
            }} 
    }else
        //caso seja apenas um sobrenome
        for(; nome[l]!='\0'; l++){
            if(nome[l-1]==' ')
               shortname[l] = toupper(nome[l]); 
            else 
                shortname[l] = nome[l];
        } 
}
