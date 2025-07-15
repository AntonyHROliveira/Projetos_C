#include <stdio.h>

// Este programa solicita ao usuário que insira sua idade e, em seguida, exibe essa idade na tela.

int main() {
    int idade;

    printf("Digite sua idade: "); // Solicita ao usuário que insira sua idade
    scanf("%d", &idade); // lê a idade do usuário e armazena na variável idade
    
    
    
    // Exibe a idade do usuário
    printf("Sua idade é: %d\n", idade);


    return 0;
}




/*NOTA:

>> Tipos de Entrada e Saída em C:
-> Entrada: "scanf", "gets", "fgets", "getchar", "getch", "getchar_unlocked", "fgetc"




>> Tipos de Entrada e Saída em C:
<< == scanf == >>
-----------------
>> Tipos de Entrada em C "scanf" com especificadores de formato para leitura e armazenamento de dados:
-> int idade = scanf("%d", &idade);
-> float altura = scanf("%f", &altura);
-> char letra = scanf("%c", &letra);
==> NOTA: O uso de "&" é necessário para variáveis do tipo int, float e char, pois "scanf" precisa do "endereço de memoria" da variável para armazenar o valor lido.

>> Tipos de Entrada em C "scanf" com especificadores de formato e tamanho para leitura e armazenamento de dados:
-> int idade = scanf("%6d", &idade); // Lê até 6 dígitos
-> float altura = scanf("%6.2f", &altura); // Lê até 6 caracteres com 2 casas decimais
-> char letra = scanf("%c", &letra); // Lê um único caractere
==> NOTA: O "scanf" lê os dados da entrada padrão (stdin).
==> NOTA: O "scanf" não é seguro para ler "strings" = ( Cadeia de Caracter ), pois não verifica o ( tamanho do buffer ) == ( Tamanho da cadeia de caracter ). Use "fgets" para ler strings de forma segura. 

>> Multiplas Entrada em C usando o "scanf"
 int idade, ano_nascimento;
 float altura, peso;

  printf("Digite o ano de nascimento, a idade, a altura e o peso:\n");
  scanf("%d %d %f %f", &ano_nascimento, &idade, &altura, &peso);

 printf("Ano de nascimento: %d\n", ano_nascimento);
 printf("Idade: %d\n", idade);
 printf("Altura: %.2f metros\n", altura);
 printf("Peso: %.2f kg\n", peso); 
.



<< == gets == >>
----------------
>> Tipos de Entrada em C "get" para leitura e armazenamento de dados:
-> int idade = get("Digite sua idade: ");
-> float altura = get("Digite sua altura: ");
-> char letra = get("Digite uma letra: ");

>> Tipos de Entrada em C "gets" para leitura e armazenamento de dados:
-> int idade = gets("Digite sua idade: ");
-> float altura = gets("Digite sua altura: ");
-> char letra = gets("Digite uma letra: ");


<< == fgets == >>
-----------------
>> Tipos de Entrada em C "fgets" para leitura uma linha de texto de forma segura e armazenamento de dados:
-> int idade = fgets("Digite sua idade: ", sizeof(idade), stdin);
-> float altura = fgets("Digite sua altura: ", sizeof(altura), stdin);
-> char letra = fgets("Digite uma letra: ", sizeof(letra), stdin);


<< == getchar == >>
-------------------
>> Tipos de Entrada em C "getchar" para leitura de um único caractere:
-> int idade = getchar(); // Lê um único caractere da entrada padrão
-> float altura = getchar(); // Lê um único caractere da entrada padrão
-> char letra = getchar(); // Lê um único caractere da entrada padrão

>> Tipos de Entrada em C "getch" para leitura de um único caractere sem exibir na tela:
-> int idade = getch(); // Lê um único caractere da entrada padrão sem exibir na tela
-> float altura = getch(); // Lê um único caractere da entrada padrão sem exibir na tela
-> char letra = getch(); // Lê um único caractere da entrada padrão sem exibir na tela

>> Tipos de Entrada em C "getchar_unlocked" para leitura de um único caractere sem bloqueio:
-> int idade = getchar_unlocked(); // Lê um único caractere da entrada padrão sem bloqueio
-> float altura = getchar_unlocked(); // Lê um único caractere da entrada padrão sem bloqueio
-> char letra = getchar_unlocked(); // Lê um único caractere da entrada padrão sem bloqueio


<< == fgetc == >>
-----------------
>> Tipos de Entrada em C "fgetc" para leitura de um único caractere de um arquivo:
-> int idade = fgetc(stdin); // Lê um único caractere da entrada padrão (stdin)
-> float altura = fgetc(stdin); // Lê um único caractere da entrada padrão (stdin)
-> char letra = fgetc(stdin); // Lê um único caractere da entrada padrão (stdin)

>> Tipos de Entrada em C "fgets" para leitura de uma linha de texto de um arquivo:
-> int idade = fgets("Digite sua idade: ", sizeof(idade), stdin);
-> float altura = fgets("Digite sua altura: ", sizeof(altura), stdin);
-> char letra = fgets("Digite uma letra: ", sizeof(letra), stdin);




//#####################################################################################################################################

>> Tipos de Saída em C:
-> Saída: "printf", "fprintf", "sprintf", "snprintf", "putchar", "puts", "vprintf"

<< == printf == >> 
------------------
>> tipos de saída em C "printf" para exibir dados formatados:
-> int idade = printf("Sua idade é: %d\n", idade);
-> float altura = printf("Sua altura é: %.2f\n", altura); 
-> char letra = printf("Sua letra é: %c\n", letra);

>> tipos de saída em C "printf" com especificadores de formato e tamanho:
-> int idade = printf("Sua idade é: %6d\n", idade); // Exibe a idade com pelo menos 6 caracteres
-> float altura = printf("Sua altura é: %6.2f\n", altura); // Exibe a altura com pelo menos 6 caracteres e 2 casas decimais
-> char letra = printf("Sua letra é: %c\n", letra); // Exibe um único caractere
==> NOTA: O "printf" exibe os dados na saída padrão (stdout), que geralmente é o console ou terminal. O "printf" é a saida padrão para exibir dados formatados em C.


<< == fprintf == >>
-------------------
>> tipos de saída em C "fprintf" para exibir dados formatados em um arquivo:
-> int idade = fprintf(stdout, "Sua idade é: %d\n", idade); // Exibe a idade no console
-> float altura = fprintf(stdout, "Sua altura é: %.2f\n", altura); // Exibe a altura no console
-> char letra = fprintf(stdout, "Sua letra é: %c\n", letra); // Exibe um único caractere no console 


<< == sprintf == >>
-------------------
>> tipos de saída em C "sprintf" para formatar dados em uma string:
-> char buffer[100];
-> int idade = sprintf(buffer, "Sua idade é: %d", idade); // Formata a idade em uma string
-> float altura = sprintf(buffer, "Sua altura é: %.2f", altura); // Formata a altura em uma string
-> char letra = sprintf(buffer, "Sua letra é: %c", letra); // Formata um único caractere em uma string


<< == snprintf == >>
-------------------
>> tipos de saída em C "snprintf" para formatar dados em uma string com limite de tamanho:
-> char buffer[100];
-> int idade = snprintf(buffer, sizeof(buffer), "Sua idade é: %d", idade); // Formata a idade em uma string com limite de tamanho
-> float altura = snprintf(buffer, sizeof(buffer), "Sua altura é: %.2f",
altura); // Formata a altura em uma string com limite de tamanho
-> char letra = snprintf(buffer, sizeof(buffer), "Sua letra é: %c", letra); // Formata um único caractere em uma string com limite de tamanho
// -> char lixo[10]; // Variável para capturar o lixo do buffer


<< == putchar == >>
-------------------
>> tipos de saída em C "putchar" para exibir um único caractere:
-> int idade = putchar('A'); // Exibe o caractere 'A'
-> float altura = putchar('B'); // Exibe o caractere 'B'
-> char letra = putchar('C'); // Exibe o caractere 'C'
// -> putchar('\n'); // Exibe uma nova linha


<< == puts == >>
----------------
>> tipos de saída em C "puts" para exibir uma string com quebra de linha automática:
-> int idade = puts("Sua idade é: 25"); // Exibe a string com quebra de linha
-> float altura = puts("Sua altura é: 1.75"); // Exibe a string com quebra de linha
-> char letra = puts("Sua letra é: A"); // Exibe a string com quebra de linha


<< == vprintf == >>
-------------------
>> tipos de saída em C "vprintf" para exibir dados formatados com uma lista de argumentos:
-> int idade = vprintf("Sua idade é: %d\n", (va_list){idade}); // Exibe a idade formatada
-> float altura = vprintf("Sua altura é: %.2f\n", (va_list){altura}); // Exibe a altura formatada
-> char letra = vprintf("Sua letra é: %c\n", (va_list){letra}); // Exibe um único caractere formatado
// -> printf("Digite o lixo: ");
// -> fgets(lixo, 10, stdin); // Lê o lixo do buffer
// -> fflush(stdin); // Limpa o buffer de entrada



OBS : As Funções ( scanf & printf ) são da biblioteca padrão de entrada e saída em C, que é incluída com a diretiva #include <stdio.h>.

>> Tipos de Especificadores de Formato em C:

 -> %d - Inteiro decimal
 -> %f - Ponto flutuante
 -> %c - Caractere
 -> %s - String (sequência de caracteres)
 -> %lf - Ponto flutuante de precisão dupla (double)
<<

>> Definindo o Tamanho do Formato em C:

 -> %6d - Inteiro com pelo menos 6 caracteres
 -> %6f - Ponto flutuante com pelo menos 6 caracteres
 -> %.2f - Ponto flutuante com 2 casas decimais
 -> %6.2f - Ponto flutuante com pelo menos 6 caracteres e 2 casas decimais
 -> %6.0f - Ponto flutuante com pelo menos 6 caracteres e sem casas decimais

 NOTA:
 => A especificação de tamanho simplesmente determina o tamanho mínimo. Se o número não couber no tamanho especificado, o número completo será mostrado
 
<<


>> Tipos de Caracteres de Escape em C:

 -> \n - Nova linha
 -> \t - Tabulação
 -> \\ - Barra invertida
 -> \" - Aspas duplas
 -> \' - Aspas simples
<<
*/
