/*
Faça funções para: 
1. Calcular a soma de dois valores reais.
2. Calcular o maior entre dois valores reais.
3. Calcular o perímetro de um quadrado.
4. Identificar se um inteiro é par ou ímpar.
5. Calcular o fatorial de um número natural.
6. Calcular a potenciação (não usar a classe Math).
7. Identificar se um número natural é primo ou não.
*/

#include<stdio.h>
#include<stdbool.h>

float somaReais(int num1, int num2){
    return num1 + num2;
}

float maiorNum(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else return num2;
}

float calc_Perimetro_Quadrado(int n){
    return n * 4;
}

bool ehPar(int n){
    bool par = false;

    if(n % 2 == 0){
        par = true;
    }

    return par;
}

int fatorial(int n){
    int fat = 1;

    for(int i = n; i >= 1; i--){
        fat *= i; 
    }

    return fat;
}

int potencia(int base, int expoente){
    int result = 1;

    for(int i = 1; i <= expoente; i++){
        result *= base;
    }

    return result;
}

bool ehPrimo(int n){
    bool primo = false;
    int cont_Divisores = 1;


    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            cont_Divisores++;
        }
    }

    if(cont_Divisores == 2){
        primo = true;
    }

    return primo;
}

int ler_Base(){
    int n;
    
    do{
        printf("Digite a base: \n");
        scanf("%d" , &n);
    }while(n < 0);
    
    return n;
}

int ler_Expoente(){
    int n;
    
    do{
        printf("Digite o expoente: \n");
        scanf("%d" , &n);
    }while(n < 0);
    
    return n;
}

int ler_Num_Natural(){
    int n;

    do{
        printf("Digite o numero: \n");
        scanf("%d" , &n);
    }while(n < 0);

    return n;
}

int ler_Lado_Quadrado(){
    int n; 

    do{
        printf("Digite o valor de um dos lados do quadrado: \n");
        scanf("%d" , &n);
    }while(n < 0);

    return n;
}

int main(){
    printf("=== Funcoes basicas ===\n");
    int result_Fatorial1, maior, result_Fatorial2, base, expoente, num1, num2, lado_Quadrado, perimetro_Quadrado, soma;

    num1 = ler_Num_Natural();
    num2 = ler_Num_Natural();
    lado_Quadrado = ler_Lado_Quadrado();
    base = ler_Base();
    expoente = ler_Expoente();

    perimetro_Quadrado = calc_Perimetro_Quadrado(lado_Quadrado);
    soma = somaReais(num1, num2);

    result_Fatorial1 = fatorial(num1);
    result_Fatorial2 = fatorial(num2);

    maior = maiorNum(num1, num2);

    printf("\nO fatorial de %d, equivale a: %d\n" , num1, result_Fatorial1);
    printf("\nO fatorial de %d, equivale a: %d\n" , num2, result_Fatorial2);
    printf("\nO perimetro do quadrado com lado %d, equivale a: %d\n" , lado_Quadrado, perimetro_Quadrado);
    printf("\nO maior numero entre %d e %d e: %d\n" , num1, num2, maior);
    printf("\n%d elevado a %d e: %d\n" , base, expoente, potencia(base, expoente));
    printf("\nA soma de %d e %d, equivale a: %d\n" , num1, num2, soma);

    if(ehPar(num1)){
        printf("\nO numero %d e par\n" , num1);
    }
    if(ehPar(num2)){
        printf("\nO numero %d e par\n" , num2);
    }
    if(ehPrimo(num1)){
        printf("\nO numero %d e primo\n" , num1);
    }
    if(ehPrimo(num2)){
        printf("\nO numero %d e primo\n" , num2);
    }

    return 0;
}