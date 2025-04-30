#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592f

int main(){
	
	float real, dolar, conversao;
	
	printf("Digite o valor em reais R$: \n");
	scanf("%f", &real);
	printf("Digite a cotacao do dolar U$: \n");
	scanf("%f", &dolar);
	
	conversao = real * dolar;
	
	printf("O valor R$%.2f convertido em dolar e: U$%.2f", real, conversao);
	
	return 0;
	
}
