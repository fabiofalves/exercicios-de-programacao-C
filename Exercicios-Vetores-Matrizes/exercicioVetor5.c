#include <stdio.h>

int main (){
	
	int i = 0, numeros[8], x, y, somaVetores = 0;
	
	for (i = 0; i < 8; i++){
		printf("Digite a posicao do vetor: \n");
		scanf("%d", &numeros[i]);
	}
	
	printf("Digite dois valores correspondentes a posicao do vetor:\n ");
	scanf("%d", &x);
	scanf("%d", &y);
	
	somaVetores = numeros[x] + numeros [y];
	
	printf("A soma dos vetores %d e %d e igual a: %d\n", x, y, somaVetores);
	
	return 0;
}
