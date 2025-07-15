#include <stdio.h>

int main() {
    // Variáveis locais de armazenamento
    float nota1, nota2, nota3, media;
    char nome[50], materia[50], professor[50];

    // ÁREA DE ENTRADA DE DADOS 
    //=========================
    printf("Digite o nome do aluno: ");// Solicita o nome do aluno
    scanf("%s", nome);

    printf("Digite o nome da materia: ");// Solicita o nome da matéria
    scanf("%s", materia);

    printf("Digite o nome do professor: ");  // Solicita o nome do professor
    scanf("%s", professor);


    // Solicita o valor das notas do aluno
    //------------------------------------
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    


    // ÁREA DE PROCESSAMENTO
    //======================
    media = (nota1 + nota2 + nota3 ) / 3; // Calcula a média


    // ESRUTURA CONDICIONAL: verificando a situação do aluno
    //------------------------------------------------------
    if (media <= 5)
    {
        printf("A situacao do aluno %s: Reprovado\n", nome);
    }
    else if (media <= 7)
    {
        printf("A situacao do aluno %s: Recuperacao\n", nome);
    }
    else
    {
        printf("A situacao do aluno %s: Aprovado\n", nome);
    }
    

    // SAÍDA DE DADOS
    //================
    printf("A media das notas e: %.2f\n", media);// Exibe o resultado para o usuário

    return 0;
}