#include <stdio.h>

int main(){
	
	int N=1000, i=1;
	
	while (i < N){
		
		if(i%5 == 0 || i%3 == 0){
			printf("%d\n", i);
		}
		i++;
	}
	
	return 0;
	
}
