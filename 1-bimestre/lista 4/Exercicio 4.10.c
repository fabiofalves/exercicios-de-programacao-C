#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, y, z, opcao;
	float media;
	
	printf("Vamos calcular a media entre tres numeros\n\n");
	printf("Digite o primeiro numero: \n");
	scanf("%i", &x);
	printf("Digite o segundo numero: \n");
	scanf("%i", &y);
	printf("Digite o terceiro numero: \n");
	scanf("%i", &z);
	
	printf("Escolha uma opcao de calculo da media: \n");
	printf("1- Geometrica\n");
	printf("2- Ponderada\n");
	printf("3- Harmonica\n");
	printf("4- Aritmetica\n");
	scanf("%i", &opcao);
	
	switch (opcao){
		case 1: 
			// no exercicio a formula esta apenas como "media = x*y*z" mas acredito que esteja errado, pesquisei e fiz da forma que aprendi
			media = pow(x * y * z, 1.0 / 3.0);
			printf("A media Geometrica dos valores e: %.2f", media);
		break;
		
		case 2:
			media = (x+2*y+3*z)/6.0;
			printf("A media Ponderada dos valores e: %.2f", media);
		break;	
		
		case 3:
			media = 3.0 / ((1.0/x) + (1.0/y) + (1.0/z));
			printf("A media Harmonica dos valores e: %.2f", media);
		break;
		
		case 4:
			media = (x+y+z)/3.0;
			printf("A media Aritmetica dos valores e: %.2f", media);
		break;
		
		default:
			printf("Opcao invalida");
	}
	
	
	
	return 0;
	
}
