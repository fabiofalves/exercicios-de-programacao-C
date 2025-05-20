#include <stdio.h>

int main(){
	int somaA, i;
	int A[6] = {1,0,5,-2,-5,7};

	
	somaA = A[0] + A[1] + A[5];
	printf("Soma = %d\n", somaA);
	
	A[4] = 100;
	
	for (i = 0; i < 6; i++){
		printf("Arrays: %d\n", A[i]);
	}
	
	return 0;
}
