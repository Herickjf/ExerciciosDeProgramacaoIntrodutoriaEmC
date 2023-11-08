#include <stdio.h>
#include <string.h>
#include <ctype.h>

void GeraLogin(char nome[], char login[]);

int main(){
    char nome[101], login[50];
    puts("\nDigite seu nome: ");
    scanf("%[^\n]%*c", nome);
    GeraLogin(nome, login);
    printf("Login: %s", login);
    return 0;
}
void GeraLogin(char nome[], char login[]){
    int j=0, k=0, i, n, m=0;
    //conta quantos sobrenomes ha e atribue a j;
    for(i=0; nome[i]!='\0'; ++i)
        if(nome[i]==' ')j++;
    //percorre a string nome
    for(i=0, n=0; nome[i]!='\0'; ++i){
        //atribue a primeira letra de nome a primeira letra de login, incrementa n
        if(i==0){
            login[n] = tolower(nome[i]);
            n++;
        }
        //conta em qual nome/sobrenome o loop esta passando
        if(nome[i]==' '){
            k++;
            i++;
        }
        //para o caso de mais de um sobrenome
        if(j>1){
            //para o segundo nome, com essa condicao m para so entrar no if na primeira letra
            if(k==1 && m==0){
            login[n] = tolower(nome[i]);
            n++;
            m++;
            }
            //para o ultimo nome
            if(k==j){
                login[n] = tolower(nome[i]);
                n++;
            }
        }
        //para o caso de um sobrenome, apenas
        else if(k==j){
            login[n] = tolower(nome[i]);
            n++;
        }   
    }
}
