#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float N1, N2, N3, N4, media;
	
	printf("Digite sua nota das quatro provas para calcular a media: \n");
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	
	media = (N1 + N2 + N3 + N4) / 4;
	
	printf("Sua media e: %.2f", media);
	
	return 0;
	
}
