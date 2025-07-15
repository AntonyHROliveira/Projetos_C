#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Exibe a tabuada do número de 1 a 10
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}