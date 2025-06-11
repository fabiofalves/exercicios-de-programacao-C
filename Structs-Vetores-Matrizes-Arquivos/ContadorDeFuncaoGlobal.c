#include <stdio.h>

//variavel global para contar quantas vezes uma função foi chamada
int contadorFuncao;

int somaDiagonal(){
	
	contadorFuncao++;

	return 0;
}

void imprimeMatriz(){
	
	contadorFuncao++;
}

void main(){
	
	imprimeMatriz();
	somaDiagonal();
	
	printf("As funcoes desse programa foram chamadas %d vezes", contadorFuncao);
	
}
