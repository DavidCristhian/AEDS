#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char areaAtuacao[50];
    float valorAtualAcao;
    float valorAnteriorAcao;
} Compahia;

int lerQtCompahias() {
    int tam;
    do {
        printf("Digite a quantidade de companhias a serem cadastradas: ");
        scanf("%d", &tam);
        if (tam < 1) printf("Digite um valor válido!\n");
    } while (tam < 1);
    return tam;
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void lerNomeCompahia(Compahia *c) {
    printf("Digite o nome da companhia: ");
    limparBuffer();
    fgets(c->nome, sizeof(c->nome), stdin);
    c->nome[strcspn(c->nome, "\n")] = '\0'; // remove \n
}

void lerAreaAtualCompahia(Compahia *c) {
    printf("Digite a área de atuação da companhia: ");
    fgets(c->areaAtuacao, sizeof(c->areaAtuacao), stdin);
    c->areaAtuacao[strcspn(c->areaAtuacao, "\n")] = '\0'; // remove \n
}

void lerValorAtualAcao(Compahia *c) {
    printf("Digite o valor da ação atual: ");
    scanf("%f", &c->valorAtualAcao);
}

void lerValorAnteriorAcao(Compahia *c) {
    printf("Digite o valor da ação anterior: ");
    scanf("%f", &c->valorAnteriorAcao);
}

void cadastrarCompahias(Compahia *c, int tam){
    for (int i = 0; i < tam; i++) {
        printf("\n--- Cadastro da Companhia %d ---\n", i + 1);
        lerNomeCompahia(&c[i]);
        lerAreaAtualCompahia(&c[i]);
        lerValorAtualAcao(&c[i]);
        lerValorAnteriorAcao(&c[i]);
    }
}

void imprimirDadosCompahia(Compahia *c, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\n--- Companhia %d ---\n", i + 1);
        printf("Nome: %s\n", c[i].nome);
        printf("Área de atuação: %s\n", c[i].areaAtuacao);
        printf("Valor atual das ações: R$ %.2f\n", c[i].valorAtualAcao);
        printf("Valor anterior das ações: R$ %.2f\n", c[i].valorAnteriorAcao);
        float variacao = ((c[i].valorAtualAcao - c[i].valorAnteriorAcao) / c[i].valorAnteriorAcao) * 100;
        printf("Variação: %.2f%%\n", variacao);
    }
}

int main() {
    int tam = lerQtCompahias();
    Compahia *compahias = malloc(tam * sizeof(Compahia));

    cadastrarCompahias(compahias, tam);
    imprimirDadosCompahia(compahias, tam);

    free(compahias);
    return 0;
}
