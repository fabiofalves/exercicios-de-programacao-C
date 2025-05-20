#include <stdio.h>

int main() {
    int N, i, anterior = 0, atual = 1, fibonacci=0;

    
	do {
		printf("Digite um numero inteiro positivo: ");
    	scanf("%d", &N);
    	if(N < 0){
    		printf("Numero invalido, digite um numero positivo\n\n");
		}
	} while (N < 0); 

    printf("\nSequencia de Fibonacci ate o termo %d: ", N); 
	printf("%d ", anterior);
    
	if (N >= 1) {
		printf("%d ", atual);
	}
    
	for (i = 2; i <= N; i++) {
        fibonacci = anterior + atual;
        printf("%d ", fibonacci);
        anterior = atual;
        atual = fibonacci;
    }

    printf("\n\n%d termo de fibonacci: %d ", N, fibonacci);

    return 0;
}
