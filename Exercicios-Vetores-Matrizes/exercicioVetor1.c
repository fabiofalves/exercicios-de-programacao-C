#include <stdio.h>

int main (){
	
	int i = 0, numeros[5];
	
	for (i = 0; i < 6; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &numeros[i]);
	}
	for (i = 0; i < 6; i++){
		printf("%d ", numeros [i]);
	}
	
	
	return 0;
}
