#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592f

int main(){
	
	float raio, area;
	
	printf("Informe o valor do raio: \n");
	scanf("%f", &raio);
	
	area = PI * raio * raio;
	
	printf("Area = %.2f", area);
	
	return 0;
}
