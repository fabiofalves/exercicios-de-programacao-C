#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int K;
	float M;
	
	printf("Informe a velocidade em km/h : \n");
	scanf("%d", &K);
	
	M = K / 3.6;
	
	printf("Velocidade convertida em m/s: %.2f", M);
	
	return 0;
	
}
