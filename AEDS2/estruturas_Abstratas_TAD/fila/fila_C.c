#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de um nó (elemento) da fila
typedef struct No {
    // 'dado' armazena o valor contido no nó (neste caso, um número inteiro)
    int dado;
    // 'prox' é um ponteiro para o próximo nó na sequência
    struct No* prox;
} No;

// Define a estrutura da fila, que contém ponteiros para o início e o fim
typedef struct {
    No* inicio;
    No* fim;
} Fila;

// Função para inicializar a fila, definindo os ponteiros de início e fim como NULL
void inicializarFila(Fila* f) {
    f->inicio = f->fim = NULL;
}

// Função para adicionar um novo elemento no final da fila (operação enqueue)
void enqueue(Fila* f, int valor) {
    // Aloca dinamicamente memória para um novo nó
    No* novo = (No*) malloc(sizeof(No));
    
    // Verifica se a alocação de memória foi bem-sucedida
    if (!novo) {
        printf("Erro de alocação!\n");
        // Em caso de erro, encerra o programa
        exit(1);
    }
    
    // Atribui o valor passado como parâmetro ao campo 'dado' do novo nó
    novo->dado = valor;
    // O ponteiro 'prox' do novo nó é definido como NULL,
    // pois ele sempre será o último da fila
    novo->prox = NULL;

    // Se a fila estiver vazia (fim é NULL)
    if (f->fim == NULL)
        // O novo nó se torna o primeiro e último elemento
        f->inicio = f->fim = novo;
    else {
        // Caso contrário, a fila já tem elementos
        // O ponteiro 'prox' do último nó (f->fim) aponta para o novo nó
        f->fim->prox = novo;
        // O novo nó se torna o novo final da fila
        f->fim = novo;
    }
}

// Função para remover o elemento do início da fila (operação dequeue)
void dequeue(Fila* f) {
    // Se a fila estiver vazia, não há o que remover
    if (f->inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }
    
    // Cria um ponteiro temporário para armazenar o nó que será removido
    No* temp = f->inicio;
    
    // O ponteiro 'inicio' da fila avança para o próximo nó
    f->inicio = f->inicio->prox;
    
    // Se, após remover, a fila ficar vazia (inicio se tornar NULL)
    if (f->inicio == NULL)
        // O ponteiro 'fim' também deve ser ajustado para NULL
        f->fim = NULL;
        
    // Libera a memória alocada para o nó removido
    free(temp);
}

// Função para exibir todos os elementos da fila, do início para o fim
// Recebe uma cópia da estrutura 'Fila'
void exibirFila(Fila f) {
    printf("Fila (inicio -> fim): ");
    
    // Cria um ponteiro auxiliar para percorrer a fila a partir do início
    No* atual = f.inicio;
    
    // Percorre a fila até chegar ao final (NULL)
    while (atual != NULL) {
        // Imprime o valor do nó atual
        printf("%d ", atual->dado);
        // Avança para o próximo nó
        atual = atual->prox;
    }
    
    // Adiciona uma nova linha após exibir todos os elementos
    printf("\n");
}

// Função principal do programa
int main() {
    // Declara uma variável do tipo 'Fila'
    Fila f;
    // Inicializa a fila
    inicializarFila(&f);

    // Adiciona elementos no final da fila (enqueue)
    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);
    
    // Exibe a fila atual: 10 20 30
    exibirFila(f);

    // Remove o elemento do início da fila (dequeue), o 10 é removido
    dequeue(&f);
    
    // Exibe a fila após a remoção: 20 30
    exibirFila(f);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}