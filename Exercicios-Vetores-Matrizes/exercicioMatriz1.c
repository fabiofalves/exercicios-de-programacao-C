#include <stdio.h>

int main(){
	
	int linha, coluna, soma = 0, matriz[3][3];
	
	for (linha = 0; linha < 3; linha++){
		for (coluna = 0; coluna < 3; coluna++){
			printf("Digite os valores alocados na matriz [%d] : [%d]", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	for (linha = 0; linha < 3; linha++){
		soma += matriz[linha][2 - linha];
	}
	
	printf("A soma da diagonal secundaria da matriz e: %d", soma);
	
	
	return 0;
}
