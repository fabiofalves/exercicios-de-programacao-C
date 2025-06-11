#include <stdio.h>

void main(){
	
	int matriz[4][4];
	int i,j;
	
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if(i == 3){
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = 0;
			}
		}
	}
	
	printf("\nMatriz: \n");
	for (i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}
