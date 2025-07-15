#include<stdio.h>
#include<stdlib.h>

int main(){

int numero_tabuada;
int condition; // Declare 'condition' before the loop

do{

printf("Digite um numero: ");
scanf("%d", &numero_tabuada);

for(int t = 0 ; t <= 10 ; t++){
    printf("%d X %d = %d\n", numero_tabuada, t, numero_tabuada * t);
}

printf("Deseja continuar? (1 - Sim, 0 - Nao): ");
scanf("%d", &condition);

}while (condition == 1);



    return 0;
}

/*NOTA:

// >> Para a versão-02 do desafio.
=> adicionar um tratamento de erro para o caso do usuário digitar um número não inteiro.
=> adicionar a opção de verificar se o número é positivo ou negativo ou zero.

// >> Para a versão-03 do desafio.
=> adicionar a opção de verificar se o número é primo ou não.
=> adicionar a opção de verificar se o número é um quadrado perfeito ou não.

// >> Para a versão-04 do desafio.
=> adicionar a opção de verificar se o número é um número de Fibonacci ou não.
=> adicionar a opção de verificar se o número é um número perfeito ou não.
=> adicionar a opção de verificar se o número é um número abundante ou não.
=> adicionar a opção de verificar se o número é um número deficiente ou não.





*/