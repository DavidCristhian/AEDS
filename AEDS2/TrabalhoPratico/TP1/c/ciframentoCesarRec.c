#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ehFlag(char *str){
    return (str[0] == 'F' && str[1] == 'I' && str[2] == 'M' && str[3] == '\0');
}

int tamString(char *str){
    int tam = 0;

    while(str[tam] != '\0') tam++;

    return tam;
}

char* cifrarStringRec(char *str, int i, char* strCifrada){
    if(str[i] == '\0'){
        strCifrada[i] = '\0';
        return strCifrada;
    }
    else{
        strCifrada[i] = (char) (str[i] + 3);
        return cifrarStringRec(str, i + 1, strCifrada);
    }
}

char* cifrarString(char *str){
    int tam = tamString(str);
    char* strCifrada = (char*) malloc((tam + 1) * sizeof(char));

    if(strCifrada == NULL) { return NULL; }

    return cifrarStringRec(str, 0, strCifrada);
}

int main(){
    char str[1000];

    while(scanf(" %999[^\n]", str) != EOF && !ehFlag(str)){
        char *strCifrada = cifrarString(str);

        if(strCifrada != NULL){
            printf("%s\n", strCifrada);
            free(strCifrada);
        }
    }

    return 0;
}