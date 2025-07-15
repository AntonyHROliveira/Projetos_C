#include <stdio.h>
// O programa imprime o alfabeto de A a Z usando um loop for e usando o valor ASCII dos caracteres.
int main() {
    char letra = 'A';

    for (int i = 0; i < 26; i++) {
        printf("%c ", letra + i);
    }

    return 0;
}
