//resolução desse exercicio: https://www.beecrowd.com.br/judge/pt/problems/view/3048

#include <stdio.h>

int main(){
    int n, a, b = 0, c=0;
    scanf("%d", &n);
    
    do {
        scanf("%d", &a);
        if(a!=b){
            c+=1;
        }
        b = a;
        
        n-=1;
    }while (n>0);
    printf("%d\n", c);
    return 0;
}
