#include <stdio.h>

int main(){
	
	int N, i=0, maior=0, menor=0;
	
	do {
		printf("Digite um numero inteiro: ");
		scanf("%d", &N);
		
		if(N > maior){
			maior = N;
		}
		if(N < menor){
			menor = N;
		}
	} while(N >= 0);
	
	printf("Maior numero digitado: %d\nMenor numero digitado: %d\n",maior, menor);
	
	return 0;
}
