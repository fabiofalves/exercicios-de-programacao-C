#include <stdio.h>
#include <math.h>

int main(){
	
	int i, j;
	double A[10][10];
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (i < j){
				A[i][j] = ((2*i) + (7*j)) - 2;
			}
			else if(i == j){
				A[i][j] = (3 * pow(i,2)) - 1;
			}
			else if(i > j){
				A[i][j] = ((4 * pow(i,3)) + (5 * pow(j,2))) + 1;
			}
			
			}
	}
	
	printf("Matriz 10x10:\n\n");
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%8.0lf", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
