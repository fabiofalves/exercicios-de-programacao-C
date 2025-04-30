#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592f

int main(){
	
	float altura, raio, volume;
	
	printf("Digite a altura do cilindro: \n");
	scanf("%f", &altura);
	printf("Digite o raio do cilindro: \n");
	scanf("%f", &raio);
	
	volume = PI * (raio * raio * altura);
	
	printf("O volume do cilindro e: %.2f\n", volume);
	
	return 0;
}

