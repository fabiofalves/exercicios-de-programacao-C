#include <stdio.h>



void ordenaMatriz(int matriz[][]){
	
	int i, j, k, temp;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4 - 1; j++ ){
			for (k = 0; k < 4 - j -1; k++){
				if(matriz[i][k] > matriz[i][k+1]){
					temp = matriz[i][k];
					matriz[i][k] = matriz[i][k+1];
					matriz[i][k+1] = temp;
				}
			}
			
		}
 	}
}

void imprimeMatriz(int matriz[][]){
	
	int i, j;
	
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}

void main(){
	
	int matriz[4][4], i, j;
	
	
	printf("Informe os valores entre 0 e 9 da matriz: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz: \n");
	imprimeMatriz(matriz);
	
	ordenaMatriz(matriz);
	
	printf("\nMatriz com as linhas ordenadas: \n");
	imprimeMatriz(matriz);
}
