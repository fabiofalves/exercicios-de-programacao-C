#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int opcao;

    printf("Digite um numero de 1 a 7: ");
    scanf("%i", &opcao);

    switch (opcao){
        case 1:
            printf("Domingo\n");
        break;

        case 2:
            printf("Segunda\n");
        break;

        case 3:
            printf("Terca\n");
        break;

        case 4:
            printf("Quarta");
        break;

        case 5:
            printf("Quinta");
        break;

        case 6:
            printf("Sexta");
        break;

        case 7:
            printf("Sabado");
        break;
        
        default:
            printf("Numero invalido");
    }
    
    return 0;
}