#include <stdio.h>

int main(){
	
	int i, num;
	double S=0.0;
	
	for (i = 1; i <= 50; i++){ /* no exercicio est� pedindo que a divis�o seja feita at� 55 
	mas creio que foi digitado errado porque sen�o a ultima serie teria que ser 109/55 e n�o 99/55 */
		
		num = (2 * i ) - 1;
		S += (double) num / i;
	}
	
	printf("Serie = %.2f", S);
	
	return 0;
}
