#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int numero, quadrado;
	double raiz;
	
	printf("Digite um numero: \n");
	scanf("%i", &numero);
	
	if(numero>0){
		quadrado = numero*numero;
		printf("o numero ao quadrado e: %i\n", quadrado);
		raiz = sqrt(numero);
		printf("A raiz quadrada e: %.1f \n", raiz);
	} else {
		printf("Nao e possivel calcular raiz quadrada de numeros negativos");
	}
return 0;
}
