//Faça um programa para ler 3 valores e escrever a soma dos 2 maiores. Considere que o usuário não informar valores iguais.

#include <stdio.h>

int main(){
	
	float n1, n2, n3, soma;
	
	printf("Type 3 different values to get the sum of the two biggers:\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	while (n1 == n2 || n2 == n3 || n1 == n3) {
		printf("Did you even read that? I've said THREE DIFFERENT VALUES!\nTry Again:\n");
		scanf("%f %f %f", &n1, &n2, &n3);
	}
	
	if (n1>n2 && n2 >n3)
		soma = n1 + n2;
	
	else 
		if(n2>n1 && n1>n3)
			soma = n1 + n2;
			else
				if (n2>n3 && n3>n1)
					soma = n1 + n2;
				else 
					if(n3>n2 && n2>n1)
						soma = n2 + n3;
					else
						if (n1>n3 && n3>n2)
							soma = n1 + n3;
						else 
							if (n3>n1 && n1>n2)
								soma = n1 + n3;
							else
								printf("Sorry");
					
			
	printf("The sum of the two biggers values is equals %.2f!", soma);
	
	return 0;
	
	
}


