#include <stdio.h>

int main(){
	
	int linhas, i, j, N=1;
	
	do {
		printf("Digite o numero de linhas do triangulo de floyd: ");
		scanf("%d", &linhas);
	} while (linhas < 0);
	
	for(i=1; i<=linhas; i++){
		for (j=1; j<=i; j++){
			printf("%d ", N);
			N++;
		}
		
		printf("\n");
	}
	
	return 0;	
}

/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 */
