#include <stdio.h>

void MM(int *A, int *B){
	if(A>B){
		int *x, *y;
		*x = *A;
		*y = *B;
		
		*x = *B;
		*y = *A;
	}
}

int main(){
	int A, B;
	
	scanf("%d %d", &A, &B);
	printf("Antes:  A= %i,  B= %i\n", A, B);
	MM(&A, &B);
	printf("Depois: A= %i,  B= %i\n", A, B);
	
	return 0;
}
