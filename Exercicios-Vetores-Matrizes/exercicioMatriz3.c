#include <stdio.h>

int main(){
	
	int matriz[3][3];
	int somaColuna[3] = {0, 0, 0};
	int i,j;
	
	printf("Digite os valores alocados na matriz:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Linha %d Coluna %d : ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nA Matriz ficou assim: \n\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%3.d", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			somaColuna[j] += matriz[i][j];
		}
	}
	
	for (i = 0; i < 3; i++){
		printf("\nSoma da coluna %d do vetor: %d\n", i, somaColuna[i]);
	}
	
	
	
	return 0;
}
