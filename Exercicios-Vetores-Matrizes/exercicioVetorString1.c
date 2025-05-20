#include <stdio.h>

int main(){
	
	char string[20];
	
	printf("Digite uma mensagem: ");
	gets(string);
	
	printf("Mensagem digitada: %s", string);
	
	return 0;
}
