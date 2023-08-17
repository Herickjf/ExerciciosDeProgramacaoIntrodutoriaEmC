#include <stdio.h>

int main () {
	
	int n, sum=0, q=0, bigger, smaller;
	float average = 0;
	
	printf("Lemme explain it to ya. Since you dont type 0, Ill still asking you for a hole number. When you do type 0, Ill show ya the sum, average, bigger and smaller of the numbers u typed. So, type a number:\n");
	scanf("%i", &n);
	
	while( n!= 0) {
		printf("Type a number:\n");
		scanf("%i", &n);
		
		sum = sum + n;
				
		q = q + 1;
	}
	
	average = sum / q;
	printf("Wow, u finally typed 0. The sum of the numbers u typed is equals %i.\nAnd the average is equals %f.", sum, average);
	
	return 0;
}
