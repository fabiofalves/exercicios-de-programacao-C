#include <stdio.h>

int main(){
	
	int N=0, i=1;
	
	do {
		printf("Digite um numero positivo: \n");
		scanf("%d", &N);
		if (N < 0){
			printf("Numero invalido, digite um numero positivo\n\n");
		}
	} while (N < 0);

	while (i <= N){
		if(N%i == 0){
			printf("Divisor: %d\n", i);
		}
		i++;
	}

	return 0;  
	
}
