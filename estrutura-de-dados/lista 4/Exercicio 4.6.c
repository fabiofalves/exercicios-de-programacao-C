#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float alt, pesoideal, xhomen = 72.7, yhomen = 58, xmulher = 62.1, ymulher = 44.7;
	int sex;
	
	printf("Qual seu sexo: \n");
	printf("1 - Homem\n");
	printf("2 - Mulher\n");
	scanf("%i", &sex);
	
	switch (sex) {
		case 1:
			printf("Qual sua altura? \n");
			scanf("%f", &alt);
			pesoideal = (xhomen*alt)-yhomen;
			printf("Seu peso ideal e: %.2f", pesoideal); 
		break;
		
		case 2:
			printf("Qual sua altura? \n");
			scanf("%f", &alt);
			pesoideal = (xmulher*alt)-ymulher;
			printf("Seu peso ideal e: %.2f", pesoideal); 
		break;
		
		default:
			printf("opcao invalida");
	}
	
	return 0;
}
