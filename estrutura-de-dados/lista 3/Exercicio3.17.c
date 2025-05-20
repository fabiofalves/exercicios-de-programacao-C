#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("Complemento bit a bit de %d: %d", x, ~x);
	
	return 0;
}
