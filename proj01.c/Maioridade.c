#include <stdio.h>
#include <string.h>

#define MAIORIDADE 18

int main() {
    // Variáveis locais de armazenamento
    int idade, anos;
    char nome[50];

    // ÁREA DE ENTRADA DE DADOS
    //=========================
    printf("Digite o seu primeiro nome:\n");// Solicita o nome do usuário
    scanf("%s", nome);

    printf("Digite sua idade:\n");// Solicita a idade do usuário
    scanf("%d", &idade);


    // ÁREA DE PROCESSAMENTO
    //======================
    
    // Estrutura condicional para verificar a idade do usuário
    if (idade > 0 && idade < MAIORIDADE) {
        // Calcula quantos anos faltam para atingir a maioridade
        anos = MAIORIDADE - idade;
        printf("Nome: %s\nIdade: %d idade\n", nome, idade);
        printf("Faltam %d anos para o %s atingir a maioridade\n", anos, nome);
    } else if (idade >= MAIORIDADE && idade < 55) {
        printf("Voce ja atingiu a maioridade\n");
    } else {
        printf("Voce ja e idoso\n");
    }

    return 0;
}