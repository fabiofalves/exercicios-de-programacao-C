#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N1, N2;
	
	printf("Digite um numero: ");
	scanf("%i", &N1);
	printf("Digite outro numero: ");
	scanf("%i", &N2);
	
	if (N1 == N2){
		printf("Os numeros sao iguais \n");
	}
	if (N1 > N2){
		printf ("O numero maior digitado foi: %i", N1);
		}
	if (N1 < N2){
		printf ("O numero maior digitado foi: %i", N2);
	}
	return 0;
}
