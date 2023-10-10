#include <stdio.h>

void Troca(int *x, int *y){
	int aux = *x;
	
	*x = *y;
	*y = aux;
}

int main(){
	int a=3, b=5;
	
	printf("Antes:  a=%d, b=%d\n", a, b);
	Troca(&a, &b);
	printf("Depois: a=%d, b=%d", a, b);
	
	return 0;
}
