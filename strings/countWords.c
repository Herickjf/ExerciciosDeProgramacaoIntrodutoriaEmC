#include <stdio.h>
#include <string.h>

int conta(const char *str);
int main(){
	char str[51];
	printf("Type a phrase: \n");
	fgets(str, 51, stdin);
	printf("There is %i words in this phrase\n", conta(str));
	return 0;
}
int conta(const char *str){
	int n=0, i;
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==' '){
			n++;
		}
	}n++;
	return n;
}
