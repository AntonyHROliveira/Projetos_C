/*
>> O que é benchmark ?
======================
✅ Definição:

  --> Benchmark é o processo de medir o desempenho de um trecho de código ou sistema — geralmente em termos de tempo de execução, uso de memória, velocidade, eficiência, etc.

🔍 Exemplos de uso:
====================
  --> Comparar qual função executa mais rápido: scanf vs fgets

  --> Ver quanto tempo leva para processar 1 milhão de dados

  --> Analisar gargalos (pontos lentos) em um código

*/

/*

>> Como medir tempo de execução em C com a Função clock(); da biblioteca <time.h> ?
=========================================================================
    
 --> Mede o tempo de CPU desde o início da execução do programa

 -->  A unidade é em "ticks de clock" (não segundos diretamente)

*/

//###########################################################################################################################################
//###########################################################################################################################################


// #include<stdio.h>
// #include<time.h>

// int main(){
    
//     clock_t inicio, fim;
//     double tempo_total;
    
//     // Inicio do benchamark
//     inicio = clock();
    
//     // Código a ser Testado
//     for(long i = 0; i < 100000000; i++ ){
//         int num01, num02, soma;
        
//         printf("Digite um numero: ");
//         scanf("%d", &num01);
        
//         printf("Digite um numero: ");
//         scanf("%d", &num02);
        
//         soma = num01 * num02;
        
//         printf("O produto de %d X %d = %d",num01,num02,soma);
//         break;
        
//     }
//     // Fim do benchamark
//     fim = clock();

// // Conversão p/ segundos
// tempo_total = (double)(fim - inicio) / CLOCKS_PER_SEC;
// printf("\n-----------------------------------\n\n");
// printf("tempo de execucao: %.4f seg",tempo_total);
// printf("\n\n");



// return 0;
// }

//###########################################################################################################################################
//###########################################################################################################################################


// Comparando o Tempo de execução entre { scanf || fgets } usando a Função clock();

// #include<stdio.h>
// #include<string.h>
// #include<time.h>

// int main(){
    
// // Data-Types    
//     char entrada[100];
//     clock_t inicio, fim;
//     double tempo;
    

// // Inputs    
//     printf("Digite algo: ");

//     // Processing    
//     inicio = clock();// Inicio do benchamark

//     //scanf("%99[^\n]",entrada);
//     //int c;
//     //while((c = getchar()) != '\n' && c != EOF);

//     //fgets(entrada, sizeof(entrada), stdin);
//     //entrada[strcspn(entrada, "\n")] = '\0';
    
//     //fgets(entrada, 100, stdin);
//     //entrada[strcspn(entrada, "\n")] = '\0';
    
//     //gets(entrada);
    
//     fim = clock();// fim do benchamark

//     tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;// Conversão p/ Segundos

//     // Outputs
//     printf("\n------------------------\n");
//     printf("\nVoce digitou: %s", entrada);
//     printf("\nO Tempo de Leitura foi de: %.6f seg",tempo);    
    
    
    
//     return 0;
// }

//###########################################################################################################################################
//###########################################################################################################################################

// Comparando o Tempo de Execução com a Função QueryPerformanceCounter();

// #include<stdio.h>
// #include<string.h>
// #include<windows.h> // Biblioteca da API do Windows;

// int main(){
    // // Data-Types:    
//     LARGE_INTEGER inicio, fim, frequencia;
//     double tempo_execucao;

// // Processing:    

//     QueryPerformanceCounter(&frequencia);// Obtém a frequência do contador de alta resolução;

//     QueryPerformanceCounter(&inicio);// Marca o Tempo de início;

//     for(volatile long long i = 0; i < 100000000; i++ );// Código a ser Testado;

//     QueryPerformanceCounter(&fim);// Marca o Tempo do Fim;

//     tempo_execucao = (double)(fim.QuadPart - inicio.QuadPart) / frequencia.QuadPart;// Calcula o Tempo Total em segundos;

// // Outputs
//     printf("O tempo de execucao foi de: %.10f", tempo_execucao);

//     return 0;
// }

//###########################################################################################################################################
//###########################################################################################################################################


/* Comparar o tempo de diferentes funções

1. Laço com soma de inteiros simples

2. Laço com multiplicação de inteiros simples

3. Contagem de letras em uma string
*/
#include<stdio.h>
#include<windows.h>
#include<string.h>

void medir_execucao(void(*func)(), const char* descricao){
    LARGE_INTEGER inicio, fim, frequencia;
    double tempo;

    QueryPerformanceCounter(&frequencia);
    QueryPerformanceCounter(&inicio);

    func();// Executando a Função;

    QueryPerformanceCounter(&fim);

    tempo = (double)(fim.QuadPart - inicio.QuadPart) / frequencia.QuadPart;
    printf("\n[%s] Tempo de execução: %.10f seg\n", descricao, tempo);
}

// Função_01 Laço com soma de inteiros simples;
void somar_mumeros(){
    long long soma = 0;
    for(long long i = 1; i <= 10000000; i++){
        soma += i;
    }
}

// Função_02 Laço com multiplicação de inteiros simples
void mult_numeros(){
    long long prod = 1;
    for(int i = 1; i <= 1000; i++){
        prod *= i;
        if (prod > 1000000000) prod = 1; // evita overflow

    }
}

// Função_03 Contagem de letras em uma string
void contar_string(){
    char texto[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    int contador = 0;
    for(int i = 0; i < strlen(texto); i++){
        if((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')){
            contador++;
        }
    }
}

//Função Principal
int main(){
    medir_execucao(somar_mumeros, "Soma");
    medir_execucao(mult_numeros, "Multiplicação");
    medir_execucao(contar_string, "Contar Letras");
    
    return 0;
}