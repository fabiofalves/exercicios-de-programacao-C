#include <stdio.h>

int main(){
	
	int i, N, qntnumeros, maior, qntdmaior;
	
	printf("Digite quantos numeros voce quer informar: ");
	scanf("%d", &qntnumeros);
	
	for (i=1; i<=qntnumeros; i++){
		printf("Numero %d: \n", i);
		scanf("%d", &N);
		if(N > maior){
			maior = N;
			qntdmaior++;
		}
	}
	
	printf("Maior numero digitado: %d\nQuantidade de vezes que o maior numero foi lido: %d\n", maior, qntdmaior);
	
	return 0;
}
