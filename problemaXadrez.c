//https://www.beecrowd.com.br/judge/pt/problems/view/2787

#include <stdio.h>

int pretooubranco(int l, int c){
    if((l%2 == 0 && c%2 != 0) || (l%2!=0 && c%2==0))
        return 0;
    else
        return 1;
}

int main(){
    int l, c;
    scanf("%d %d", &l, &c);
    printf("%d\n", pretooubranco(l,c));
    return 0;
}
