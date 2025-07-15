#include <stdio.h>

int main() {
    // Variáveis locais de armazenamento 
    float largura, comprimento, areaCm, centLargura, centComprimento, area;


    // ÁREA DE ENTRADA DE DADOS
    //=========================    
    printf("Digite a largura em metros: ");// Solicita a largura ao usuário
    scanf("%f", &largura);

    printf("Digite o comprimento em metros: ");// Solicita o comprimento ao usuário
    scanf("%f", &comprimento);


    // AREA DE PROCESSAMENTO
    //======================
    centLargura = largura * 100;// Converte a largura para centímetros
    
    centComprimento = comprimento * 100;// Converte o comprimento para centímetros

    areaCm = centLargura * centComprimento;// Calcula a área em centímetros

    area = areaCm / 10000;// Converte a área para metros quadrados


    // ÁREA DE SAÍDA DE DADOS
    //=======================
    printf("A area possui: %.2f metros quadrados.\n", area); // Exibe o resultado

    return 0;
}