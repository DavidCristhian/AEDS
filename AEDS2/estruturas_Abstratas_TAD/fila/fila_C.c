#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int estaVazia(Fila *f) {
    return (f->inicio == NULL);
}

// Enfileirar (inserir no fim)
void enqueue(Fila *f, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação!\n");
        exit(1);
    }
    novo->valor = valor;
    novo->prox = NULL;

    if (f->fim == NULL) {
        // Fila vazia
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo; // último aponta para o novo nó
        f->fim = novo;       // fim passa a ser o novo nó
    }
    printf("Enfileirado: %d\n", valor);
}

// Desenfileirar (remover do início)
int dequeue(Fila *f) {
    if (estaVazia(f)) {
        printf("Erro: fila vazia!\n");
        return -1;
    }

    No *temp = f->inicio;
    int valor = temp->valor;

    f->inicio = temp->prox;
    if (f->inicio == NULL)
        f->fim = NULL; // se ficou vazia, fim também deve ser NULL

    free(temp);
    printf("Desenfileirado: %d\n", valor);
    return valor;
}

// Mostrar fila
void mostrarFila(Fila *f) {
    if (estaVazia(f)) {
        printf("A fila está vazia.\n");
        return;
    }

    printf("Elementos da fila (início → fim):\n");
    No *atual = f->inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Fila f;
    inicializar(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);

    mostrarFila(&f);

    dequeue(&f);
    mostrarFila(&f);

    return 0;
}