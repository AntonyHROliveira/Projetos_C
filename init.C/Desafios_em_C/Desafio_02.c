#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // Var p/ armazenar os dados de identificação do aluno
    char nome_aluno[50];
    char materia[50];
    char nome_docente[50];
    int periodo_letivo;

    // Variaveis p/ armazenar os valores das notas pertencente ao aluno
    float nota01;
    float nota02;
    float nota03;
    float nota04;
    float media_notas; // <= Variaveis de processamentos
    

// Bloco de Leitura e Armazenamento de Dados do Aluno(a) :
//========================================================

    printf("\nPor favor insira os dados do Aluno(a) abaixo corretamente\n");
    printf("-------------------------------------------------------------\n");

    // Nome do Aluno
    printf("Digite o nome do aluno(a): ");
    fgets(nome_aluno, sizeof(nome_aluno), stdin); // Usando fgets para ler a string com espaços em branco e o nome completo

    // Nome da Matéria
    printf("Digite o nome da materia: ");
    fgets(materia, sizeof(materia), stdin);

    // Periodo Letivo do aluno(a) "Semestre"
    printf("Digite o periodo letivo do aluno %s: ", nome_aluno);
    scanf("%d", &periodo_letivo);
    getchar();// Consome o caracter de nova linha (\n) deixado pelo comando ( scanf )
    
    // Nome do Docente 
    printf("Digite o nome do docente da materia %s: ", materia);
    fgets(nome_docente, sizeof(nome_docente), stdin);


// Bloco de processamento de dados :
//====================================

    do{
        printf("Insira a primeira nota: ");
        scanf("%f", &nota01);
        
        if(nota01 < 0 || nota01 >= 11 ){
            printf("Nota Invalida");
            printf("Insira a primeira nota: ");
            scanf("%f", &nota01);    
        }
    }while(nota01 < 0 || nota01 >= 11);


    do{
        printf("Insira a Segunda Nota: ");
        scanf("%f", &nota02);
        
        if(nota02 < 0 || nota02 >= 11){
            printf("Nota Invalida");
            printf("Insira a Segunda Nota: ");
            scanf("%f", &nota02);   
        }
    }while(nota02 < 0 || nota02 >= 11);


    do{
        printf("Insira a Terceira Nota: ");
        scanf("%f", &nota03);
        
        if(nota03 < 0 || nota03 >= 11){
            printf("Nota Invalida");
            printf("Insira a Terceira Nota: ");
            scanf("%f", &nota03);
        }
    }while(nota03 < 0 || nota03 >= 11);


    do{
        printf("Insira a Quarta Nota: ");
        scanf("%f", &nota04);
        
        if(nota04 < 0 || nota04 >= 11){
            printf("Nota Invalida");
            printf("Insira a Quarta Nota: ");
            scanf("%f", &nota04);
        }
    }while(nota04 < 0 || nota04 >= 11);

    media_notas = (nota01 + nota02 + nota03 + nota04) / 4; // Calcula a media das notas do aluno(a)

// Bloco de Saida de Dados :
//==========================    

    printf("\n");
    printf("==== >> Boletin Academico << ====\n");
    printf("Nome do Aluno: %s", nome_aluno);
    printf("Nome da Materia: %s", materia);
    printf("Semestre: %d", periodo_letivo);
    printf("Nome do Docente(a): %s", nome_docente);
    printf("Media das notas: %.2f\n", media_notas);
    printf("\n");

    return 0;// Finaliza o programa 
}

/*NOTA:

// >> Para a versão-02 do desafio.
=> adicionar a opção de verificar se o aluno está aprovado ou reprovado ou em recuperação.
--> adicionar a opção de verificar se a média das notas é maior ou igual a 7 para aprovação.
--> adicionar a opção de verificar se a média das notas é menor que 7 e maior ou igual a 5 para recuperação.
--> adicionar a opção de verificar se a média das notas é menor que 5 para reprovação.

// >> Para a versão-03 do desafio.
=> adicionar um tratamento de erro para o caso do usuário digitar um número no lugar de um caracter no (nome do aluno, nome da materia, nome do docente).
=> adicionar um tratamento de erro para o caso do usuário digitar uma letra no lugar de um número no ( período letivo, notas ).

// >> Para a versão-04 do desafio.
=> Melhorar a validação de entrada de dados, garantindo que o usuário não possa inserir valores inválidos.
=> Adicionar a opção de calcular a média ponderada das notas, se necessário.
=> Adicionar a opção de exibir o histórico de notas do aluno, se necessário.
=> Adicionar a opção de exibir o status do aluno (aprovado, reprovado, em recuperação) com base na média das notas.



*/