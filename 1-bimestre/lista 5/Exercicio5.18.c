#include <stdio.h>

int main(){
	
	int N, i, divisores=0;
	
	do {
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &N);
	} while (N < 1);
	
	for (i = 2; i < N; i++){
		if (N%i == 0){
			divisores++;
			break;
		}
	}
	
	if (divisores > 0 || N == 1){
		printf("\nNumero nao primo\n");
	}
	else {
		printf("\nNumero primo\n");
	}
	
	return 0;
}
