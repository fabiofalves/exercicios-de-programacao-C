#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, y, ouexclusivo, oubit, ebit;
	
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &x, &y);
	
	ouexclusivo = x ^ y;
	oubit = x | y;
	ebit = x & y;
	
	printf("Ou exclusivo de %d por %d: %d\n", x, y, ouexclusivo);
	printf("Ou bit a bit de %d por %d: %d\n", x, y, oubit);
	printf("E bit a bit de %d por %d: %d\n", x, y, ebit);
	
	return 0;
}
