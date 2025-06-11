#include <stdio.h>

void main(){
	int vetor[5], i, j, menor = 0, salvo = 0;

	printf("Insira os valores do vetor: \n");	
	for (i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < 5 - 1; i++){
			
		for (j = 0; j < 5 - i - 1; j++){
			
			if (vetor[j] > vetor[j + 1]){
			salvo = vetor[j];
			vetor[j] = vetor[j + 1];
			vetor[j + 1] = salvo;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("%d", vetor[i]);
	}
}
