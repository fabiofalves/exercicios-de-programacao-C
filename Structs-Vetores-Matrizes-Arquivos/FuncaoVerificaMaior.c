#include <stdio.h>

int verificaMaior (int x, int y){
	
	if(x > y){
		return x;
	}
	else{
		return y;
	}
	
}

void main(){
	
	int x, y, maior;
	
	printf("informe dois numeros:\n");
	scanf("%d %d", &x, &y);
	
	maior = verificaMaior(x,y);
	
	printf("Maior numero digitado: %d", maior);
	
}
