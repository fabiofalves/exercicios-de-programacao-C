#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if (idade>=5 && idade<=7){ 
		printf("Categoria Infantil A\n");
	}
	if (idade>=8 && idade<=10){
		printf("Categoria Infantil B\n");
	}
	if (idade>=11 && idade<=13){
		printf("Categoria Juvenil A\n");
	}
	if (idade>=14 && idade<=17){
		printf("Categoria Juvenil B\n");
	}
	if (idade>=18){
		printf("Categoria Senior\n");
	}
	else {
		printf ("Nenhuma das categorias\n");
	}
	
	return 0;
}
