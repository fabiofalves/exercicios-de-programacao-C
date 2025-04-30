#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int maiuscula = 65, minuscula; //letra maiuscula declarada como 65 que é o valor da letra A na tabela ASCII
	
	putchar(maiuscula); //usando o comando putchar para imprimir um valor numerico em formato de caractere
	
	minuscula = maiuscula + 32; //somando o valor de uma letra maiuscula com 32 que é a diferença entre uma letra maiuscula e sua correspondente minuscula de acordo com a tabela ASCII
	
	putchar('\n');
	putchar(minuscula);

	return 0;
}
