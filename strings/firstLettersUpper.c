#include <stdio.h>
#include <string.h>

void UpperPhrase(char phrase[201]);
int main(){
    char phrase[201];
    printf("Type a phrase: \n\n");
    fgets(phrase, 201, stdin);
    printf("\n\n");
    UpperPhrase(phrase);

    
    return 0;
}

void UpperPhrase(char phrase[201]){
    if(phrase[0]<=122 && phrase[0]>=97) phrase[0] -= 32;
    int i;
    for(i=1; phrase[i] != '\0'; i++){
        if(phrase[i] == ' ') {
            if (phrase[i+1]<=122 && phrase[i+1]>=97)
            phrase[i+1]-=32;
            }
        
    }puts(phrase);
}
