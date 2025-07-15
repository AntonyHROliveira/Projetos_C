// #include <stdio.h>

// int main() {
//     char letra = 'A';

//     // Avança para a próxima letra
//     letra = letra + 1; // agora letra = 'B'

//     // Volta para a letra anterior
//     letra = letra - 1; // agora letra volta a ser 'A'

//     printf("Letra final: %c\n", letra); // Saída: A

//     return 0;
// }

//##########################################################################################

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){

//     float nota01;
//     float nota02;

//     float media_aluno;

//     do
//     {
//         printf("Insira a Primeira Nota: ");
//         scanf("%f", &nota01);
        
//         if (nota01 < 0 || nota01 >= 11){
//             printf("Nota Invalida.");
//             printf("Insira a Primeira Nota: ");
//             scanf("%f", &nota01);   
//         }
        
//     } while (nota01 < 0 || nota01 >= 11);
    
//     do{
//         printf("Insira a Segunda Nota: ");
//         scanf("%f", &nota02);
    
//         if(nota02 < 0 || nota02 >= 11){
//             printf("Nota Invalida.\n");
//             printf("Insira a Segunda Nota: ");
//             scanf("%f", &nota02);
//         }

//     }while(nota02 < 0 || nota02 >= 11);

//     media_aluno = (nota01 + nota02) / 2;

//     printf("A media do aluno e: %.2f", media_aluno);

//     return 0;
// }

//##########################################################################################

// #include <stdio.h>
// #include <stdlib.h>

// float lerNota() {
//     float nota;
//     while (1) {
//         printf("Insira a Nota: ");
//         if (scanf("%f", &nota) != 1) {
//             printf("Entrada inválida. Por favor, insira um número.\n");
//             while (getchar() != '\n'); // Limpa o buffer
//             continue;
//         }
//         if (nota >= 0 && nota < 11) {
//             return nota;
//         }
//         printf("Nota Invalida. Deve estar entre 0 e 10.\n");
//     }
// }

// int main() {
//     float nota01 = lerNota();
//     float nota02 = lerNota();
//     float media_aluno = (nota01 + nota02) / 2;

//     printf("A media do aluno e: %.2f\n", media_aluno);
//     return 0;
// }

//###########################################################################################################################


// #include<stdio.h>
// #include<stdlib.h>

// int main(){

    // float nota01, nota02, media_aluno;  

    // do {
    //     printf("Insira a Primeira Nota: ");
    //     if(parseFloat(scanf("%f", &nota01) != 1)) {
    //         printf("Entrada inválida. Por favor, insira um número.\n");
    //         while (getchar() != '\n'); // Limpa o buffer
    //         continue;
    //     }

        
        
    //     if (nota01 < 0 || nota01 >= 11) {
    //         printf("Nota Invalida. Deve estar entre 0 e 10.\n");
    //     }
    // } while (nota01 < 0 || nota01 >= 11);

    // do {
    //     printf("Insira a Segunda Nota: ");
    //     scanf("%f", &nota02);
        
    //     if (nota02 < 0 || nota02 >= 11) {
    //         printf("Nota Invalida. Deve estar entre 0 e 10.\n");
    //     }
    // } while (nota02 < 0 || nota02 >= 11);

    // media_aluno = (nota01 + nota02) / 2;

    //  if (media_aluno >= 7.0) {
    //     printf("Aluno aprovado.\n");
    // } else if (media_aluno >= 5.0) {
    //     printf("Aluno em recuperacao.\n");
    // } else {
    //     printf("Aluno reprovado.\n");
    //}

   // printf("A media do aluno e: %.2f\n", media_aluno);
   
//====================================================================================================


// V-02
//     float nota01, nota02, media_aluno;


// // Loop para garantir a entrada válida da primeira nota
// while (1) {// (1) = true 
//     printf("Insira a Primeira Nota: ");
//     if (scanf("%f", &nota01) != 1) {// Verifica se a entrada é diferente de 1 = true
//         // Se a entrada não for um número válido, exibe mensagem de erro e limpa o buffer
//         printf("Entrada inválida. Por favor, insira um número.\n");
//         while (getchar() != '\n'); // Limpa o buffer
//         continue;// Continua o loop para solicitar novamente a nota
//     }
//     if (nota01 < 0 || nota01 > 10) {
//         printf("Nota Invalida. Deve estar entre 0 e 10.\n");
//         continue;
//     }
//     break;
// }

// while (1) {
//     printf("Insira a Segunda Nota: ");
//     if (scanf("%f", &nota02) != 1) {
//         printf("Entrada inválida. Por favor, insira um número.\n");
//         while (getchar() != '\n'); // Limpa o buffer
//         continue;
//     }
//     if (nota02 < 0 || nota02 > 10) {
//         printf("Nota Invalida. Deve estar entre 0 e 10.\n");
//         continue;
//     }
//     break;
// }

// media_aluno = (nota01 + nota02) / 2;

// if (media_aluno >= 7.0) {
//     printf("Aluno aprovado.\n");
// } else if (media_aluno >= 5.0) {
//     printf("Aluno em recuperacao.\n");
// } else {
//     printf("Aluno reprovado.\n");
// }

// printf("A media do aluno e: %.2f\n", media_aluno);

//     return 0;
//}

//###########################################################################################################################

// #include <stdio.h>

// int main() {
//     int i = 0;
//     inicio_loop: // Rótulo para o início do loop
//     if (i < 10) {
//         printf("%d ", i);
//         if (i == 5) {
//             goto fim_loop; // Salta para o rótulo "fim_loop"
//         }
//         i++;
//         goto inicio_loop; // Volta ao início do loop
//     }
//     fim_loop: // Rótulo para o fim do loop
//     printf("Loop terminado.\n");
//     return 0;
// }
/*NOTA:
Comando "goto":
===============
O comando goto permite saltar para uma etiqueta (rótulo) especificada no código.
 Embora funcionalmente possa ser usado para sair de um loop, o uso de goto é desencorajado em muitos casos por tornar o código mais difícil de entender e manter

OBS:
++++

+ O uso de goto pode tornar o código mais difícil de ler e depurar. 
É geralmente recomendado usar break para sair de loops e return para sair de funções +

*/

//###########################################################################################################################

#include <stdio.h>

void exemplo_loop() {
    int i = 0;
    while (i < 10) {
        printf("%d ", i);
        if (i == 5) {
            return; // Sai da função exemplo_loop
        }
        i++;
    }
    printf("Esta linha não será executada se o return for atingido.\n");
}

int main() {
    exemplo_loop();
    printf("Função main continuará aqui.\n");
    return 0;
}
/*NOTA:

Comando "return;"
=================

O comando return é usado para sair de uma função. 
 se um return for encontrado dentro de um loop while que está contido em uma função, 
 a função será interrompida e o controle retornará à função chamadora, efetivamente encerrando o loop também


*/