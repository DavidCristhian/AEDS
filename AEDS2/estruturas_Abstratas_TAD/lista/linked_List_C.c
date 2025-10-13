#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de um nó (elemento) da lista
// 'typedef' cria um novo tipo chamado 'No', que é sinônimo de 'struct No'
typedef struct No {
    // 'dado' armazena o valor contido no nó (neste caso, um número inteiro)
    int dado;
    // 'prox' é um ponteiro para o próximo nó na sequência
    struct No* prox;
} No;

// Função para criar um novo nó com um valor específico
// Retorna um ponteiro para o novo nó alocado
No* criarNo(int valor) {
    // Aloca dinamicamente memória para um novo nó, do tamanho da estrutura 'No'
    No* novo = (No*) malloc(sizeof(No));
    
    // Verifica se a alocação de memória foi bem-sucedida
    if (!novo) {
        printf("Erro de alocação!\n");
        // Em caso de erro, encerra o programa
        exit(1);
    }
    
    // Atribui o valor passado como parâmetro ao campo 'dado' do novo nó
    novo->dado = valor;
    // Define o ponteiro 'prox' do novo nó como NULL,
    // indicando que ele é o último da lista (por enquanto)
    novo->prox = NULL;
    
    // Retorna o ponteiro para o nó recém-criado
    return novo;
}

// Função para inserir um novo nó no final da lista
// Recebe um ponteiro para o ponteiro 'inicio' da lista
void inserirFim(No** inicio, int valor) {
    // Cria um novo nó com o valor especificado
    No* novo = criarNo(valor);
    
    // Se a lista estiver vazia (*inicio é NULL)
    if (*inicio == NULL) {
        // O novo nó se torna o primeiro (e único) nó da lista
        *inicio = novo;
    } else {
        // Caso contrário, a lista já tem elementos
        
        // Cria um ponteiro temporário para percorrer a lista a partir do início
        No* temp = *inicio;
        
        // Percorre a lista até encontrar o último nó (cujo 'prox' é NULL)
        while (temp->prox != NULL)
            temp = temp->prox;
            
        // O ponteiro 'prox' do último nó agora aponta para o novo nó,
        // adicionando-o ao final da lista
        temp->prox = novo;
    }
}

// Função para remover o primeiro nó da lista
// Recebe um ponteiro para o ponteiro 'inicio' para que possa ser modificado
void removerInicio(No** inicio) {
    // Se a lista estiver vazia, imprime uma mensagem e retorna
    if (*inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    
    // Cria um ponteiro temporário para armazenar o nó que será removido
    No* temp = *inicio;
    
    // Atualiza o ponteiro 'inicio' para apontar para o segundo nó da lista
    *inicio = (*inicio)->prox;
    
    // Libera a memória alocada para o nó removido
    free(temp);
}

// Função para exibir todos os elementos da lista
// Recebe uma cópia do ponteiro 'inicio' para percorrer a lista sem modificá-la
void exibirLista(No* inicio) {
    printf("Lista: ");
    
    // Percorre a lista a partir do início até chegar ao final (NULL)
    while (inicio != NULL) {
        // Imprime o valor do nó atual
        printf("%d -> ", inicio->dado);
        // Avança para o próximo nó
        inicio = inicio->prox;
    }
    
    // Imprime 'NULL' para indicar o fim da lista
    printf("NULL\n");
}

// Função principal do programa
int main() {
    // Declara um ponteiro para o início da lista e o inicializa como NULL (lista vazia)
    No* lista = NULL;
    
    // Insere três nós com valores 10, 20 e 30 no final da lista
    inserirFim(&lista, 10);
    inserirFim(&lista, 20);
    inserirFim(&lista, 30);
    
    // Exibe a lista atual: 10 -> 20 -> 30 -> NULL
    exibirLista(lista);
    
    // Remove o primeiro nó da lista (o nó com o valor 10)
    removerInicio(&lista);
    
    // Exibe a lista após a remoção: 20 -> 30 -> NULL
    exibirLista(lista);
    
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}