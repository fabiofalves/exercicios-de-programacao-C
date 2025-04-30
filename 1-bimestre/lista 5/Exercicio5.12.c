#include <stdio.h>

int main(){
	
	int N=0, i=1, somadivisores=0;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &N);
	
	while (i < N){
		if(N%i == 0){
			printf("\nDivisor: %d\n", i);
			somadivisores += i;
		}
		i++;
	}
	printf("\nSoma dos divisores: %d", somadivisores);

	return 0;  
	
}
