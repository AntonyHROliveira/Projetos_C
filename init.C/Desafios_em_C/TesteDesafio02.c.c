#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h> // Required for system()


int main(){
    char nome_aluno[50];
    char materia[50];
    char nome_docente[50];
    char genero;
    int periodo_letivo;
    float nota1;
    float nota2;
    float nota3;

    float media;


    printf("Insira os dados do Aluno(a)\n");
    printf("Nome do Aluno(a): ");
    scanf("%s",&nome_aluno);
    printf("\n");

   printf("Digite M para masculino ou F para feminino");
   printf("Gênero do Aluno(a):");


   if(genero == 'M' || genero == 'm'){
      scanf("%c",&genero);
   }else if(genero == 'F' || genero == 'f'){
     scanf("%C",&genero);
   }else{
     printf("Gênero inválido. Por favor, insira M ou F.\n");
     




    printf("Periodo Letivo: ");
    scanf("%d",&periodo_letivo);
    printf("\n");

    printf("Nome da Materia: ");
    scanf("%s",&materia);
    printf("\n");

    printf("Nome do Docente(a): ");
    scanf("%s",&nome_docente);
    printf("\n");







   do{
        printf("Insira a primeiro Nota: ");
         scanf("%f",&nota1);
         
         if(nota1 < 0 || nota1 > 10){
            printf("Valor invalido\n");
            printf("Insira a primeiro Nota: ");
            scanf("%f",&nota1);
            system("cls");

         }
    }while( nota1 < 0 || nota1 > 10);

     do{
        printf("Insira a segunda Nota: ");
         scanf("%f",&nota2);
         if(nota2 < 0 || nota2 > 10){
            printf("Valor invalido\n");
            printf("Insira a segunda Nota: ");
            scanf("%f",&nota2);
            system("cls");

         }
    }while( nota2 < 0 || nota2 > 10);

     do{
        printf("Insira a treceira Nota: ");
         scanf("%f",&nota3);
         if(nota3 < 0 || nota3 > 10){
            printf("Valor invalido\n");
            printf("Insira a terceira Nota: ");
            scanf("%f",&nota3);
            system("cls");

         }
    }while( nota3 < 0 || nota3 > 10);




      media = (nota1 + nota2 + nota3) / 3;
     if(media <= 5){
         printf("O aluno(a) %s está Reprovado(a) com a média: %.2f\n", media);
     }
      






    printf("=============>> Media do aluno <<=============\n");
    printf("Nome do Aluno(a): %s\n", nome_aluno);
    printf("Matéria: %s\n", materia);
    printf("Docente(a): %s\n", nome_docente);
    printf("Primeira Nota: %.2f\n", nota1);
    printf("Segunda Nota: %.2f\n", nota2);
    printf("Treceira Nota: %.2f\n", nota3);





    return 0;
}

// V-01 Bloco de Validação de Notas do{}while() & if
//===========================================================    
    // do{
    //     printf("Insira o valores das 3 notas perternetes ao Semestre: %d\n", periodo_letivo);
    //     printf("Insira a primeiro Nota: ");
    //     scanf("%f",&nota1);
    //     printf("Insira a segunda Nota: ");
    //     scanf("%f",&nota2);
    //     printf("Insira a teceira Nota: ");
    //     scanf("%f",&nota3);

    //     if(nota1 < 0 || nota1 > 10){
    //         printf("Valor invalido");
    //         printf("Insira a primeiro Nota: ");
    //         scanf("%f",&nota1);
    //         verificarNota = false;

    //     }else if(nota2 < 0 || nota2 > 10){
    //          printf("Valor invalido");
    //          printf("Insira a segunda Nota: ");
    //          scanf("%f",&nota2);
    //          verificarNota = false;

    //     }else if(nota3 < 0 || nota3 > 10){
    //          printf("Valor invalido");
    //          printf("Insira a treceira Nota: ");
    //          scanf("%f",&nota3);
    //          verificarNota = false;
    //     }

    // }while(verificarNota == false);


    //    printf("Digite M para masculino ou F para feminino");
//    printf("Gênero do Aluno(a):");
//    scanf(" %c", &genero); 
//    printf("\n");
   
// // V-02 Bloco para verificar o gênero
// //========================================
//    while(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f'){
//       printf("Gênero inválido. Por favor, insira M ou F: ");
//       scanf(" %c", &genero);
//       printf("\n");
//    }



//########################################################################################################

#include<stdio.h>
#include<stdlib.h>// para usar system("cls") ou system("clear") e outras funções do sistema
#include<string.h> // para usar strlen e strcmp e outras funções de manipulação de strings


int main(){

// Var para o Armazenamento dos Dados
char nome_aluno[50];
char genero_aluno[20];
// int periodo_letivo;
// float nota2;
// float nota3;
// float media;



// Bloco de Inserção dos Dados do Aluno(a) //
printf("\nPor favor insira os dados do Aluno(a) abaixo corretamente\n");

// printf("Nome do Aluno(a): ");
// scanf("%s", nome_aluno); // scanf lê somentee o primeiro nome e não lê espaços em branco ou o sobrenome

// Leitura e armazenamento do nome do aluno
printf("Nome do Aluno(a): ");
fgets(nome_aluno, sizeof(nome_aluno), stdin); // Usando fgets para ler a string com espaços em branco e o nome completo
printf("\n");

 // Remove o caractere '\n' deixado pelo fgets, se houver
   //  if (nome_aluno[strlen(nome_aluno) - 1] == '\n') {
   //      nome_aluno[strlen(nome_aluno) - 1] = '\0';
   //  }

// Leitura e armazenamento do gênero do aluno
printf("Digite M para Masculino OU F para Feminino.");
printf("Genero do Aluno(a): ");
scanf("%s", genero_aluno);
scanf("\n");

// Validação do gênero
if(strcmp(genero_aluno, "M") == 0 || strcmp(genero_aluno, "m") == 0){
   strcpy(genero_aluno, "Masculino");

}else if(strcmp(genero_aluno, "F") == 0 || strcmp(genero_aluno, "f") == 0){
   strcpy(genero_aluno, "Feminino");
}else{
printf("genero invalido. Por favor, insira M ou F.\n");

return 1;
}



printf("Aluno :%s", nome_aluno);
printf("\n");
printf("Genero do aluno(a): ", genero_aluno);







return 0;
}