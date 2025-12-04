#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

// Função para criar novo nó
No* novoNo(int valor) {
    No* n = (No*) malloc(sizeof(No));
    n->valor = valor;
    n->prox = NULL;
    return n;
}

// Inserir no início
void inserirInicio(No **inicio, int valor) {
    No *n = novoNo(valor);
    n->prox = *inicio;
    *inicio = n;
}

// Inserir no fim
void inserirFim(No **inicio, int valor) {
    No *n = novoNo(valor);
    if (*inicio == NULL) {
        *inicio = n;
    } else {
        No *aux = *inicio;
        while (aux->prox != NULL)
            aux = aux->prox;
        aux->prox = n;
    }
}

// Remover elemento (pelo valor)
void remover(No **inicio, int valor) {
    if (*inicio == NULL) return;

    No *atual = *inicio, *anterior = NULL;

    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) return; // não achou

    if (anterior == NULL) // remover o primeiro
        *inicio = atual->prox;
    else
        anterior->prox = atual->prox;

    free(atual);
}

// Mostrar lista
void mostrar(No *inicio) {
    No *aux = inicio;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int main() {
    No *lista = NULL;

    inserirInicio(&lista, 10);
    inserirInicio(&lista, 20);
    inserirFim(&lista, 30);
    inserirFim(&lista, 40);

    mostrar(lista);

    remover(&lista, 20);
    mostrar(lista);

    return 0;
}