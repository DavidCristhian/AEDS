/*
Construa uma versão da função anterior de forma que os limites inferior e superior sejam
parametrizados.
Teste a sua função a partir da main(). Para testá-la, faça de forma que os limites inferior e superior
sejam valores lidos. Para isto, construa uma função que leia e retorne um valor inteiro fornecido pelo
teclado.
*/

#include<stdio.h>

void contagemRec_Intervalos(int inicio, int final){

    if(inicio == final){
        printf("%d" , inicio);
    } else{
        printf("%d " , inicio);
        contagemRec_Intervalos(inicio + 1 , final);
    }
}

int main(){
    printf("=== Contagem recursiva com intervalo ===\n");
    int inicio, final;

    do{
        printf("Digite o inicio do intervalo, e depois o final: \n");
        scanf("%d%d" , &inicio, &final);
    }while(inicio > final);

    contagemRec_Intervalos(inicio , final);

    return 0;
}