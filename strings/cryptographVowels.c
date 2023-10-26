#include <stdio.h>
#include <string.h>

int criptografa(char *str);
int main(){
	char str[101];
	printf("Type a phrase: \n");
	fgets(str, 101, stdin);
	printf("There is %i vowels in this phrase\n", criptografa(str));
	puts(str);
	return 0;
}
int criptografa(char *str){
	int n=0, i;
	for(i=0; str[i]!='\0'; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
		    str[i]='*';
			n++;
		}
	};
	return n;
}
