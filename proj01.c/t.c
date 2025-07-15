#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Variáveis globais
char NomeAluno[100], TipoMateria[100], NomeProfessor[100], Seletor[10] = " ", Situacao[20] = " ", TipoSelecionado[20] = " ", PeriodoLetivo[20] = " ";
int contador, opcao, go_on = 1, QtdAvaliacoes;
float ValorNota = 0.0, SomaValorNota = 0.0, Media = 0.0;

// Funções auxiliares
int lerAno() {
    int ano, atual;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    atual = tm.tm_year + 1900;

    int validar = 1;
    do {
        printf("Digite o ano: ");
        scanf("%d", &ano);

        if (ano < 1000) {
            printf("Data invalida\n");
            validar = 0;
        } else if (ano > atual) {
            printf("Data invalida\n");
            validar = 0;
        } else {
            validar = 1;
        }
    } while (!validar);

    return ano;
}

void Periodo_Letivo() {
    do {
        printf("Escolha um numero correspondente ao periodo letivo:\n");
        printf("1 - 1 Semestre\n");
        printf("2 - 2 Semestre\n");
        printf("Escolha uma opçao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                strcpy(PeriodoLetivo, "1 Semestre");
                go_on = 0;
                break;
            case 2:
                strcpy(PeriodoLetivo, "2 Semestre");
                go_on = 0;
                break;
            default:
                printf("Opçao Invalida! Escolha 1 ou 2.\n");
                go_on = 1;
        }
    } while (go_on != 0);
}

void Tipo_de_Avaliacao() {
    do {
        printf("Escolha um numero correspondente ao tipo de avaliacao:\n");
        printf("1 - Trabalho\n");
        printf("2 - Prova\n");
        printf("3 - TCC\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                strcpy(TipoSelecionado, "Trabalho");
                go_on = 0;
                break;
            case 2:
                strcpy(TipoSelecionado, "Prova");
                go_on = 0;
                break;
            case 3:
                strcpy(TipoSelecionado, "TCC");
                go_on = 0;
                break;
            default:
                printf("Opcao Invalida! Escolha 1, 2 ou 3.\n");
                go_on = 1;
        }
    } while (go_on != 0);
}

void Situacao_do_Aluno() {
    SomaValorNota = 0.0;
    for (contador = 1; contador <= QtdAvaliacoes; contador++) {
        printf("Digite o valor da %d° nota: ", contador);
        scanf("%f", &ValorNota);
        SomaValorNota += ValorNota;
    }

    Media = SomaValorNota / QtdAvaliacoes;

    if (Media <= 4.0) {
        strcpy(Situacao, "Reprovado");
    } else if (Media <= 7.0) {
        strcpy(Situacao, "Recuperacao");
    } else if (Media <= 10.0) {
        strcpy(Situacao, "Aprovado");
    }
}

int main() {
    // Entrada de dados
    printf("Nome Completo do Aluno: ");
    scanf(" %[^\n]", NomeAluno);

    printf("Nome da Materia: ");
    scanf(" %[^\n]", TipoMateria);

    printf("Nome do Professor: ");
    scanf(" %[^\n]", NomeProfessor);

    lerAno();
    Periodo_Letivo();
    Tipo_de_Avaliacao();

    printf("Informe a quantidade de %s que foi aplicada: ", TipoSelecionado);
    scanf("%d", &QtdAvaliacoes);

    Situacao_do_Aluno();

    // Saída de dados
    printf("O valor da Media é %.2f\n", roundf(Media * 100) / 100);
    printf("A situação do aluno %s: %s\n", NomeAluno, Situacao);

    return 0;
}