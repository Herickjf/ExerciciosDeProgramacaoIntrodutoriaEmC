#include <stdio.h>

int main(){
	int  i=0;
	float b=2.5;
	int *p;
	
	printf("Valor de i: %d\n", i);
	printf("Valor de b: %f\n", b);
	printf("endereco de i: %p\n", &i);
	printf("endereco de b: %p\n", &b);
	
	p = &i;
	printf("Valor de p: %d\n", *p);
	
	*p =5;
	printf("Agora, o valor de i eh: %d\n", i);
	
	return 0;
}
