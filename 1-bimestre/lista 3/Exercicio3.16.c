#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, multiplicacao, divisao;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	multiplicacao = x << 1;
	divisao = x >> 1;
	
	printf("Multiplicacao por 2: %d\nDivisao por 2: %d\n", multiplicacao, divisao);
	
	return 0;
}
