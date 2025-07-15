#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // Necessário para usar o tipo bool
#include<string.h> // Necessário para usar a função strcpy


int main(){
int xy;

printf("Digite um numero inteiro: ");
scanf("%d", &xy);

printf("O endereco da variavel xy e: %p", (void*)&xy);

   
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

//#############################################################################################################

#include<stdio.h>

#include<string.h>


int main(){ 

 char nome[50];

 printf("Digite o seu nome completo: ");
 fgets(nome, sizeof(nome), stdin);

 //nome[strcspn(nome, "\n")] = "\0"; // <= Remove a quebra de linha deixada pelo "fgets".


 printf("O seu nome e: %s", nome);

    return 0;
}