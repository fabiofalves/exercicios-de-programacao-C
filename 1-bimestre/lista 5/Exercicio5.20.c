#include <stdio.h>

int main() {
    int i, N, j, fatorial;
    double E = 0.0;

    printf("Digite a quantidade de termos da serie: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fatorial = 1;
        
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }

        E += 1.0 / fatorial;
    }

    printf("\nValor da serie com %d termos: %.10f\n", N, E);

    return 0;
}

