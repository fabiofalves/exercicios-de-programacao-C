#include <stdio.h>

int main(){
	
	int N=0, cont=0;
	
	while (cont < 50){
		
		if (N % 2 == 0){
			printf("%d ", N);
			cont++;
		}
		N++;
	}
	
	return 0;
	
}
