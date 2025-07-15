#include<stdio.h>

int main(){
    int num_digitado;

    printf("Verifique se um numero e par OU impar.\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num_digitado);

    // if(num_digitado % 2 == 0){
    //     printf("O numero %d e par ", num_digitado);
    // }else{
    //     printf("O numero %d e impar ", num_digitado);
    // }

    while(num_digitado >= 0){// => Verifica se o número é negativo
        
        if (num_digitado % 2 == 0){// => Verifica se 
            printf("O numero %d e par", num_digitado);
        }else{
            printf("O numero %d e impar", num_digitado);
        }
        break;
        /*Comando break;
        
        => Quando encontrado dentro do corpo do loop, ele interrompe a execução do loop imediatamente e o fluxo do programa continua na próxima instrução após o loop. 

        */
        
        
    }
    
    
    
    return 0;
}
/*NOTA:

// >> Para a versão-02 do desafio.
=> adicionar um tratamento de erro para o caso do usuário digitar um número não inteiro.
=> adicionar a opção de verificar se o número é positivo ou negativo ou zero.

// >> Para a versão-03 do desafio.
=> adicionar a opção de verificar se o número é primo ou não.
=> adicionar a opção de verificar se o número é um quadrado perfeito ou não.

*/