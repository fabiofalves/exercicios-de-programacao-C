#include <stdio.h>

int main(){
	
	int N = 0, cont = 0;
	
	do { //usando a estrutura do-while para garantir que o usuário digite um numero positivo
		printf("Digite ate onde voce quer contar: ");
		scanf("%d", &N);
		if(N < 0){
			printf("Digite um numero positivo\n\n");
		}
	} while (N < 0); 
	
	while (cont <= N){
		
		printf("%d\n", cont);
		cont++;
	}
	
	return 0;
	
}
