#include <stdio.h> 

int main() 
{
	
	int n;
	printf("How many grades do ya have?\n");
	scanf("%d", &n);
	
	float x[n], media;
	for(int i=0; i < n; i++)
	{
		printf("Type a grade:\n");
		scanf("%f", &x[i]);
		
		media = media + x[i];
	}
	
	media = media / n;
	
	printf("Your average is equals %.2f\n", media);
	return 0;
	
}
