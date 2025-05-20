#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int idade, ano, nasc;
	
	printf("Digite o ano atual: \n");
	scanf("%d", &ano);
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	nasc = ano - idade;
	
	printf("Voce nasceu no ano %d", nasc);
	
	return 0;
	
}
