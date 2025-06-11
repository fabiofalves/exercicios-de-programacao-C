#include <stdio.h>

void main(){
	
	int matriz[4][4], i, j;
	
	
	printf("Informe os valores da matriz: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nDiagonal principal:\n");
	
	for(i = 0; i < 4; i++){
		printf("%d ", matriz[i][i]);
	}
	
}
	

