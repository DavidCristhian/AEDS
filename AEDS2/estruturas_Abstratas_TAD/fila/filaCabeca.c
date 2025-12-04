#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *cabeca; // nó cabeça
    No *fim;
} Fila;

void inicializar(Fila *F) {
    F->cabeca = (No*) malloc(sizeof(No));
    F->cabeca->prox = NULL;
    F->fim = F->cabeca;
}

void enfileirar(Fila *F, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;
    F->fim->prox = novo;
    F->fim = novo;
}

int desenfileirar(Fila *F) {
    if (F->cabeca->prox == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    No *removido = F->cabeca->prox;
    int valor = removido->dado;
    F->cabeca->prox = removido->prox;
    if (F->cabeca->prox == NULL) F->fim = F->cabeca;
    free(removido);
    return valor;
}

void mostrar(Fila *F) {
    No *aux = F->cabeca->prox;
    printf("Frente -> ");
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("<- Fim\n");
}

int main() {
    Fila F;
    inicializar(&F);
    enfileirar(&F, 10);
    enfileirar(&F, 20);
    enfileirar(&F, 30);
    mostrar(&F);
    desenfileirar(&F);
    mostrar(&F);
    return 0;
}