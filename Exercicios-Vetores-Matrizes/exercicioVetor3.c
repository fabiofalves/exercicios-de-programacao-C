#include <stdio.h>

int main(){
	
		int i = 0, soma = 0, valores[5];
		float mediaVetores = 0.0;
	
	for (i = 0; i < 5; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &valores[i]);
	}
	for (i = 0; i < 5; i++){
		soma += valores[i];
	}
	
	mediaVetores = soma / 5.0;
	
	printf("A media dos vetores e: %.2f", mediaVetores);
	
	return 0;
}


