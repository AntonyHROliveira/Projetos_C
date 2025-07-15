#include <stdio.h>

int main() {
    int N;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    // Verifica se o número é positivo
    if (N <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    // Exibe os números pares entre 1 e N
    printf("Numeros pares entre 1 e %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}