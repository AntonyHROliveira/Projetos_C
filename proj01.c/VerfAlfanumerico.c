
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// O que é <ctype.h> O cabeçalho fornece muitas funções para classificar e modificar caracteres.

// função isalnum() verifica se o caractere é alfanumérico ou não.

int main() {
    char c = 'a';
     //int c = 1;
    if (isalnum(c)) {
      printf(" %c e alfanumerico", c);
    } else {
      printf(" %c nao e alfanumerico", c);
    }
    
    return 0;
  }
