// #include<stdio.h>
// #include<string.h>

// int main(){

// // Data-Types
// //=================================
//     char nome[50], gosto[50];
//     int idade, c;
//     float altura, peso;
    

// // Inputs 
// //========
//     printf("\nDados Pessoais\n");
//     printf("==============\n");
    
//     printf("Digite o Nome: ");
//     scanf("%49[^\n]", nome);
//    while((c = getchar()) != '\n' && c != EOF);
   
//    printf("Digite a sua Idade: ");
//    scanf("%d", &idade);  
   
//    printf("Digite a sua Altura: ");
//    scanf("%f", &altura);
   
//    printf("Digite o seu Peso: ");
//    scanf("%f", &peso);
   
//    while((c = getchar()) != '\n' && c != EOF);// Coloque isso sempre após o scanf que lê números, antes de ler uma string com espaços.

//     printf("O que voce Gosta: ");
//     scanf("%49[^\n]", gosto);

// // Outputs
// //================================
//     printf("\nNome: %s", nome);
//     printf("\nIdade: %d", idade);
//     printf("\nAltura: %.2f m", altura);
//     printf("\nPeso: %.2f Kg", peso);
//     printf("\nGosta de: %s", gosto);

//     return 0;
// }


//######################################################################################################################
//######################################################################################################################



// Ex_01: Substituindo os scanf por fgets(nome_da_variavel, sizeof(nome_da_variavel), stdin).
//¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨

// #include<stdio.h>
// #include<string.h>

// int main(){
    
// // Data_Types
//  int idade;
//  float peso, altura;
//  char nome[50], gosto[50];
 
// // Inputs
//  printf("\nDados do Usuario\n================\n");
//  printf("Digite o Nome: ");
//  fgets(nome, sizeof(nome), stdin);
//  nome[strcspn(nome, "\n")] = '\0'; // Remove o "\n"

//  printf("Digite a sua Idade: ");
//  scanf("%d", &idade);
//  while(getchar() != '\n');

//  printf("Digite a sua Altura: ");
//  scanf("%f", &altura);

//  printf("Digite o seu Peso: ");
//  scanf("%f", &peso);
//  while(getchar() != '\n');

//  printf("O que voce Gosta: ");
//  fgets(gosto, sizeof(gosto), stdin);
//  gosto[strcspn(gosto, "\n")] = '\0'; // Remove o "\n";

// // Ouputs
// printf("\n===DADOS sobre o USUARIO===\n");
// printf("\nNome: %s", nome);
// printf("\nIdade: %d", idade);
// printf("\nAltura: %.2f m",altura);
// printf("\nPeso: %.2f", peso);
// printf("\n-----------------------\n");
// printf("Gosta de: %s", gosto);
// printf("\n\n");
       
//     return 0;
// }


//######################################################################################################################
//######################################################################################################################


// Ex_02: Substituindo os scanf por fgets(nome_da_variavel, 50, stdin);
//¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨

// #include<stdio.h>
// #include<string.h>

// int main(){
// // Data-Types
//  int idade;
//  float peso, altura;
//  char nome[50], gosto[50];

// // Inputs
//  printf("\n===DADOS do USUARIO===\n");
//  printf("Digite o Nome: ");
//  fgets(nome, 50, stdin);
//  nome[ strcspn(nome, "\n")] = '\0';

//  printf("Digite a Idade: ");
//  scanf("%d", &idade);
//  while(getchar() != '\n');

//  printf("Digite o Peso: ");
//  scanf("%f", &peso);

//  printf("Digite a Altura: ");
//  scanf("%f",&altura);
//  int c;
//  while(( c = getchar()) != '\n' && c != EOF);

//  printf("O que voce Gosta: ");
//  fgets(gosto, 50, stdin);
//  gosto[strcspn(gosto, "\n")] = '\0';

// // Outputs
//  printf("\n===Dados do Usuario===\n");
//  printf("\nNome: %s", nome);
//  printf("\nIdade: %d", idade);
//  printf("\nPeso: %.2f", peso);
//  printf("\nAltura: %.2f", altura);
//  printf("\n-------------------------\n");
//  printf("\nGosta de: %s", gosto);
//  printf("\n\n");

//     return 0;
// }


//######################################################################################################################
//######################################################################################################################

// Ex_02: Substituindo os scanf por gets(nome_da_variavel);
//¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨

#include<stdio.h>
#include<string.h>

int main(){
// Data-Types
 char nome[50], gosto[50];
 int idade;
 float peso, altura;

// Inputs
 printf("\nDados do Usuario\n================\n");
 printf("Digite o Nome: ");
 gets(nome);
 
 printf("Digite a Idade: ");
 scanf("%d",&idade);
 while(getchar() != '\n');

 printf("Digite o Peso: ");
 scanf("%f",&peso);

 printf("Digite a Altura: ");
 scanf("%f",&altura);
 while(getchar() != '\n');

 printf("O que voce Gosta: ");
 gets(gosto);

// Outputs
 printf("\n===Dados sobre o Usuario===\n");
 printf("\nNome: %s", nome);
 printf("\nIdade: %d", idade);
 printf("\nPeso: %.2f",peso);
 printf("\nAltura: %.2f",altura);
 printf("\n-------------------------\n");
 printf("\nGosta de: %s", gosto);
 printf("\n\n");

 /*NOTA:
 => A função gets() foi removida da linguagem C padrão desde o C11, por ser muito insegura (pode causar estouro de buffer e falhas de segurança).

 => Use fgets() sempre que possível. 
 
 */

    return 0;
}

