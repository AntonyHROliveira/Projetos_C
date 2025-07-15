#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Bem-vindo a calculadora simples!\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    
// Verifica se o usuario digitou um operador valido
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        printf("Operacao invalida.\n");
        return 1; // Encerra o programa com erro
    }
    // escolhe a operacao com base no operador digitado pelo usuario
    // e realiza o calculo correspondente
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2f\n", result);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operação invalida.\n");
    }

    

    return 0;
}