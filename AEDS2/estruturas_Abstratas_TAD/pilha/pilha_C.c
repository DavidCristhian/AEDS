#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de um nó (elemento) da pilha
// 'typedef' cria um novo tipo chamado 'No', sinônimo de 'struct No'
typedef struct No {
    // 'dado' armazena o valor contido no nó (neste caso, um número inteiro)
    int dado;
    // 'prox' é um ponteiro para o próximo nó na sequência
    struct No* prox;
} No;

// Função para adicionar um novo elemento no topo da pilha (operação push)
// Recebe um ponteiro para o ponteiro 'topo' para que possa ser atualizado
void push(No** topo, int valor) {
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
    // O ponteiro 'prox' do novo nó aponta para o nó que era o topo da pilha
    novo->prox = *topo;
    // O novo nó se torna o novo topo da pilha, ou seja, a cabeça da lista encadeada
    *topo = novo;
}

// Função para remover o elemento do topo da pilha (operação pop)
// Recebe um ponteiro para o ponteiro 'topo' para que possa ser atualizado
void pop(No** topo) {
    // Se a pilha estiver vazia (*topo é NULL), não há o que remover
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return;
    }
    
    // Cria um ponteiro temporário para armazenar o nó que será removido
    No* temp = *topo;
    
    // Atualiza o ponteiro 'topo' para apontar para o próximo nó,
    // efetivamente removendo o nó atual do topo
    *topo = (*topo)->prox;
    
    // Libera a memória alocada para o nó removido
    free(temp);
}

// Função para exibir todos os elementos da pilha, do topo para a base
// Recebe uma cópia do ponteiro 'topo' para percorrer a lista sem modificá-la
void exibirPilha(No* topo) {
    printf("Pilha (topo -> base): ");
    
    // Percorre a pilha a partir do topo até chegar ao final (NULL)
    while (topo != NULL) {
        // Imprime o valor do nó atual
        printf("%d ", topo->dado);
        // Avança para o próximo nó
        topo = topo->prox;
    }
    
    // Adiciona uma nova linha após exibir todos os elementos
    printf("\n");
}

// Função principal do programa
int main() {
    // Declara um ponteiro para o topo da pilha e o inicializa como NULL (pilha vazia)
    No* pilha = NULL;

    // Adiciona elementos (empilha):
    // 10 é o primeiro a entrar, indo para a base da pilha
    // 20 entra depois, fica acima do 10
    // 30 entra por último, fica no topo da pilha
    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);
    
    // Exibe a pilha, mostrando o elemento mais recente primeiro: 30 20 10
    exibirPilha(pilha);

    // Remove o elemento do topo (desempilha). O 30 é removido
    pop(&pilha);
    
    // Exibe a pilha após a remoção: 20 10
    exibirPilha(pilha);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}