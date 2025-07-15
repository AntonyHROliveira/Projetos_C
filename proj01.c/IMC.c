#include <stdio.h>
#include <math.h>

int main() {
    // Variáveis para armazenar o peso e a altura
    double peso, altura, resp;
    char recomendacao = ' ';

    // ÁREA DE ENTRADA DE DADOS
    //=========================
    printf("\n");
    printf("Informe o seu peso: ");// Solicita o peso do usuário
    scanf("%lf", &peso);

    printf("Informe a altura: ");// Solicita a altura do usuário
    scanf("%lf", &altura);
    printf("\n");

    // ÁREA DE PROCESSAMENTO
    //======================
    resp = peso / (altura * altura);// Calcula o IMC


    // ESTRUTURA CONDICIONAL: para verificar o IMC
    if (resp <= 18) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta abaixo do peso.\n\n", round(resp * 10000) / 10000);
        recomendacao = 'r';
    } else if (resp <= 25) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta com o peso adequado.\n\n", round(resp * 10000) / 10000);
        recomendacao = 'b';
    } else if (resp <= 30) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta com sobrepeso.\n\n", round(resp * 10000) / 10000);
        recomendacao = 's';
    } else if (resp <= 35.50) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta com obesidade grau I.\n\n", round(resp * 10000) / 10000);
        recomendacao = 'u';
    } else if (resp <= 40) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta com obesidade grau II.\n\n", round(resp * 10000) / 10000);
        recomendacao = 'd';
    } else if (resp > 41) {
        printf("Seu IMC esta em: %.4f kg por Metro quadrado\n\nVoce esta com obesidade grau III.\n\n", round(resp * 10000) / 10000);
        recomendacao = 't';
    }

    // ESTRUTURA DE SELEÇÃO: para recomendação
    switch (recomendacao) {
        case 'r':
            printf("RECOMENDACAO:\n\n");
            printf("Recomendase procurar um medico para avaliacao criteriosa do resultado.\n");
            printf("Pode indicar um estado de consumo do organismo, com poucas reservas e riscos associados.\n");
            break;
        case 'b':
            printf("RECOMENDACAO:\n\n");
            printf("Tudo indica que esta tudo bem,\n");
            printf("mas importante avaliar outros parametros da composicao corporal, para compreender se estao dentro do recomendado.\n");
            break;
        case 's':
            printf("RECOMENDACAO:\n\n");
            printf("O sobrepeso esta associado ao risco de doenças como diabetes e hipertensão.\n");
            printf("Entao, atencao consulte um medico e reveja habitos para reverter o quadro.\n");
            break;
        case 'u':
            printf("RECOMENDACAO:\n\n");
            printf("Importante buscar orientação medica e nutricional para entender melhor o seu caso,\n");
            printf("mesmo que os exames (colesterol e glicemia, por exemplo) estejam normais.\n");
            break;
        case 'd':
            printf("RECOMENDACAO:\n\n");
            printf("Indica um quadro de obesidade mais evoluido em relacao a classificação anterior e,\n");
            printf("mesmo com exames laboratoriais dentro da normalidade, nao se deve atrasar a busca por orientacao medica e nutricional.\n");
            break;
        case 't':
            printf("RECOMENDACAO:\n\n");
            printf("Nesse ponto, a chance de estarmos diante de outras doencas associadas sao mais elevada.\n");
            printf("Fundamental buscar orientacao medica.\n");
            break;
    }

    return 0;
}