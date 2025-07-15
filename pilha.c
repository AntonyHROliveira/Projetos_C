#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Inicializa a pilha
void initialize(Stack *s) {
    s->top = -1;
}

// Verifica se a pilha está cheia
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Verifica se a pilha está vazia
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Empilha um elemento
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Desempilha um elemento
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }
    return s->items[(s->top)--];
}

// Retorna o elemento no topo da pilha
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Topo da pilha: %d\n", peek(&s));

    printf("Desempilhando: %d\n", pop(&s));
    printf("Desempilhando: %d\n", pop(&s));
    printf("Desempilhando: %d\n", pop(&s));

    return 0;
}