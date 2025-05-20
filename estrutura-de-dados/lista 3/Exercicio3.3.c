#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, y, z, soma;
	
	printf("Digite tres numeros para soma-los: \n");
	scanf("%d %d %d", &x, &y, &z);
	
	soma = x + y + z;
	
	printf("Total: %d", soma);
	
	return 0;
		
}
