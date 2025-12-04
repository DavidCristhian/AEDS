#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado; // Valor do nó
    No* prox; // Apontamento do nó
} No;

typedef struct Pilha{
    No *topo;
} Pilha;

void inicializador(Pilha *p){
    p->topo = NULL; // Inicializando a estrutura apontando para NULL
}

int estaVazia(Pilha *p){
    return p->topo == NULL; // Retorna o teste se o topo da pilha aponta para NULL
}

void push(Pilha *p, int valor){ 
    No *novo = (No *) malloc(sizeof(No)); // Alocando um novo espaço para o novo nó

    if(novo == NULL){ // Validação se foi criado o nó corretamente
        printf("Erro de alocação\n");
        exit(1);
    }

    novo->dado = valor; // Recebe o valor do parâmetro
    novo->prox = p->topo; // Aponta para o antigo topo
    p->topo = novo; // O topo se aponta para o novo nó
}

void pop(Pilha *p){
    if(estavazia(p)){
        printf("Erro: Pilha vazia\n");
        return;
    } else{

    }

    No* temp = p->topo; // Cria um nó para receber os campos do nó que está no topo
    int valor = temp->dado; // Cria uma variável para reber o dado do temp
    p->topo = temp->prox; // O topo agora aponta para o penúltimo nó
    
    free(temp); // Retira da memória o espaço do último nó
    return valor; 
}

int topo(Pilha *p){
    if(estaVazia(p)){
        printf("Erro: Pilha vazia\n");
        return -1;
    } else{
        return p->topo->dado;
    }
}

void mostrarPilha(Pilha *p) {
    if (p->topo == NULL) {
        printf("A pilha está vazia.\n");
        return;
    }

    printf("Elementos da pilha (do topo para a base):\n");

    No *atual = p->topo;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox; // vai para o próximo nó
    }
}  

void somaElementosPilha(Pilha *p){
    if(estaVazia()) { printf("Pilha vazia1\n"); }
    No *atual = p->topo;
    int soma = 0;

    while(atual != NULL){
        soma = atual->dado;
        atual = atual->prox;
    }
    return soma;
}

int maiorElemento(Pilha *P){
    if(P->topo == NULL) return 0;

    No *aux = P->topo;
    int maior = P->dado;

    aux = aux->prox;
    while(aux != NULL){
        if(aux->dado > maior){ maior = aux->dado; }
        aux = aux->prox;
    }

    return maior;
}

int somaElementosRecAuxiliar(No *aux){
    if(aux == NULL){
        return 0;
    }
    return aux->dado += somaElementosRecAuxiliar(aux->prox);
}

int somaElementosRec(Pilha *P){
    return somaElementosRecAuxiliar(P->topo);
}

int maiorElementoRecAuxiliar(No *aux, int maior){
    if(aux == NULL) { return maior };
    if(aux->dado > maior) { maior = aux->dado; }
    return maiorElementoRecAuxiliar(aux->prox, maior);
}

int maiorElementoRec(Pilha *P){
    No *aux = P->topo;
    int maior = aux.dado;
    return maiorElementoRecAuxiliar(aux, maior);
}


int main(){
    Pilha p;
    inicializar(&p);
    push(&p, 10);
    push(&p, 20);
    push(&p, 30);


    printf("Topo: %d\n", topo(&p));
    printf("Removido: %d\n", pop(&p));
    printf("Novo topo: %d\n", topo(&p));

    return 0/
}