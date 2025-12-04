#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *cabeca;
} Lista;

void inicializar(Lista *L) {
    L->cabeca = (No*) malloc(sizeof(No));
    L->cabeca->prox = NULL;
}

void inserirInicio(Lista *L, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = L->cabeca->prox;
    L->cabeca->prox = novo;
}

void remover(Lista *L, int valor) {
    No *ant = L->cabeca;
    No *atual = L->cabeca->prox;

    while (atual != NULL && atual->dado != valor) {
        ant = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        ant->prox = atual->prox;
        free(atual);
    }
}

void mostrar(Lista *L) {
    No *aux = L->cabeca->prox;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

int main() {
    Lista L;
    inicializar(&L);
    inserirInicio(&L, 10);
    inserirInicio(&L, 20);
    inserirInicio(&L, 30);
    mostrar(&L);
    remover(&L, 20);
    mostrar(&L);
    return 0;
}