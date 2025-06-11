#include <stdio.h>

void main(){
	
	int vetor[5];
	int i;
	
	printf("Informe os numeros do vetor: \n");
	for(i = 0; i < 5; i++){
		scanf("%i", &vetor[i]);
	}
	
	for(i=0; i < 5; i++){
		if(vetor[i] == 0){
			printf("Numero 0 encontrado na posicao: %i", i);
		}
	}
	
	
}
