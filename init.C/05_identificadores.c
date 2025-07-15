#include <stdio.h>
#include <stdbool.h> // Necessário para usar o tipo bool
#include <string.h> // Necessário para usar a função strcpy
#include <stdlib.h> // Necessário para usar a função exit


int main(){

    // Variaveis do tipo básico em C
    int idade = 25;
    float altura = 1.75;
    char letra = 'A';
    char nome[50] = "Maria";// Variável para armazenar uma string (cadeia de caracteres)
    bool estado = true; // Necessário incluir <stdbool.h> para usar o tipo bool



    // Exibindo os valores das variáveis //
    //==================================//

    // Exibindo a idade int
    printf("Idade: %d\n", idade);
    printf("Idade: %6d\n", idade); // Exibindo a idade com pelo menos 6 caracteres

    // Exibindo a altura float
    printf("Altura : %f\n", altura); // Exibindo a altura com todas as casas decimais
    printf("Altura: %.2f\n", altura);// Exibindo a altura com 2 casas decimais
    printf("Altura: %6.2f\n", altura); // Exibindo a altura com pelo menos 6 caracteres e 2 casas decimais

    // Exibindo a altura float
    printf("Letra: %c\n", letra);
    printf("Letra: %6c\n", letra); // Exibindo a letra com pelo menos 6 caracteres

    // Exibindo o nome cadeia de caracteres
    printf("Nome: %s\n", nome); // Exibindo o nome como string
    printf("Nome: %6s\n", nome); // Exibindo o nome com pelo menos 6 caracteres

    // Exibindo o estado booleano
    printf("Estado: %s\n", estado ? "verdadeiro" : "falso"); // Exibindo o estado como string como "verdadeiro" ou "falso" == ( %s )
    printf("Estado: %d\n", estado); // Exibindo o estado como inteiro (1 para verdadeiro, 0 para falso) == ( %d )

    return 0;
}

/*NOTA:

>> Tipos de Identificadores em C <<
// --------------------------------

    |  Variavel |  Identificador  |
    |-----------|-----------------|
    | int       |     %d          |
    | float     |     %.2f        |
    | char      |     %c          |
    | string    |     %s          |
    | bool      |     %s  || %d   |
// --------------------------------

*/

/*NOTA:

>> Diferença entre os Especificadores ( "%d" , "%i" , "%o", "%x OU %X" ) para variavel int idade;
=> Todos os Especificadores são usador para armazenar e exibir valores do tipo "int":

-> scanf("%d", &idade); Especificador padrão ele sempre interpreta e formata como um inteiro decimal (base 10).
-> scanf("%i", &idade); Especificador não muito utilizada ele interpreta como um inteiro, mas pode detectar a base automaticamente, como octal ou hexadecimal, dependendo do formato de entrada.
-> scanf("%o", &idade); Especificador utilizado para converter numeros inteiros para formato octal. O formato octal usa apenas os dígitos de 0 a 7.
-> scanf("%x", &idade); Especificador utilizador para converter numeros inteiros para formato um número hexadecimal, ou seja, na base 16. Os dígitos hexadecimais vão de 0 a 9 e, em seguida, a-f (ou A-F para %X, que exibe em letras maiúsculas)
-> scanf("%X", &idade); É a mesma coisa que o "%x"
-> scanf("%u", &idade); Especificador é usado para imprimir e ler valores do tipo inteiros que são apenas positivos (ou zero). Ele não le valoes negativos (-1).
-> scanf("%c", &idade); Especificador é usado para converter o valor da variável "int" utilizando tabela ASCII e imprime o caractere correspondente. 
    { EXEMPLO_01:                                                   
     int idade = 65; // 65 é o código ASCII da letra 'A'
        printf("Como inteiro: %d\n", x);   // Saída: 65
        printf("Como caractere: %c\n", x); // Saída: A
     }
  
*/


/*NOTA:

>> Diferença entre os Especificadores ( "%e", "%f", "%g OU %G" ) para variavel float OU double;
=> Todos os Especificadores são usador para armazenar e exibir valores do tipo "float OU double"

-> scanf("%f", &peso); Especificador padrão tanto para float OU double.
->scanf("%g", &peso); Especificador que converte valores decimais tanto de float OU doble para valores inteiros 

*/