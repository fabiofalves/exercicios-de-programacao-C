#include <stdio.h>

int main(){
	
	int N = 0, cont = 0, soma = 0;
	
	for (cont = 0; cont < 10; cont++){
		printf("Digite um numero: \n");
		scanf("%d", &N);
		soma = soma + N;
	}
	printf("\nSoma dos numeros = %d\n", soma);
	
	return 0;
}
