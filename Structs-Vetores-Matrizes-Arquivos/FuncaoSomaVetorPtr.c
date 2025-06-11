#include <stdio.h>

void somaVetor (int vetor[], int *soma){
	
	int i;
	
	for (i = 0; i < 5; i++){
		*soma += vetor[i];
	}
	
}

void main(){
	
	int soma = 0, i;
	int vetor[5] = {5,7,9,1,5};
	
	somaVetor(vetor,&soma);
	
	printf("Soma = %d", soma);
}
