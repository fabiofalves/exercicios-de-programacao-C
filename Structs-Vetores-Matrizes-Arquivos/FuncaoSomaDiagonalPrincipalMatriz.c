#include <stdio.h>

int somaDiagonal(int matriz[4][4]){
	
	int i, soma = 0;
	
	for(i = 0; i < 4; i++){
		soma += matriz[i][i];
	}
	
	return soma;
}

void imprimeMatriz(int matriz[4][4]){
	
	int i,j;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}

void main(){
	
	int matriz[4][4];
	int i,j, soma = 0;
	
	printf("Digite os numeros da matriz:\n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			scanf("%d ", &matriz[i][j]);
		}
	}
	
	imprimeMatriz(matriz);
	
	soma = somaDiagonal(matriz);
	
	printf("\nSoma da diagonal principal da matriz: %d\n", soma);
	
}
