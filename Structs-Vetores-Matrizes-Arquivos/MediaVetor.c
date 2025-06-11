#include <stdio.h>

void main(){
	int vetor[5], i, soma = 0;
	double media;
	
	printf("Insira os valores do vetor: \n");	
	for (i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < 5; i++){
		soma += vetor[i];
	}
	
	media = soma / 5;
	
	printf("Media = %.2f", media);

}
