#include <stdio.h>

int main(){
	
	int N, i=0;
	double media=0.0;
	
	while (i < 10){
		printf("Digite o %d.o numero inteiro: \n", i + 1);
		scanf("%d", &N);
		if (N > 0){
			media += N;
			i++;
		}
	}
	
	media = media/10.0;
	printf("Media = %.2f", media);
	
	return 0;

}
