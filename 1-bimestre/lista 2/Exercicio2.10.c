#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int dia, mes, ano;
	
	printf("Digite a data (dd/mm/aa): \n");
	scanf("%i/%i/%i", &dia, &mes, &ano);
	
	printf("Data: %i\\%i\\%i \n", dia, mes, ano);
	
	return 0;
}
