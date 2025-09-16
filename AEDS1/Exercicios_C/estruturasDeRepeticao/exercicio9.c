/*
Construa um programa, para identificar se um ano é bissexto ou não.
O programa deverá permitir ao usuário testar mais que um ano. Para isto, ao final, o programa deverá
enviar uma mensagem ao usuário questionando seu desejo de verificar um novo ano e ler a resposta do
usuário (S/N). De acordo com a resposta lida, uma nova iteração deverá ocorrer ou o programa ser
finalizado.
* O programa deverá rejeitar a leitura de valores diferentes de [S/N]. Caso isto ocorra, o programa
deverá repetir a leitura da resposta do usuário.
*/

#include<stdio.h>

int main(){
    printf("=== Validar ano bissexto ===\n");
    int ano;
    char respUser;

    do{
        printf("Voce deseja verificar se um ano e bissexto? [S / N]: ");
        scanf(" %c" , &respUser);

        if(respUser == 'S' || respUser == 's'){
            do{
                printf("Digite o ano: \n");
                scanf("%d" , &ano);
            }while(ano < 0);

            if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
                printf("\nO ano %d e bissexto" , ano);
            }
            else{
                printf("\nO ano %d nao e bissexto" , ano);
            }
        }
        else if(respUser == 'N' || respUser == 'n'){
            printf("\nObrigado por utilizar o programa!\n");
        }
        else{
            printf("\nCaractere fora de dominio, tente novamente\n");
        }
    }while(respUser != 'N' && respUser != 'n');

    return 0;
}