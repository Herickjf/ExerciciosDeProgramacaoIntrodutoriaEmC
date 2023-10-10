#include <stdio.h>

int main (){
	
	float n, m, o;
	
	printf("Type a number:\n");
	scanf("%f", &n);
	
	printf("Type another one:\n");
	scanf("%f", &m);
	
	printf("One more, for now:\n");
	scanf("%f", &o);
	
	if (n > m && n > o)
		printf("%f is the bigger one!\n", n);
		
	else 
		if (m > n && m > o)
			printf("%.0f is the bigguer one!\n", m);
		else 
			printf("%.0f is the bigguer one!\n", o);
	
	if (n < m && n < o)
		printf("And %.0f is the smaller one!\n", n);
		
	else 
		if (m < n && m < o)
			printf("And %.0f is the smaller one!\n", m);
		else 
			printf("And %.0f is the smaller one!\n", o);
	
	return 0;
	
}
