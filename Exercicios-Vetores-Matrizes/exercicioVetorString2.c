#include <stdio.h>

int main(){
	
	char string[20];
	int i;
	
	printf("Digite uma mensagem: ");
	gets(string);
	
	printf("\n4 primeiras letras da mensagem:\n\n");
	for (i = 0; i < 4; i++){
		printf("%c", string[i]);
	}
	
	return 0;
}
