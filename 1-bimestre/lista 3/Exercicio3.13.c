#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a, b;
	double h;
	
	printf("Digite o valor dos catetos A e B: \n");
	scanf("%d %d", &a, &b);
	
	h = sqrt((a*a) + (b*b));
	
	printf("Resultado: %.2f", h);
	
	return 0;
}
