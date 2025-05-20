#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main(){
	
	int G;
	float R;
	
	printf("Digite o grau do angulo: \n");
	scanf("%d", &G);
	
	R = (G * PI) / 180;
	
	printf("Valor do grau convertido em radianos: %f", R);
	
	return 0;
}
