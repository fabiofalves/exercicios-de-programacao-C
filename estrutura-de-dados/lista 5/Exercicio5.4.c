#include <stdio.h>

int main(){
	
	int N = 1, cont = 0;
	
	while (cont < 5){
		if (N%3 == 0){
			printf("%d\n", N);
			cont++;
		}
		N++;
	}
	
	return 0;
}
