#include <stdio.h>

void main(){
	
	int matriz[4][4] = {0};
	int i,j;
	
	printf("\nMatriz: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++){
		matriz[i][i] = 1;
	}
	
	printf("\nMatriz modificada: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}
