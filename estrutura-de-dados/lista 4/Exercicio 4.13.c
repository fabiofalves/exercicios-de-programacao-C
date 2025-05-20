#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int formula;
    float x, y, resultado;

    printf("Esolha uma formula matematica: \n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%i", &formula);
    printf("Digite dois valores numericos: \n");
    scanf("%f %f", &x, &y);

    switch(formula){
        case 1:
            resultado = x+y;
            printf("A soma entre %.1f e %.1f e igual a %.1f", x, y, resultado);
        break;
        
        case 2: 
            resultado = x-y;
            printf("A subtracao de %.1f menos %.1f e igual a %.1f", x, y, resultado);
        break;
        
        case 3:
            resultado = x*y;
            printf("A multiplicacao de %.1f vezes %.1f e igual a %.1f", x, y, resultado);
        break;
        
        case 4:
            resultado = x/y;
            printf("A divisao de %.1f por %.1f e igual a %.1f", x, y, resultado);
        break;
        
        default:
            printf("Opcao invalida");
    }

    return 0;
}