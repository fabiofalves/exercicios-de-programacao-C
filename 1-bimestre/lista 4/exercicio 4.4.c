#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float main(){
	float salario, emprestimo;
	
	printf("Qual o valor do seu salario? \n");
	scanf("%f", &salario);
	printf("Qual o valor da prestacao do emprestimo?\n");
	scanf("%f",&emprestimo);
	
	salario = (salario*20)/100;
	
	if(salario<emprestimo){
		printf("Emprestimo nao concedido\n");
	}
		else{
			printf("emprestimo condedido\n");
		}
	

return 0;
}
