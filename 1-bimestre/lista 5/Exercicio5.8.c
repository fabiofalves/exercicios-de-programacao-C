#include <stdio.h>

int main(){
	
	int N=0, cont=1, soma=0;
	double media=0;
	
	printf("Digite 10 numeros: \n");
	
	for (cont; cont <= 10; cont++){
		printf("%d.o Numero: ", cont);
		scanf("%d", &N);
		soma = soma + N;
	}
	
	media = soma/10.0;
	printf("Media = %.2f", media);
	
	return 0;
}
