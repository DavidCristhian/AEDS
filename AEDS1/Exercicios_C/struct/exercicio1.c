#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;   
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    int idade;
    float altura;
    Data dataNascimento;
} Pessoa;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void removerQuebraLinha(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

void lerNome(Pessoa *p) {
    printf("Digite o nome: ");
    fgets(p->nome, 100, stdin);
    removerQuebraLinha(p->nome);
}

void lerIdade(Pessoa *p){
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    limparBuffer(); // Limpa o '\n' após scanf
}

void lerAltura(Pessoa *p){
    printf("Digite a altura: ");
    scanf("%f", &p->altura);
    limparBuffer();
}

void lerDataNascimento(Pessoa *p){
    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &p->dataNascimento.dia, &p->dataNascimento.mes, &p->dataNascimento.ano);
    limparBuffer();
}

void exibirPessoa(Pessoa *p, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Pessoa %d: %s\n", i + 1, p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %.2f\n", p[i].altura);
        printf("Data de Nascimento: %02d/%02d/%04d\n", p[i].dataNascimento.dia, p[i].dataNascimento.mes, p[i].dataNascimento.ano);
        printf("\n");
    }
}

int main() {
    int tam = 2;
    Pessoa pessoas[tam];

    for (int i = 0; i < tam; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);
        lerNome(&pessoas[i]);
        lerIdade(&pessoas[i]);
        lerAltura(&pessoas[i]);
        lerDataNascimento(&pessoas[i]);
    }

    printf("\n--- Lista de pessoas ---\n");
    exibirPessoa(pessoas, tam);

    return 0;
}
