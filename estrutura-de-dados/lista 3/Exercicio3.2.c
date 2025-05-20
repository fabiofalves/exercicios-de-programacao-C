#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, quintaparte;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	
	quintaparte = x / 5;
	
	printf("A quinta parte de %d e %d \n", x, quintaparte);
	
	return 0;
	
}
