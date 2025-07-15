#include <stdio.h>
/*NOTA:

// O nome da variável e o endereço da memória onde a informação está armazenada estão associados.
// O nome e o endereço não mudam.
// Mas, o valor da informação pode mudar (o valor do que está dentro da caixa pode mudar, embora o tipo seja sempre o mesmo).
// Cada variável usa uma determinada quantidade de armazenamento em memória.

// Variáveis são usadas para armazenar dados temporariamente durante a execução do programa.
// Variáveis são declaradas com um tipo específico, que define o tamanho e o formato dos dados armazenados.

// As variáveis em C são associadas com:
// 1. Um nome (identificador) que é usado para referenciar a variável.
// 2. Um tipo de dado que define o tamanho e o formato dos dados armazenados
// 3. Um endereço de memória onde os dados são armazenados.
// 4. Um valor que é o dado armazenado na variável.

*/


int main() {
    // Variaveis do tipo basic em C
    int a = 5;      // variável para armazenar numeros inteira
    float b = 3.14; // variável para armazenar numeros de ponto flutuante(decimais)
    char c = 'A';   // variável para armazenar um unico caractere
    char d[10]; // variável para armazenar uma cadeia de 10 caracteres
    bool estado = true; // variável para armazenar valores lógicos como (true == 1 || false == 0) tem que utilizar a biblioteca <stdbool.h> 

    // damos valores às variáveis usando o operador de atribuição (=). 

    // Exibindo os valores das variáveis
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %.2f\n", b);
    printf("Valor de c: %c\n", c);

    return 0;
}

