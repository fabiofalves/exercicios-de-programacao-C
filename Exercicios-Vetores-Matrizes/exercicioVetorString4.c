#include <stdio.h>
#include <string.h> 

int main() {
    char string[20], stringInvertida[20];
    int i, j, tamanho;
    int ehPalindromo = 1; 

    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0; 

    tamanho = strlen(string);

  
    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        stringInvertida[j] = string[i];
    }
    stringInvertida[tamanho] = '\0'; 

   
    for (i = 0; i < tamanho; i++) {
        if (string[i] != stringInvertida[i]) {
            ehPalindromo = 0;
            break; 
        }
    }

    if (ehPalindromo) {
        printf("A palavra '%s' e Palindromo\n", string);
    } else {
        printf("A palavra '%s' NAO e Palindromo\n", string);
    }

    return 0;
}
