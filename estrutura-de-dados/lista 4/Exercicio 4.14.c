#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &x);

    if(x%5==0){
        printf("O numero %i e Divisivel por 5\n", x);
    } else{
        printf("O numero %i nao e divisivel por 5\n", x);
    }
    if(x%3==0){
        printf("O numero %i e Divisivel por 3\n", x);
    } else{
        printf("O numero %i nao e divisivel por 3\n", x);
    }

    return 0;
}