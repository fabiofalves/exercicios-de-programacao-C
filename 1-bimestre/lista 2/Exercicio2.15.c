#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char sexo;
	int idade;
	float altura;
	
	printf("Informe seu sexo (M/F): \n");
	scanf("%c", &sexo);
	printf("Informe sua idade: \n");
	scanf("%i", &idade);
	printf("Informe sua altura: \n");
	scanf("%f", &altura);
	
	printf("\n%c %i %.2f\n\n%c\t%i\t%.2f\n\n%c\n%i\n%.2f\n", sexo, idade, altura, sexo, idade, altura, sexo, idade, altura);
	
	return 0;
}
