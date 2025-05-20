#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float importancia = 780.000, valor1 = 46, valor2 = 32;
	float ganhador1, ganhador2, ganhador3;
	
	ganhador1 = (valor1 / 100) * importancia;
	ganhador2 = (valor2 / 100) * importancia;
	ganhador3 = importancia - (ganhador1 + ganhador2);
	
	printf("Primeiro ganhador: R$%.3f\nSegundo ganhador: R$%.3f\nTerceiro ganhador: R$%.3f", ganhador1, ganhador2, ganhador3);
	
	return 0;

}
