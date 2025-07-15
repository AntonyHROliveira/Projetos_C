#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome_aluno[50];
    char materia[50];
    char nome_docente[50];

    int periodo_letivo;
    
    // Bloco de Leitura e Armazenamento de Dados do Aluno(a) //
    printf("\nPor favor insira os dados do Aluno(a) abaixo corretamente\n");
    printf("-------------------------------------------------------------\n");

    // Nome do Aluno
    printf("Digite o nome do aluno(a): ");
    fgets(nome_aluno, sizeof(nome_aluno), stdin); // Usando fgets para ler a string com espaços em branco e o nome completo

    // Nome da Matéria
    printf("Digite o nome da materia: ");
    fgets(materia, sizeof(materia), stdin);

    
    // Nome do Docente 
    printf("Digite o nome do docente da materia %s: ", materia);
    fgets(nome_docente, sizeof(nome_docente), stdin);

    // Periodo Letivo do aluno(a) "Semestre"
    printf("Digite o periodo letivo do aluno %s: ", nome_aluno);
    scanf("%d", &periodo_letivo);
    
    /*NOTA:
    => Nesta forma não gera problemas e não precisa usar o comando ( "getchar" )
     para corrigir o erro causado pelo comando ( "scanf" );
    */




    // Bloco de Saida de Dados //
    printf("\n");
    printf("==== >> Boletin Academico << ====\n");
    printf("Nome do Aluno: %s", nome_aluno);
    printf("Nome da Materia: %s", materia);
    printf("Nome do Docente(a): %s", nome_docente);
    printf("Semestre: %d", periodo_letivo);
    printf("\n");

    return 0;
    
    
    

}