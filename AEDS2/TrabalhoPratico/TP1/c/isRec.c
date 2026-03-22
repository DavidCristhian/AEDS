#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Função para verificar se string é flag de saída
bool ehFlag(char* str){
    return (str[0] == 'F' && str[1] == 'I' && str[2] == 'M' && str[3] == '\0');
}

// Função para retornar tamanho da string
int tamString(char* str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

// Função recursiva para verificar vogais
bool isVogaisRec(char* str, int tam, bool resp){
    if(tam < 0){
        return resp;
    }
    else{
        if(str[tam] == 'a' || str[tam] == 'A' || str[tam] == 'e' || str[tam] == 'E' || 
           str[tam] == 'i' || str[tam] == 'I' || str[tam] == 'o' || str[tam] == 'O' || 
           str[tam] == 'u' || str[tam] == 'U'){
            return isVogaisRec(str, tam - 1, resp);
        }
        else{
            return isVogaisRec(str, tam - 1, false);
        }
    }
}

bool isVogais(char *str){
    int tam = tamString(str);
    return isVogaisRec(str, tam - 1, true);
}

// Função recursiva para verificar consoantes
bool isConsoantesRec(char* str, int tam, bool resp){
    if(tam < 0){
        return resp;
    }
    else{
        if((str[tam] >= 'a' && str[tam] <= 'z') || (str[tam] >= 'A' && str[tam] <= 'Z')){
            if(str[tam] == 'a' || str[tam] == 'A' || str[tam] == 'e' || str[tam] == 'E' || 
               str[tam] == 'i' || str[tam] == 'I' || str[tam] == 'o' || str[tam] == 'O' || 
               str[tam] == 'u' || str[tam] == 'U'){
                return isConsoantesRec(str, tam - 1, false);
            } else {
                return isConsoantesRec(str, tam - 1, resp);
            }
        } else {
            return isConsoantesRec(str, tam - 1, false);
        }
    }
}

bool isConsoantes(char* str){
    int tam = tamString(str);
    return isConsoantesRec(str, tam - 1, true);
}

// Função recursiva para verificar inteiro
bool isInteiroRec(char* str, int tam, bool resp){
    if(tam < 0){
        return resp;
    }
    else{
        if((str[tam] >= '0' && str[tam] <= '9') || (tam == 0 && str[tam] == '-')){
            return isInteiroRec(str, tam - 1, resp);
        }
        else{
            return isInteiroRec(str, tam - 1, false);
        }
    }
}

bool isInteiro(char* str){
    int tamStr = tamString(str);
    return isInteiroRec(str, tamStr - 1, true);
}

// Função recursiva para verificar real
bool isRealRec(char* str, int tam, int count, bool resp){
    if(tam < 0){
        return (resp && count <= 1);
    }
    else{
        if((str[tam] >= '0' && str[tam] <= '9') || 
           str[tam] == '.' || str[tam] == ',' || 
           (tam == 0 && str[tam] == '-')){
            
            if(str[tam] == '.' || str[tam] == ','){
                count++;
                if(count > 1) resp = false;
            }
            return isRealRec(str, tam - 1, count, resp);
        }
        else{
            return isRealRec(str, tam - 1, count, false);
        }
    }
}

bool isReal(char* str){
    int tam = tamString(str);
    return isRealRec(str, tam - 1, 0, true);
}

// MAIN
int main(){
    char str[1000];

    while(scanf(" %999[^\n]" , str) != EOF && !ehFlag(str)){
        printf("%s ", isVogais(str) ? "SIM" : "NAO");
        printf("%s ", isConsoantes(str) ? "SIM" : "NAO");
        printf("%s ", isInteiro(str) ? "SIM" : "NAO");
        printf("%s\n", isReal(str) ? "SIM" : "NAO");
    }
    
    return 0;
}