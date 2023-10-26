#include <stdio.h>
#include <string.h>

int compara(const char *str, const char c);
int main(){
	char str[51], c;
	printf("Type a phrase: \n");
	fgets(str, 51, stdin);
	printf("Type a character: ");
	c = getchar();
	printf("%c appears %i times in the phrase.\n", c, compara(str, c));
	return 0;
}

int compara(const char *str, const char c){
	int n=0, i;
	for(i=0; str[i]!='\0'; i++){
		if(str[i]== c){
			n++;
		}
	}
	return n;
}

