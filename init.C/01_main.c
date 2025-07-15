#include <stdio.h>// Biblioteca padrão em C



// Versão Básica do ponto de entrada do programa em C

int main() {
    // Seu código aqui

    return 0;// Retorna 0 para indicar que o programa terminou com sucesso e não retona nada nem um valor inteiro ou erro
}



// Não é aceito o uso de char main() em C, pois a função main deve retornar um valor inteiro (int).
// O uso de char main() é incorreto e não segue a convenção padrão da linguagem C.
// A função main deve ser definida como int main() para indicar que retorna um valor inteiro.
char main() {

    return 0; 
}

//##########################################################################################################################

// Versão com Argumentos de Linha de Comando

int main(int argc, char *argv[]) {
    printf("Número de argumentos: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    return 0;
}

/* Explicação de int main(int argc, char *argv[]):

=> int argc:
   --> argc (argument count) é um inteiro que representa o número de argumentos de linha de comando passados para o programa. 
   O valor mínimo de argc é 1, pois o primeiro argumento é sempre o nome do programa em si.

=> char *argv[]:
   --> argv (argument vector) é um array de strings (ou array de ponteiros para caracteres) que contém os argumentos de linha de comando. 
   Cada elemento de argv é uma string que representa um argumento passado para o programa. O primeiro elemento, argv[0], é o nome do programa, 
   e os elementos subsequentes (argv[1], argv[2], etc.) são os argumentos fornecidos pelo usuário.

*/

//##########################################################################################################################

int main(void){
    // Seu código aqui
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
/* Explicação de int main(void):
=> int main(void):
   --> A função main é definida como int main(void) para indicar que não aceita argumentos de linha de comando.
   --> Isso significa que o programa não pode receber entradas diretamente da linha de comando ao ser executado.

=> void:
    --> O uso de void dentro dos parênteses indica que a função main não aceita nenhum parâmetro.
    --> Isso significa que a função main não pode receber argumentos ao ser chamada.

=> return 0:
   --> O valor retornado pela função main é usado pelo sistema operacional para indicar o status de saída do programa.
   --> Um retorno de 0 geralmente indica sucesso, enquanto um retorno diferente de 0 indica erro ou falha.

*/
//##########################################################################################################################


/*NOTA:

=> Um programa C consiste de uma ou mais partes chamadas funções
=> Cada função é um bloco de código que executa uma tarefa específica
=> Todo o programa em C é lido de cima para baixo, linha por linha.

>> main():
=> A função main é a função principal do programa, onde a execução começa
=> A função main é o ponto de entrada do programa em C.


>> int main():
=> Ela deve ser definida como int main() para indicar que retorna um valor inteiro

>> return 0;
=> O valor retornado pela função main é usado pelo sistema operacional para indicar o status de saída do programa
=> Um retorno de 0 geralmente indica sucesso, enquanto um retorno diferente de 0 indica erro ou falha

*/

//##########################################################################################################################

/*
Boas Práticas em C

1. Sempre inicialize suas variáveis. Isso evita comportamentos indesejados.
    -> int idade = 0; // Inicializa a variável idade com 0
    -> float altura = 1.75; // Inicializa a variável altura com 1.75
    -> char letra = 'A'; // Inicializa a variável letra com 'A'

2. Use nomes de variáveis descritivos. Isso torna o código mais legível.
 -> nomeEmpregado, nomeCliente, idadeUsuario OU nome_empregado, nome_cliente, idade_usuario são exemplos de nomes de variáveis descritivos e deixa o código mais claro.
    -> Evite nomes como a, b, c, pois não são descritivos.

3. Evite abreviações excessivas. Nomes de variáveis curtos podem ser difíceis de entender.
    -> Use nomes completos como nomeCompleto, dataNascimento, quantidadeItens em vez de n, dN, qI.

4. Use comentários para explicar partes complexas do código. Isso ajuda na manutenção e compreensão do código.
    -> // Exemplo de uso de comentários
    -> int idade = 0; // Inicializa a variável idade com 0

5. Mantenha a consistência. Siga um estilo de codificação consistente em todo o seu código.
    -> Use sempre o mesmo estilo de nomenclatura, como camelCase ou snake_case, para suas variáveis.
    -> Exemplo: nomeCompleto, dataNascimento, quantidadeItens (camelCase) ou nome_completo, data_nascimento, quantidade_itens (snake_case).

6. Evite usar variáveis globais, a menos que seja absolutamente necessário. Variáveis globais podem tornar o código difícil de entender e manter.
    -> Use variáveis locais sempre que possível, pois elas têm escopo limitado e são mais fáceis de gerenciar.
    -> Exemplo: declare variáveis dentro de funções em vez de fora delas.

7. Use constantes para valores que não mudam. Isso torna o código mais legível e fácil de manter.
    -> #define PI 3.14 // Define uma constante PI com o valor 3.14
    -> const int MAX_TENTATIVAS = 5; // Define uma constante MAX_TENTATIVAS com o valor 5

8. Use tipos de dados apropriados. Escolha o tipo de dado certo para a tarefa em questão.
    -> Use int para números inteiros, float para números de ponto flutuante e char para caracteres.
    -> Exemplo: int idade = 30; // Usando int para idade
    -> Exemplo: float altura = 1.75; // Usando float para altura
    -> Exemplo: char letra = 'A'; // Usando char para letra

9.Use nomes de variáveis do tipo i, j, k somente para variáveis tipo contadores;
    -> Exemplo: for (int i = 0; i < 10; i++) { // Usando i como contador em um loop
    -> Evite usar nomes como contador, índice, etc., pois eles não são descritivos.
    
10. Evite usar palavras-chave reservadas como nomes de variáveis. Isso pode causar erros de compilação.

    >> Tabela de palavras-chave reservadas em C <<
    -> auto, break, case, char, const, continue, default, do, double
    -> else, enum, extern, float, for, goto, if, int, long
    -> register, return, short, signed, sizeof, static, struct, switch
    -> typedef, union, unsigned, void, volatile, while



OBS: 
>> Termologia para nomear as partes do código:

    01. Data_Types(Tipos de Dados):
        * É utilizada na área onte é declarada as variaveis e constantes;
    
    02. Inputs(Entrada de Dados):
        * É utilizada na área onde o algortimo recebe a informações;

    03. Processing(Processamento dos Dados):
        * É utilizado na área onde o algortmo processa os dados;

    04. Outpts(Saida de Dados):
        * É utilizada na ára onde o algortmo exibe ou exporta as informações depois de processadas;



*///##########################################################################################################################