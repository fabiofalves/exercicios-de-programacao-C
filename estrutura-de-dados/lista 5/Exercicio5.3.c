#include <stdio.h>

int main(){
	
	int N=0, cont=1;

	printf("Digite um numero inteiro: ");
	scanf("%d", &N);
	
	while (cont <= N){
		if (cont%2 != 0){
			printf("%d\n", cont);
		}
		cont++;
	}
	
	return 0;
	
}
