#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor de a: \n");
    scanf("%f", &a);

    if (a == 0){
        printf("Nao e uma equacao de segundo grau\n");
        return 0;
    }

    printf("Digite o valor de b: \n");
    scanf("%f", &b);
    printf("Digite o valor de c: \n");
    scanf("%f", &c);

    delta = (b*b)-(4*a*c);

    if (delta<0){
        printf("Nao existe raiz real\n");
    } else if (delta == 0){
        raiz1 = -b/(2*a);
        printf ("Raiz unica: %.2f\n", raiz1);
    } else {
        raiz1 = (-b+sqrt(delta))/(2*a);
        raiz2 = (-b-sqrt(delta))/(2*a);
        printf("Raizes reais: %.2f , %.2f", raiz1, raiz2);
    }

    return 0;
}
