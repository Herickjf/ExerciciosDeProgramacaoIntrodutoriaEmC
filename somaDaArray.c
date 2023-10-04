#include <stdio.h>

int somaDosElementos(int ar[], int n);
float media(int soma, int n);
int acimaDaMedia(int ar[],int n, float media);
void impares(int ar[], int n);

int main(){

	int n, i=0;

	printf("Digite o numero de elementos do seu vetor: ");
	scanf("%d", &n);
	
	int ar[n];
	printf("\n\nAgora, digite os elementos da array <separados por espaco ou por enter>:\n");
	for(; i<n; i++){
		scanf("%d", &ar[i]);
		//printf("%d", ar[i]);
	}

	printf("\n\nSoma dos elementos da array = %d.\n", somaDosElementos(ar, n));
    printf("\nMedia dos elementos da array = %.2f.\n", media(somaDosElementos(ar, n), n));
	printf("\nElementos acima da media da array = %d.\n", acimaDaMedia(ar, n, media(somaDosElementos(ar, n), n)));
	impares(ar,n);

	return 0;
}

int somaDosElementos(int ar[], int n){

	int soma = 0;
	int i = 0;

	for(; i<n; ++i){
		soma += ar[i];
	}

	return soma;
}

float media(int soma, int n){
	float media;
	media = soma / n;
    return media;

}

int acimaDaMedia(int ar[],int n, float media){
	int i=0;
	int maiores = 0;
	for(; i<n; i++){
		
		maiores += ar[i]>media ? 1 : 0;
	}
	return maiores;
}

void impares(int ar[], int n){
	int i=0, contador;
	
	for(; i<n; i++){
		int a = ar[i];
		a *= i%2 ? 15 : 1;
		if (i%2!=0)
			printf("\nLinha: %d\nElemento: %d\nMultiplicado por 15 eh = %d", i, ar[i], a);
	}
  printf("\n");
}
