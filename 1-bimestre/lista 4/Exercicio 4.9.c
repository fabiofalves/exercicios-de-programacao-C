#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float altura;
	int peso;
	
	printf("Digite sua altura (em metros): \n");
	scanf("%f", &altura);
	printf("Digite seu peso (em kg): \n");
	scanf("%i", &peso);
	
	if (altura<1.20 && peso<=60){
		printf("Categoria A\n");
	} else if (altura<1.20 && peso>=60 && peso <=90){
		printf("Categoria D");
	} else if (altura<1.20 && peso>90){
		printf("Categoria G");	
	}else if (altura>=1.20 && altura<=1.70 && peso<=60){
		printf("Categoria B");
	} else if (altura>=1.20 && altura<=1.70 && peso>60 && peso <=90){
		printf("Categoria E");
	} else if (altura>=1.20 && altura<=1.70 && peso>90){
		printf("Categoria H");
	} else if (altura>1.70 && peso<=60){
		printf("Categoria C");
	} else if(altura>1.70 && peso>60 && peso<=90){
		printf("Categoria F");
	} else if(altura>1.70 & peso>90){
		printf("Categoria I");
	}
	else {
		printf("Categoria nao encontrada");
	}


	
	return 0;
}
