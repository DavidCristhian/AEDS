#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *cabeca; // nó cabeça
} Pilha;

void inicializar(Pilha *P) {
    P->cabeca = (No*) malloc(sizeof(No));
    P->cabeca->prox = NULL;
}

void push(Pilha *P, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = P->cabeca->prox;
    P->cabeca->prox = novo;
}

int pop(Pilha *P) {
    if (P->cabeca->prox == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    No *removido = P->cabeca->prox;
    int valor = removido->dado;
    P->cabeca->prox = removido->prox;
    free(removido);
    return valor;
}

void mostrar(Pilha *P) {
    No *aux = P->cabeca->prox;
    printf("Topo -> ");
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

int main() {
    Pilha P;
    inicializar(&P);
    push(&P, 10);
    push(&P, 20);
    push(&P, 30);
    mostrar(&P);
    pop(&P);
    mostrar(&P);
    return 0;
}