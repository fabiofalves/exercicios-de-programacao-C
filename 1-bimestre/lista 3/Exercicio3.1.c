#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, suc, ant;
	
	printf("Digite um numero: \n");
	scanf("%d", &x);
	
	suc = x + 1;
	ant = x - 1;
	
	printf("Sucessor: %d\n", suc);
	printf("Antecessor: %d\n", ant);
	
	return 0;

}
