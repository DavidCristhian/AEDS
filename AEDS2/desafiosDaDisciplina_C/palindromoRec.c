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

bool palindromoRec(char *str, int ini, int fim){
    if(ini > fim){
        return true;
    }
    if(str[ini] != str[fim]){
        return false;
    }

    return palindromoRec(str, ini + 1, fim - 1);
}

bool palindromo(char *str){
    int ini = 0;
    int fim = tamString(str) - 1;
    return palindromoRec(str, ini, fim);
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

        if(flegStop(str)) break;

        if(palindromo(str)){
            printf("SIM\n");
        } else{
            printf("NAO\n");
        }
    }

    return 0;
}