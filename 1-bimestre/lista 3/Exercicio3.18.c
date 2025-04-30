#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, y, esquerda, direita;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &x, &y);
	
	esquerda = x << y;
	direita = x >> y;
	
	printf("Deslocamento de bits a esquerda de %d por %d: %d\nDeslocamento de bits a direita de %d por %d: %d\n", x, y, esquerda, x, y, direita);
	
	return 0;
}
