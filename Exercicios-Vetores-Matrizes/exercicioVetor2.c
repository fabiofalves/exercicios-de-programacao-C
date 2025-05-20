#include <stdio.h>

int main (){
	
	int i = 0, j = 5, numeros[5];
	
	for (i = 0; i < 6; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &numeros[i]);
	}
	
	
	while(j < 6 && j >= 0){
		printf("%d ", numeros[j]);
		j--;
	}

	
	
	
	return 0;
}
