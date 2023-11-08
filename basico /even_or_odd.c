#include <stdio.h>

int main() {
	int n;
	printf("Type a number?\n");
	scanf("%d", &n);
	if(n!=0)
		if( n%2 == 0)
			printf("%d is even.", n);
		else 
			printf("%d is odd.", n);
	else 
		printf("%d is neither even nor odd", n);
	return 0;	
}
