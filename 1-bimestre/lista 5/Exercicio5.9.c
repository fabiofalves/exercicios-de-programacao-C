#include <stdio.h>

int main(){
	
	int N=0, i, menor, maior;
	
	printf("Digite 10 numeros:\n");
	scanf("%d", &N);
	
	maior = N;
	menor = N;
	
	for (i = 1; i < 10; i++){
		scanf("%d", &N);
		if (N < menor){
			menor = N;
		}
		if (N > maior){
			maior = N;
		}
	}
	
	printf("\nMaior numero: %d\nMenor numero: %d\n", maior, menor);
	
	return 0;
} 