/*
>> TIPOS DE VARIAVEIS em C <<

>> TIPOS PRIMITIVOS <<
----------------------

// 1. int: Números inteiros (ex: 5, -10, 0) sem partes decimais
=> O tamanho de um int pode variar dependendo do compilador e da arquitetura do sistema, mas geralmente é de 4 bytes (32 bits).
--> Exemplo: int idade = 25; 


// 2. float: Números de ponto flutuante (ex: 3.14, -0.5)
=> O tamanho de um float é geralmente de 4 bytes (32 bits) e pode representar números com partes decimais.
--> Exemplo: float altura = 1.75;


// 3. char: Um único caractere (ex: 'A', 'b')
=> O tamanho de um char é geralmente de 1 byte (8 bits) e pode armazenar caracteres ASCII.
--> Exemplo: char letra = 'A';


// 4. double: Números de ponto flutuante de precisão dupla (ex: 3.141592653589793)
=> O tamanho de um double é geralmente de 8 bytes (64 bits) e pode representar números com partes decimais de forma mais precisa do que um float.
--> Exemplo: double pi = 3.141592653589793;


// 5. bool: Valores lógicos (true ou false) - precisa incluir a biblioteca <stdbool.h>
=> O tamanho de um bool é geralmente de 1 byte (8 bits) e pode armazenar valores lógicos.
=> O bool é usado para representar condições verdadeiras ou falsas.
=> O valor true é geralmente representado por 1 e false por 0.
--> Exemplo: bool estado = true;
--> Exemplo: bool estado = false;


// 6. void: Tipo vazio, usado para indicar que uma função não retorna valor ou que um ponteiro não aponta para nenhum tipo específico
=> O void é usado principalmente em funções que não retornam valores ou em ponteiros genéricos.
--> Exemplo: void funcaoExemplo() {  código aqui  };



>> TIPOS COMPOSTOS <<
----------------------

// 1. Array: Coleção de elementos do mesmo tipo (ex: int numeros[5])
=> Um array é uma coleção de elementos do mesmo tipo, acessados por índices.
=> O tamanho de um array é definido no momento da declaração e não pode ser alterado dinamicamente.
=> O tamanho do array é fixo e deve ser especificado no momento da declaração.
=> Os elementos do array são acessados por índices, começando do zero (0).
--> Exemplo: int numeros[5] = {1, 2, 3, 4, 5};
    --> Exemplo: numeros[0] acessa o primeiro elemento do array.
    --> Exemplo: numeros[1] acessa o segundo elemento do array.
    --> Exemplo: numeros[2] acessa o terceiro elemento do array.
    --> Exemplo: numeros[3] acessa o quarto elemento do array.
    --> Exemplo: numeros[4] acessa o quinto elemento do array.


// 2. Struct: Estrutura que agrupa diferentes tipos de dados (ex: struct Pessoa { char nome[50]; int idade; })
struct Pessoa {
    char nome[50];
    int idade;
};
=> Uma struct é uma estrutura que agrupa diferentes tipos de dados sob um único nome.
=> As structs são usadas para criar tipos de dados personalizados que podem conter diferentes tipos de variáveis.
=> O tamanho de uma struct é a soma dos tamanhos dos seus membros.
--> Exemplo: struct Pessoa pessoa1; // Declaração de uma variável do tipo Pessoa
    --> Exemplo: strcpy(pessoa1.nome, "João"); // Atribui um nome à pessoa
    --> Exemplo: pessoa1.idade = 30; // Atribui uma idade à pessoa


// 3. Union: Estrutura que pode armazenar diferentes tipos de dados, mas apenas um de cada vez (ex: union Dados { int inteiro; float decimal; char caractere; })
union Dados {
    int inteiro;
    float decimal;
    char caractere;
};
=> Uma union é uma estrutura que pode armazenar diferentes tipos de dados, mas apenas um de cada vez.
=> O tamanho de uma union é o tamanho do maior membro.
=> As unions são usadas para economizar espaço de memória quando diferentes tipos de dados não precisam ser armazenados simultaneamente.
// --> Exemplo: union Dados dados1; // Declaração de uma variável do tipo Dados
//     --> Exemplo: dados1.inteiro = 10; // Atribui um valor inteiro
//     --> Exemplo: dados1.decimal = 3.14; // Atribui um valor decimal
//     --> Exemplo: dados1.caractere = 'A'; // Atribui um caractere


// 4. Enum: Tipo enumerado que define um conjunto de constantes nomeadas (ex: enum Dias { DOMINGO, SEGUNDA, TERÇA, QUARTA, QUINTA, SEXTA, SÁBADO })
enum Dias {
    DOMINGO,
    SEGUNDA,
    TERÇA,
    QUARTA,
    QUINTA,
    SEXTA,
    SÁBADO
};
=> Um enum é um tipo enumerado que define um conjunto de constantes nomeadas.
=> Os enums são usados para representar um conjunto fixo de valores nomeados, tornando o código mais legível e fácil de entender.
=> O tamanho de um enum é geralmente o tamanho de um inteiro, mas pode variar dependendo do compilador e da arquitetura do sistema.
// --> Exemplo: enum Dias diaAtual = SEGUNDA; // Declaração de uma variável do tipo Dias
//     --> Exemplo: if (diaAtual == SEGUNDA) { printf("Hoje é segunda-feira.\n"); } // Verifica se o dia atual é segunda-feira
//     --> Exemplo: printf("Hoje é %d dia da semana.\n", diaAtual); // Imprime o número do dia da semana (0 para DOMINGO, 1 para SEGUNDA, etc.)


// 5. Ponteiros: Variáveis que armazenam endereços de memória (ex: int *ptr;)
int *ptr;
=> Ponteiros são variáveis que armazenam endereços de memória de outras variáveis.
=> Eles são usados para manipular diretamente a memória e acessar dados de forma eficiente.
=> O tamanho de um ponteiro é geralmente o tamanho de um inteiro, mas pode variar dependendo do compilador e da arquitetura do sistema.
// --> Exemplo: int valor = 10; // Declaração de uma variável inteira
//     --> Exemplo: ptr = &valor; // Atribui o endereço de memória
//     --> Exemplo: printf("Valor: %d\n", *ptr); // Acessa o valor armazenado no endereço de memória apontado pelo ponteiro
//     --> Exemplo: *ptr = 20; // Modifica o valor armazenado no endereço de memória apontado pelo ponteiro
//     --> Exemplo: printf("Novo valor: %d\n", valor); // Imprime o novo valor da variável


// 6. Tipos definidos pelo usuário: Usando a palavra-chave typedef para criar novos tipos de dados (ex: typedef unsigned long ulong;)
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char uchar;    
=> A palavra-chave typedef é usada para criar novos tipos de dados com nomes mais legíveis e significativos.
=> Ela permite criar aliases para tipos existentes, facilitando a leitura e manutenção do código.
// --> Exemplo: typedef struct { int x; int y; } Ponto; // Cria um novo tipo Ponto
//     --> Exemplo: Ponto p1; // Declaração de uma variável do tipo Ponto
//     --> Exemplo: p1.x = 10; // Atribui um valor ao membro x da struct Ponto
//     --> Exemplo: p1.y = 20; // Atribui um valor

// ao membro y da struct Ponto
//     --> Exemplo: printf("Ponto: (%d, %d)\n", p1.x, p1.y); // Imprime as coordenadas do ponto


>> TIPOS DE DADOS COMPLEXOS <<
------------------------------

// 1. Tipos de dados complexos: Combinação de tipos primitivos e compostos para criar estruturas mais complexas (ex: struct Aluno { char nome[50]; int idade; float nota; })

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
=> Tipos de dados complexos são combinações de tipos primitivos e compostos para criar estruturas mais complexas.
=> Eles são usados para representar entidades mais complexas, como alunos, funcionários, produtos, etc.
=> O tamanho de um tipo de dado complexo é a soma dos tamanhos dos seus membros.
// --> Exemplo: struct Aluno aluno1; // Declaração de uma variável do tipo Aluno

//     --> Exemplo: strcpy(aluno1.nome, "Maria"); // Atribui um nome ao aluno

//     --> Exemplo: aluno1.idade = 20; // Atribui uma idade ao aluno
//     --> Exemplo: aluno1.nota = 8.5; // Atribui uma nota ao aluno
//     --> Exemplo: printf("Aluno: %s, Idade: %d, Nota: %.2f\n", aluno1.nome, aluno1.idade, aluno1.nota); // Imprime os dados do aluno

//     --> Exemplo: struct Aluno alunos[10]; // Declaração de um array de 10 alunos
//     --> Exemplo: alunos[0] = aluno1; // Atribui o primeiro aluno ao array de alunos
//     --> Exemplo: printf("Primeiro aluno: %s, Idade: %d, Nota: %.2f\n", alunos[0].nome, alunos[0].idade, alunos[0].nota); // Imprime os dados do primeiro aluno do array
//     --> Exemplo: struct Aluno *ptrAluno = &aluno1; // Declaração de um ponteiro para o tipo Aluno
//     --> Exemplo: printf("Aluno via ponteiro: %s, Idade: %d, Nota: %.2f\n", ptrAluno->nome, ptrAluno->idade, ptrAluno->nota); // Imprime os dados do aluno usando o ponteiro
//     --> Exemplo: typedef struct { char nome[50]; int idade; float nota; } Aluno; // Cria um novo tipo Aluno usando typedef


// 2. Tipos de dados abstratos: Definição de tipos de dados personalizados com operações específicas (ex: pilhas, filas, listas encadeadas, árvores, etc.)
// Pilha (Stack)
typedef struct {
    int dados[100];
    int topo;
} Pilha;
// Funções para manipular a pilha
void inicializarPilha(Pilha *p) {
    p->topo = -1; // Inicializa o topo da pilha
}
void empilhar(Pilha *p, int valor) {
    if (p->topo < 99) { // Verifica se a pilha não está cheia
        p->dados[++(p->topo)] = valor; // Adiciona o valor ao topo da pilha
    }
}









*/

