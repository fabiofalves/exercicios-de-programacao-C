#include <stdio.h>


void trocaValor(int *xPtr, int *yPtr){
	
	*xPtr = 10;
	*yPtr = 20;
	
}

void main(){
	
	int x,y;
	
	printf("Digite dois numeros:\n");
	scanf("%d %d", &x, &y);
	
	trocaValor(&x,&y);
	
	printf("Numeros trocados para: %d, %d",x,y);
}
