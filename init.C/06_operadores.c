#include <stdio.h>

int main() {
    // Operadores aritméticos
    int a = 10, b = 5;
    printf("Soma: %d\n", a + b);        // Adição
    printf("Subtração: %d\n", a - b);   // Subtração
    printf("Multiplicação: %d\n", a * b); // Multiplicação
    printf("Divisão: %d\n", a / b);      // Divisão
    printf("Módulo: %d\n", a % b);       // Módulo
/*NOTA:
     -> Os operadores aritméticos possuem precedência, ou seja, a ordem em que são avaliados em uma expressão.
     -> A precedência dos operadores aritméticos é a seguinte:
        1. Parênteses ()
        2. Exponenciação (não disponível em C padrão, mas pode ser implementada com funções)
        3. Multiplicação (*) e Divisão (/)
        4. Adição (+) e Subtração (-)
*/     


// Operadores de comparação
    int a = 10, b = 20;
    printf("Igualdade: %d\n", a == b);  // Igualdade
    printf("Desigualdade: %d\n", a != b); // Desigualdade
    printf("Maior que: %d\n", a > b);     // Maior que
    printf("Menor que: %d\n", a < b);     // Menor que
    printf("Maior ou igual: %d\n", a >= b); // Maior ou igual
    printf("Menor ou igual: %d\n", a <= b); // Menor ou igual
/*NOTA:
     -> Os operadores de comparação são usados para comparar valores e retornam 1 (verdadeiro) ou 0 (falso).
     -> Eles são frequentemente usados em estruturas de controle, como if, while e for.
     -> A precedência dos operadores de comparação é menor que a dos operadores aritméticos, mas maior que a dos operadores lógicos.
*/


// Operadores lógicos
    int x = 1, y = 0;
    printf("E lógico: %d\n", x && y);    // E lógico
    printf("Ou lógico: %d\n", x || y);   // Ou lógico
    printf("Negação: %d\n", !x);         // Negação
    printf("Negação: %d\n", !y);         // Negação
    printf("XOR lógico: %d\n", x ^ y);   // XOR lógico
    printf("XOR lógico: %d\n", y ^ x);   // XOR lógico
    printf("XOR lógico: %d\n", x ^ x);   // XOR lógico
    printf("XOR lógico: %d\n", y ^ y);   // XOR lógico
    printf("XOR lógico: %d\n", x ^ 0);   // XOR lógico
    printf("XOR lógico: %d\n", y ^ 1);   // XOR lógico
/* NOTA: 
      -> Em C os operadores lógicos são usados para operações booleanas, onde 1 representa verdadeiro e 0 representa falso.
      -> Os valores booleanos são armazenados como variáveis numéricas tais como o int
      -> Os operadores lógicos possuem precedência, ou seja, a ordem em que são avaliados em uma expressão.
      -> A precedência dos operadores lógicos é a seguinte:
        1. Negação (!)
        2. E lógico (&&)
        3. Ou lógico (||)
        4. XOR lógico (^)

*/
    
// Operadores bit a bit
    int m = 6, n = 3; // 6 = 110 em binário, 3 = 011 em binário
    printf("E bit a bit: %d\n", m & n);  // E bit a bit
    printf("Ou bit a bit: %d\n", m | n); // Ou bit a bit
    printf("XOR bit a bit: %d\n", m ^ n); // XOR bit a bit
    printf("Complemento bit a bit: %d\n", ~m); // Complemento bit a bit
    printf("Deslocamento à esquerda: %d\n", m << 1); // Deslocamento à esquerda
    printf("Deslocamento à direita: %d\n", m >> 1); // Deslocamento à direita
/* NOTA:
     -> Os operadores bit a bit são usados para manipular bits individuais de números inteiros.
     -> Eles operam diretamente nos bits dos números, permitindo operações de baixo nível.
     -> A precedência dos operadores bit a bit é menor que a dos operadores lógicos, mas maior que a dos operadores de atribuição.
        -> A precedência dos operadores bit a bit é a seguinte:
            1. Deslocamento à esquerda (<<) e deslocamento à direita (>>)
            2. E bit a bit (&)
            3. Ou bit a bit (|)
            4. XOR bit a bit (^)
*/

// Operadores de atribuição aritmética
    int c = 10;
    c += 5; // Atribuição com adição
    printf("Atribuição com adição: %d\n", c);
    c -= 3; // Atribuição com subtração
    printf("Atribuição com subtração: %d\n", c);
    c *= 2; // Atribuição com multiplicação
    printf("Atribuição com multiplicação: %d\n", c);
    c /= 4; // Atribuição com divisão
    printf("Atribuição com divisão: %d\n", c);
    c %= 3; // Atribuição com módulo
    printf("Atribuição com módulo: %d\n", c);
    c &= 1; // Atribuição com E bit a bit
    printf("Atribuição com E bit a bit: %d\n", c);
    c |= 2; // Atribuição com Ou bit a bit
    printf("Atribuição com Ou bit a bit: %d\n", c);
    c ^= 1; // Atribuição com XOR bit a bit
    printf("Atribuição com XOR bit a bit: %d\n", c);
    c <<= 1; // Atribuição com deslocamento à esquerda
    printf("Atribuição com deslocamento à esquerda: %d\n", c);
    c >>= 1; // Atribuição com deslocamento à direita
    printf("Atribuição com deslocamento à direita: %d\n", c);
/* NOTA:
     -> Os operadores de atribuição são usados para atribuir valores a variáveis.
     -> Eles podem ser combinados com operadores aritméticos, bit a bit e lógicos.
     -> A precedência dos operadores de atribuição é a menor entre todos os operadores.
     -> Os operadores de atribuição podem ser combinados com outros operadores.
     -> Isso permite escrever expressões mais concisas e legíveis.

        -> A precedência dos operadores de atribuição é a seguinte:
            1. Atribuição simples (=)
            2. Atribuição com adição (+=)
            3. Atribuição com subtração (-=)
            4. Atribuição com multiplicação (*=)
            5. Atribuição com divisão (/=)
            6. Atribuição com módulo (%=)
            7. Atribuição com E bit a bit (&=)
            8. Atribuição com Ou bit a bit (|=)
            9. Atribuição com XOR bit a bit (^=)
            10. Atribuição com deslocamento à esquerda (<<=)
            11. Atribuição com deslocamento à direita (>>=)
*/

// Operadores condicionais (ternários)
    int idade = 18;
    printf("Você é %s maior de idade.\n", (idade >= 18) ? "um" : "um menor"); // Operador ternário
/* NOTA:
     -> O operador ternário é uma forma concisa de escrever uma expressão condicional.
     -> Ele avalia uma condição e retorna um valor com base no resultado.
     -> A sintaxe é: condição ? valor_se_verdadeiro : valor_se_falso;
*/

    // Operadores unários
    int d = 5;
    printf("Valor original: %d\n", d);
    printf("Pré-incremento: %d\n", ++d); // Pré-incremento
    printf("Valor após pré-incremento: %d\n", d);   
    printf("Pós-incremento: %d\n", d++); // Pós-incremento
    printf("Valor após pós-incremento: %d\n", d);
    printf("Pré-decremento: %d\n", --d); // Pré-decremento
    printf("Valor após pré-decremento: %d\n", d);
    printf("Pós-decremento: %d\n", d--); // Pós-decremento
    printf("Valor após pós-decremento: %d\n", d);
    printf("Negação unária: %d\n", -d); // Negação unária
    printf("Valor absoluto: %d\n", d < 0 ? -d : d); // Valor absoluto com operador ( ternário )
    printf("Incremento: %d\n", d + 1); // Incremento
    printf("Decremento: %d\n", d - 1); // Decremento
/* NOTA:
     -> Os operadores unários operam em um único operando e podem alterar seu valor.
     -> Eles incluem pré-incremento, pós-incremento, pré-decremento, pós-decremento e negação unária.
     -> A precedência dos operadores unários é alta, o que significa que eles são avaliados antes dos operadores binários.
     -> A precedência dos operadores unários é a seguinte:
        1. Pré-incremento (++)
        2. Pré-decremento (--)
        3. Negação unária (-)
        4. Operador lógico NOT (!)
*/        
    
//  Operador de adição binária (binary addition operator)
    char letra = 'A';
    printf("%c", 'A' + 1); // Imprime o próximo caractere após 'A'
    printf("%c", letra + 1); // Imprime o próximo caractere após '
/*NOTA:
     -> Nos dois casos, o operador (+) está realizando uma adição aritmética entre caracteres, que na verdade são representados por valores inteiros (códigos ASCII).
     -> Detalhes técnicos:
        = O caractere 'A' tem o valor ASCII 65.
        = Quando você faz 'A' + 1, isso vira 65 + 1 = 66.
        = O código ASCII 66 representa o caractere 'B'.
        = O mesmo vale para letra + 1, já que letra vale 'A'.
*/







    
/*NOTA:
     
    -> Operadores aritméticos tem precedência maior que os operadores relacionais. 
Por exemplo, a expressão
    3 + 5 < 6 * 2 é o mesmo que (3 + 5) < (6 * 2)
     
    -> Operadores relacionais tem precedência maior que os operadores lógicos. 
Por exemplo, a expressão
    (3 + 5 < 6 * 2) && (4 > 2) é o mesmo que ((3 + 5) < (6 * 2)) && (4 > 2)
    (3 + 5 < 6 * 2) && (4 > 2) || (5 == 5) é o mesmo que (((3 + 5) < (6 * 2)) && (4 > 2)) || (5 == 5)
    
    -> Operadores lógicos tem precedência maior que os operadores bit a bit. 
Por exemplo
    (3 + 5 < 6 * 2) && (4 > 2) || (5 == 5) & (6 < 7) é o mesmo que ((((3 + 5) < (6 * 2)) && (4 > 2)) || (5 == 5)) & (6 < 7)
    (3 + 5 < 6 * 2) && (4 > 2) || (5 == 5) & (6 < 7) | (8 > 9) é o mesmo que (((((3 + 5) < (6 * 2)) && (4 > 2)) || (5 == 5)) & (6 < 7)) | (8 > 9)
    
    -> Operadores bit a bit tem precedência maior que os operadores de atribuição. 
Por exemplo
    (3 + 5 < 6 * 2) && (4 > 2) || (5 == 5) & (6 < 7) | (8 > 9) ^ (10 < 11) é o mesmo que ((((((3 + 5) < (6 * 2)) && (4 > 2)) || (5 == 5)) & (6 < 7)) | (8 > 9)) ^ (10 < 11)
    

-> A precedência dos operadores é importante para entender como as expressões são avaliadas em C.
-> A precedência dos operadores é a ordem em que os operadores são avaliados em uma expressão.

*/ 





    return 0;
}