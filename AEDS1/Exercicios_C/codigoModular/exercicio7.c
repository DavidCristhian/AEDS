/*
Construa uma nova versão para o problema dos triângulos. A partir da leitura dos valores dos três lados
do triângulo, o programa deverá informar o tipo do triângulo: equilátero, isóscele ou escaleno. Por outro
lado, uma mensagem de alerta deverá ser exibida caso os valores fornecidos são permitem a
representação de um triângulo. O programa deverá prover as seguintes funcionalidades:
- Uma função que leia o valor de um lado do triângulo.
Argumentos da função: nenhum.
Valor gerado: o valor fornecido pelo usuário através do teclado.
- Uma função que verifique se os valores apresentados como lados do triângulo atendem ou não à
condição para construir triângulos.
Argumentos da função: os três valores que representam cada lado do triângulo.
Valor gerado: verdadeiro, se os três lados permitem a construção de um triângulo; ou falso, caso
contrário.
- Uma função que verifique o tipo do triângulo.
Argumentos da função: os três lados de um triângulo.
Valor gerado: 1, se equilátero; 2, se isóscele; 3, se escaleno; 0, caso não se trate de um triângulo (para
este caso, evocar a função construída no item acima).
- Uma função que leia através do teclado o valor de um lado de um triângulo.
Argumento da função: Um número inteiro (1..3) que expresse qual o lado a ser lido, a fim de
enriquecer a mensagem enviada à tela para o usuário;
Valor gerado: a função deverá retornar o valor lido.
Obs: Consistir o dado lido (rejeitar a leitura de lado negativo)
- Uma função que escreva na tela uma string relativa a um tipo do triângulo, a saber: “Equilátero”,
“Isóscele” ou “Escaleno”.
Argumento de entrada: Um valor inteiro relativo ao tipo do triângulo, a saber: 1 (representando
equilátero), 2 (representado isóscele); 3 (representando escaleno).
*/

#include<stdio.h>
#include<stdbool.h>
void apresentacao(){
    printf("=== Validando triangulos ===\n\n");
}

float ler_Lado_Triangulo(){
    float lado;

    do{
        printf("Digite o valor do lado: \n");
        scanf("%f" , &lado);

        if(lado <= 0){
            printf("Valor invalido, tente novamente!");
        }
    }while(lado <= 0);

    return lado;
}

bool validar_Triangulo(float l1, float l2, float l3){
    bool ehTriangulo = false;

    if(l1 + l2 > l3 || l2 + l3 > l1 || l1 + l3 > l2){
        ehTriangulo = true;
    }

    return ehTriangulo;
}

int tipo_Triangulo(float l1, float l2, float l3){
    int tipo;

    if(validar_Triangulo(l1, l2, l3)){
        if(l1 == l2 && l2 == l3){
            tipo = 1;
        } else if(l1 != l2 && l2 != l3 && l3 != l1){
            tipo = 3;
        } else{
            tipo = 2;
        }
    } else{
        tipo = 0;
    }

    return tipo;
}

void imprimir_Tipo_Triangulo(int tipo){
    if(tipo == 1){
        printf("O triangulo e equilatero\n");
    } else if(tipo == 3){
        printf("O triangulo e escaleno\n");
    } else if(tipo == 2){
        printf("O triangulo e isosceles\n");
    } else{
        printf("Nao e um triangulo\n");
    }
}

int main(){
    apresentacao();
    int tipo;
    float lado1_Triangulo, lado2_Triangulo, lado3_Triangulo;

    lado1_Triangulo = ler_Lado_Triangulo();
    lado2_Triangulo = ler_Lado_Triangulo();
    lado3_Triangulo = ler_Lado_Triangulo();

    if(validar_Triangulo(lado1_Triangulo, lado2_Triangulo, lado3_Triangulo)){
        tipo = tipo_Triangulo(lado1_Triangulo, lado2_Triangulo, lado3_Triangulo);
        imprimir_Tipo_Triangulo(tipo);
    }

    return 0;
}   