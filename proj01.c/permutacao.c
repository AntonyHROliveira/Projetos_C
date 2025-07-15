#include <stdio.h>
#include <string.h>

void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void gerarAnagramas(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar((str + inicio), (str + i));
            gerarAnagramas(str, inicio + 1, fim);
            trocar((str + inicio), (str + i)); // backtrack
        }
    }
}

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    
    printf("Anagramas de \"%s\":\n", palavra);
    gerarAnagramas(palavra, 0, tamanho - 1);

    return 0;
}
