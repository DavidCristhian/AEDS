/*
Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores
das duas variáveis de forma que a variável A passe a ter o valor da variável B e
vice-versa. No final, mostre os valores finais.
*/

#include <stdio.h>

int main(){
    printf("=== Troca de valores ===\n");

    float a, b, aux;

    printf("Digite o primeiro valor, depois o segundo: ");
    scanf("%f%f" , &a, &b);

    printf("Primeiro valor: %.2f\nSegundo valor: %.2f\n" , a, b);
    
    aux = a;
    a = b;
    b = aux;

    printf("Primeiro valor: %.2f\nSegundo valor: %.2f\n" , a, b);

    return 0;
}