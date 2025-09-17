#include<stdio.h>
#include<stdbool.h>

int tamString(char *str){
    int tam = 0;
    while(str[tam] != '\0'){
        tam++;
    }
    return tam;
}

bool flegStop(char *str){
    return(tamString(str) == 3 && str[0] == 'F' &&
            str[1] == 'I' && str[2] == 'M');
}

int transformaStringParaInteiro(char *str){
    int num = 0;

    for(int i = 0; str[i] != '\0'; i++){
        num = num * 10 + (str[i] - '0');
    }

    return num;
}

int somaDigitosRec(int num){
    if(num == 0){
        return 0;
    }
    return (num % 10) + somaDigitosRec(num / 10);
}

int main(){
    char str[1000];

    while(fgets(str, 1000, stdin) != NULL){

        int i = 0;

        while(str[i] != '\0'){
            if(str[i] == '\n'){
                str[i] = '\0';
            }
            i++;
        }

        if(flegStop(str)) break; // Verifica se a string é a fleg de parada

        int num = transformaStringParaInteiro(str);

        int soma = somaDigitosRec(num);

        printf("%d\n" , soma);
    }

    return 0;
}