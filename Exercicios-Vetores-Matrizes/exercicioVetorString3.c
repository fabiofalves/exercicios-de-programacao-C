#include <stdio.h>

int main(){
	
	char string[20];
	int i, somaCaractere = 0;
	
	printf("Digite uma palavra: ");
	gets(string);
	
	while (string[i] != '\0'){
		somaCaractere++;
		i++; 
	}
	
	printf("Quantidade de caracteres da palavra: %d", somaCaractere);
	
	return 0;
}
