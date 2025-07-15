#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float nota01;
    float nota02;
    float media_aluno;

    int notas_validas;

    do {
        notas_validas = 1; // Assume que as notas são válidas

        // Insira a Primeira Nota
        printf("Insira a Primeira Nota: ");
        scanf("%f", &nota01);
        
        if (nota01 < 0 || nota01 >= 11) {
            printf("Nota Invalida.\n");
            notas_validas = 0; // Marca que a nota não é válida
        }

        // Insira a Segunda Nota
        printf("Insira a Segunda Nota: ");
        scanf("%f", &nota02);

        if (nota02 < 0 || nota02 >= 11) {
            printf("Nota Invalida.\n");
            notas_validas = 0; // Marca que a nota não é válida
        }

    } while (!notas_validas); // Continua até que ambas as notas sejam válidas

    // Cálculo da média
    media_aluno = (nota01 + nota02) / 2;
    printf("A média do aluno é: %.2f\n", media_aluno);

    return 0;
}
//#############################################################################################################################

#include <stdio.h>
#include <stdlib.h>

float lerNota() {
    float nota;
    while (1) {
        printf("Insira a Nota: ");
        if (scanf("%f", &nota) != 1) {
            printf("Entrada inválida. Por favor, insira um número.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }
        if (nota >= 0 && nota < 11) {
            return nota;
        }
        printf("Nota Invalida. Deve estar entre 0 e 10.\n");
    }
}

int main() {
    float nota01 = lerNota();
    float nota02 = lerNota();
    float media_aluno = (nota01 + nota02) / 2;

    printf("A media do aluno e: %.2f\n", media_aluno);
    return 0;
}
