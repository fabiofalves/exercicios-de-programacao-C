#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char C1, C2, C3;
	
	printf("Digite a primeira letra: ");
	scanf("%c", &C1);
	getchar();
	printf("Digite a segunda letra: ");
	scanf("%c", &C2);
	getchar();
	printf("Digite a terceira letra: ");
	scanf("%c", &C3);
	
	printf("\n%c\n%c\n%c", C1, C2, C3);
	
	return 0;
}
