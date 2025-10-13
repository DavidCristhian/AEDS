#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXTAM 100

typedef struct {
    int Item[MAXTAM];
    int Topo;
} Tpilha;

void Tpilha_Inicia(Tpilha *p){
    p->Topo = -1;
}

bool Tpilha_Vazia(const Tpilha *p){
    return (p->Topo == -1);
}

bool Tpilha_Cheia(const Tpilha *p){
    return (p->Topo == MAXTAM - 1);
}

void Tpilha_Inserir(Tpilha *p, int x){
    if(Tpilha_Cheia(p)){
        printf("Pilha cheia! Nao foi possivel inserir o item %d.\n", x);
    } else {
        p->Topo++;
        p->Item[p->Topo] = x;
        printf("Item %d inserido com sucesso.\n", x);
    }
}

int Tpilha_Remove(Tpilha *p){
    if(Tpilha_Vazia(p)){
        printf("A pilha esta vazia! Nao ha itens para remover.\n");
        return -1; // Retorna um valor de erro imediatamente
    } else {
        int aux = p->Item[p->Topo]; // Armazena o valor a ser removido
        p->Topo--;
        return aux; // Retorna o valor removido
    }
}

int main(){
    Tpilha *p = (Tpilha*)malloc(sizeof(Tpilha));
    if (p == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    Tpilha_Inicia(p);

    Tpilha_Inserir(p, 1);
    Tpilha_Inserir(p, 2);
    Tpilha_Inserir(p, 3);

    int aux;

    aux = Tpilha_Remove(p);
    if (aux != -1) {
        printf("Valor removido: %d\n", aux);
    }

    aux = Tpilha_Remove(p);
    if (aux != -1) {
        printf("Valor removido: %d\n", aux);
    }

    aux = Tpilha_Remove(p);
    if (aux != -1) {
        printf("Valor removido: %d\n", aux);
    }

    free(p);
    return 0;
}