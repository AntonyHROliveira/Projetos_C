#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um nó no início da lista
void insertAtHead(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head != NULL) {
        (*head)->prev = newNode;
        newNode->next = *head;
    }
    *head = newNode;
}

// Função para inserir um nó no final da lista
void insertAtTail(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Função para imprimir a lista na ordem direta
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Função para imprimir a lista na ordem inversa
void printListReverse(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

// Função para liberar a memória da lista
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtTail(&head, 30);
    insertAtTail(&head, 40);

    printf("Lista na ordem direta: ");
    printList(head);

    printf("Lista na ordem inversa: ");
    printListReverse(head);

    freeList(head);
    return 0;
}