#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float C, F;
	
	printf("Digite quantos graus esta fazendo hoje: \n");
	scanf("%f", &C);
	
	F = (C * (9.0 / 5.0)) + 32.0;
	
	printf("%.1f convertido em Fahrenheit e: %.1f", C, F);
	
	return 0;
}
