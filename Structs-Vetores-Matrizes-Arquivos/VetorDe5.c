#include <stdio.h>

int main (){
	
	int i = 0, vetor[5];
	
	for (i = 0; i < 5; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 5; i++){
		printf("%d ", vetor[i]);
	}
	
	
	return 0;
}
