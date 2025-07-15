#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char nome[30];
    char endereco[50];
    char gosto[50];
    char lixo[10]; // Variável para capturar o lixo do buffer

    // Variável lixo para capturar o \n deixado pelo fgets
    printf("Digite o lixo: ");
    fgets(lixo, 10, stdin);
    fflush(stdin); // Limpa o buffer de entrada


    printf("Digite o Nome: ");
    fgets(nome, sizeof(nome), stdin);

    
    printf("Digite o Endereco: ");
    scanf("%50[^\n]s", endereco);
    fflush(stdin);
    
    printf("Digite Algo: ");
    gets(gosto);// Substitui o ( scanf )
    fflush(stdin);

    printf("Voce e o: %s", nome);
    printf("O Endereco e: %s", endereco);
    
    // puts(endereco);
    printf("\nVoce gosta de: %s", gosto);
 // OU
    // puts("Voce gosta de: ");
    // puts(gosto); // Usando puts para imprimir a string com quebra de linha automática
    // puts("");

    //



    return 0;
}
/*
 Comando para limpar o buffer de entrada;
=========================================

1. while (getchar() != '\n');
------------------------------
-> Como funciona: Este comando lê caracteres do buffer de entrada um por um até encontrar um caractere de nova linha (\n). Isso efetivamente descarta todos os caracteres restantes na linha de entrada, incluindo o caractere de nova linha.
   
-> Portabilidade: Este método é portátil e funciona de maneira consistente em diferentes sistemas e compiladores. É uma prática recomendada para limpar o buffer de entrada.
   
-> Uso: É especialmente útil quando você está lidando com entradas que podem incluir caracteres indesejados, como quando você usa scanf para ler números e depois precisa ler uma string.


2. fflush(stdin);
-----------------
-> Como funciona: O comando fflush é usado para limpar o buffer de saída de um stream, como stdout. No entanto, seu uso com stdin (entrada padrão) é indefinido de acordo com o padrão C. Isso significa que o comportamento pode variar entre diferentes sistemas e compiladores.
  
-> Portabilidade: O uso de fflush(stdin); não é recomendado porque não é garantido que funcione em todos os ambientes. Em alguns sistemas, pode não ter efeito, enquanto em outros pode causar comportamento inesperado.
   
-> Uso: Embora alguns compiladores possam permitir fflush(stdin); para limpar o buffer de entrada, é melhor evitar esse uso devido à falta de portabilidade e à possibilidade de comportamento indefinido.

Resumo;
-------
==> Recomendação: Use while (getchar() != '\n'); para limpar o buffer de entrada. É uma abordagem segura e portátil.
   
==> Evite: fflush(stdin); para limpar o buffer de entrada, pois seu comportamento não é definido pelo padrão C e pode levar a problemas de portabilidade e confiabilidade do código.


*/



//########################################################################################################################################

#include <stdio.h>

int main() {
    // Data_Types(Tipos de dados)
    //---------------------------
    int inteiro;
    float ponto_flutuante;
    char letra;
    char cadeia_string[50];

    // Inputs(Entrada de Dados)
    //--------------------------
    printf("\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    printf("\n");
    
    printf("Digite um numero decimal: ");
    scanf("%f", &ponto_flutuante);
    //fflush(stdin);

   while(getchar() != '\n');
    
    printf("\n");
    
    printf("Digite uma palavra: ");
    fgets(cadeia_string, sizeof(cadeia_string), stdin);
    
    printf("\n");
    
    printf("Digite uma unica letra: ");
    scanf("%c", &letra);
    
    // Outputs(Saida de dados)
    //------------------------
    printf("Saida de dados\n");
    printf("=================\n");
    printf("O numero e: %d\n", inteiro);
    printf("O numero decimal e: %.2f\n", ponto_flutuante);
    printf("A letra e a: %c\n", letra);
    printf("A palavra ou frase e a: %s", cadeia_string);

    return 0;
}
//############################################################################################################################



#include<stdio.h>

int main(){

    // Data_Types
    char descricao_algoritmo[50];
    char autor[50];

printf("Descreva o algoritmo em ate 50 letras\n");

// Inputs
printf("Descricao: ");
fgets(descricao_algoritmo, sizeof(descricao_algoritmo), stdin);

// Para remover o '\n' de dentro de String lidas com fgets();
//descricao_algoritmo[strcspn(descricao_algoritmo, "\n")] = '\0';

// OU usar este

// Para limpar o buffer deixado pelos comandos scanf(); || fgets(); OBS{ Este comando NÃO limpa o '\n' de dentro das Strings lidas com fgets(); }
// while(getchar() != '\n');

printf("Nome do Autor: ");
fgets(autor, sizeof(autor), stdin);

// Outputs
printf("\n===================================\n");
printf("O algoritmo faz: %s", descricao_algoritmo);
printf("\n");
printf("O nome do Autor e: %s", autor);

return 0;



}







































/*NOTA: 

=> Strings em C: São caracteres do tipo ("char") agrupados dentro de um Array terminados por um caractere nulo ('\0'). 
   Isso significa que o último caractere de uma string em C é sempre '\0', que indica o fim da string.

=> Caracter de terminação nula ('\0'): É usado para indicar o final de uma string em C. 
   Isso é importante porque as funções de manipulação de strings, como `printf`, `scanf`, `fgets`, etc., 
   usam esse caractere para determinar onde a string termina.

=> Ponteiro de Memória: Em C, uma string é representada como um ponteiro para o primeiro caractere do array de caracteres. 
   Isso significa que você pode manipular strings usando ponteiros, o que é uma característica poderosa da linguagem C.   

=> Identificador de Strng(&): Em C, você pode usar o operador `&` para obter o endereço de memória de uma variável. 
   No caso de strings, não usa o ("&nome") mais sim  somente o nome do vetor("nome") pois toda a cadeia de caracter string já é tratada como um ponteiro somente o primeiro caractere.

=> Funções de manipulação de strings: C fornece várias funções para manipular strings, como `strlen`, `strcpy`, `strcat`, `strcmp`, etc. 
   Essas funções são definidas na biblioteca `<string.h>` e são usadas para calcular o comprimento de uma string, copiar strings, concatenar strings, comparar strings, etc.

=> Operadores de comparação de strings: Em C, você pode comparar strings usando funções como `strcmp`, que compara duas strings lexicograficamente. 
   Não é possível usar operadores de comparação diretos (como `==` ou `!=`) para comparar strings, pois eles comparam endereços de memória, não o conteúdo das strings.   


*/