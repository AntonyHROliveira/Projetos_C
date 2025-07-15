#include <stdio.h>
// Este programa demonstra o uso de constantes em C


// Definição de constantes
#define PI 3.14159 // Constante para o valor de PI  
#define MAX_SIZE 100 // Constante para o tamanho máximo de um array
const int MAX_ATTEMPTS = 5; // Constante para o número máximo de tentativas



/* 
1. Constantes são usadas para definir valores que não mudam durante a execução do programa
 
2. As constantes são úteis para evitar erros de digitação e tornar o código mais legível

3. As constantes podem ser definidas usando a diretiva:
    -> ( #define )
    -> palavra-chave ( const )

4.Diferença entre #define & const

>> # define (Pré-processador)
 -> As constantes definidas com #define são substituídas pelo pré-processador antes da compilação
 -> Não ocupa espaço na memória.
 -> É apenas uma substituição textual feita antes da compilação.
 -> O compilador substitui todas as ocorrências de PI por 3.14159 no código fonte.
 -> Não há variável, logo nenhum endereço de memória é alocado.
<<

>> const (constante de tempo de compilação)
 -> É uma palavra-chave que define uma variável como constante
 -> Ocupa espaço na memória, mas seu valor não pode ser alterado após a inicialização
 -> Pode ter um endereço, pode ser passada por ponteiro, etc.
 -> O compilador pode otimizar e colocá-la em uma área de memória somente leitura, mas ainda assim é memória.
<<

*/ 