#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *ant;
    struct No *prox;
} No;

typedef struct {
    No *cabeca; // nó cabeça
} ListaDupla;

void inicializar(ListaDupla *L) {
    L->cabeca = (No*) malloc(sizeof(No)); // nó cabeça
    L->cabeca->prox = NULL;
    L->cabeca->ant = NULL;
}

void inserirInicio(ListaDupla *L, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;

    novo->prox = L->cabeca->prox;
    novo->ant = L->cabeca;

    if (L->cabeca->prox != NULL) {
        L->cabeca->prox->ant = novo;
    }

    L->cabeca->prox = novo;
}

void remover(ListaDupla *L, int valor) {
    No *aux = L->cabeca->prox;

    while (aux != NULL && aux->dado != valor) {
        aux = aux->prox;
    }

    if (aux != NULL) {
        aux->ant->prox = aux->prox;
        if (aux->prox != NULL) {
            aux->prox->ant = aux->ant;
        }
        free(aux);
    }
}

void mostrar(ListaDupla *L) {
    No *aux = L->cabeca->prox;
    printf("Lista (início → fim): ");
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

void mostrarReverso(ListaDupla *L) {
    No *aux = L->cabeca->prox;
    if (aux == NULL) return;

    // ir até o último
    while (aux->prox != NULL)
        aux = aux->prox;

    printf("Lista (fim → início): ");
    while (aux != L->cabeca) {
        printf("%d ", aux->dado);
        aux = aux->ant;
    }
    printf("\n");
}

int main() {
    ListaDupla L;
    inicializar(&L);
    inserirInicio(&L, 10);
    inserirInicio(&L, 20);
    inserirInicio(&L, 30);
    mostrar(&L);
    mostrarReverso(&L);
    remover(&L, 20);
    mostrar(&L);
    mostrarReverso(&L);
    return 0;
}