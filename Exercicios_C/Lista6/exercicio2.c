/*
Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores
e, em seguida, determine e escreva o maior valor do vetor e a sua posição.
Exemplo de execução:
Entrada: 1.2 2.3 4.5 0.9 3.6 2.2 5.7 1.0 4.0 5.5
Saída:
Maior valor: 5.7 na posição 6
*/

#include<stdio.h>
#define tamanho_Vet 10

void ler_Vetor(float vet[tamanho_Vet]){
    for(int i = 0; i < tamanho_Vet; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f" , &vet[i]);
    }
}

void maior_Valor_Vetor(float vet[tamanho_Vet]){
    float maiorValor = vet[0];
    int posicaoMaiorValor = 0;

    for(int i = 0; i < tamanho_Vet; i++){
        if(maiorValor < vet[i]){
            maiorValor = vet[i];
            posicaoMaiorValor = i;
        }
    }
    printf("Maior valor: %.2f na posicao %d" , maiorValor, posicaoMaiorValor);
}


int main(){
    printf("=== Maior valor ===\n");
    float vet[tamanho_Vet];

    ler_Vetor(vet);
    maior_Valor_Vetor(vet);

    return 0;
}