#include <stdio.h>

int main (){
	
	int N, i=2;
	double H=0.0, serie=0.0;
	
	do {
		printf("Digite um valor inteiro positivo: ");
		scanf("%d", &N);
	} while (N < 1);

	while (i <= N){	
		serie += (1.0 / i);
		i++;
	}
	
	H = 1.0 + serie;
	printf("\nSerie harmonica H%d = %.2f\n",N, H);
	
	return 0;
}
