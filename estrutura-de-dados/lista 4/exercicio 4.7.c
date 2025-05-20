#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float valor, precofinal;
	int estado;
	
	printf("Digite o valor do produto: \n");
	scanf("%f", &valor);
	printf("Escolha o estado de destino do produto: \n");
	printf("1- MG\n");
	printf("2- SP\n");
	printf("3- RJ\n");
	printf("4- MS\n");
	scanf("%i", &estado);
	
	switch (estado){
		case 1:
			precofinal = valor*(1+(7.0/100));
			printf("Preco final do produto: R$%.2f", precofinal);
		break;
		
		case 2:
			precofinal = valor*(1+(12.0/100));
			printf("Preco final do produto: R$%.2f", precofinal);
		break;
		
		case 3:
			precofinal = valor*(1+(15.0/100));
			printf("Preco final do produto: R$%.2f", precofinal);
		break;
		
		case 4:
			precofinal = valor*(1+(8.0/100));
			printf("Preco final do produto: R$%.2f", precofinal);	
		break;
		
		default:
			printf("Estado invalido");	
	}	
	
	return 0;
}
