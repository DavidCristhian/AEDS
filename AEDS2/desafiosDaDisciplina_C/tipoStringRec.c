#include<stdio.h>
#include<stdbool.h>

int tamString(char *str){ // Retorna o tamanho da string
    int count = 0;
    while(str[count] != '\0') count++;

    return count;
}

bool flegStop(char *str){ // Valida se a string é a fleg de parada
    return(tamString(str) == 3 && str[0] == 'F' &&
            str[1] == 'I' && str[2] == 'M');
}

bool somenteVogaisRec(char *str, int tam){ // Função recursica para validar se a string possui somente vogais

    if(tam < 0){ // Caso base: Se a string for percorrida sem interrupções retorna true
        return true;
    } 

    if(!(str[tam] == 'a' || str[tam] == 'A' || // Valida se o caracterer não é vogal
            str[tam] == 'e' || str[tam] == 'E' ||
            str[tam] == 'i' || str[tam] == 'I' ||
            str[tam] == 'o' || str[tam] == 'O' ||
            str[tam] == 'u' || str[tam] == 'U')) return false; // Retorna false se não for vogal

    return somenteVogaisRec(str, tam - 1); // Chamada recussiva
}

bool somenteVogais(char *str){ // Função principal para chamar a função recursiva
    int tam = tamString(str) - 1;
    return somenteVogaisRec(str, tam);
}

bool somenteConsoantesRec(char *str, int tam){ // Função recursica para validar se a string possui somente consoantes

    if(tam < 0){ // Caso base: Se a string for percorrida sem interrupções retorna true
        return true;
    }

    if(!(str[tam] >= 'a' && str[tam] <= 'z' ||
        str[tam] >= 'A' && str[tam] <= 'Z')) return false; // Valida se é uma letra

    if((    str[tam] == 'a' || str[tam] == 'A' ||
            str[tam] == 'e' || str[tam] == 'E' ||
            str[tam] == 'i' || str[tam] == 'I' ||
            str[tam] == 'o' || str[tam] == 'O' ||
            str[tam] == 'u' || str[tam] == 'U')) return false; // Valida se é consoante 

    return somenteConsoantesRec(str, tam - 1);
}

bool somenteConsoantes(char *str){ // Função principal para chamar a função recursiva
    int tam = tamString(str) - 1;
    return somenteConsoantesRec(str, tam);
}

bool somenteInteirosRec(char *str, int tam){ // Função recursica para validar se a string possui somente um número inteiro

    if(tam < 0){ // Caso base: Se a string for percorrida sem interrupções retorna true
        return true;
    }

    if(!(str[tam] >= '0' && str[tam] <= '9')) return false; // Valida se é um número

    return somenteInteirosRec(str, tam - 1);
}

bool somenteInteiros(char *str){ // Função principal para chamar a função recursiva
    int tam = tamString(str) - 1;
    return somenteInteirosRec(str, tam);
}

bool somenteRealRec(char *str, int tam, int count){ // Função recursica para validar se a string possui somente um número real

    if(tam < 0 && count == 1) return true; // Valida se é um número real

    if(!((str[tam] >= '0' && str[tam] <= '9') || (str[tam] == '.' || str[tam] == ','))) return false; // valida se é número ou '.' , ','

    if(str[tam] == '.' || str[tam] == ','){ // Contabiliza o separador da parte decimal
        count++;
        if(count > 1) return false; // Valida se é um número real
    }  

    return somenteRealRec(str, tam - 1, count);
}

bool somenteReal(char *str){
    int tam = tamString(str) - 1;
    int count = 0;
    return somenteRealRec(str, tam, count);
}

int main(){
    char str[1000];

    while(fgets(str, 1000, stdin) != NULL){

        int i = 0;
        while(str[i] != '\0'){ // Retira o \n 
            if(str[i] == '\n'){
                str[i] = '\0';
            }
            i++;
        }

        if(flegStop(str)) break; // Valida se a string é a fleg de parada

        // Variáveis de controle
        bool v = somenteVogais(str);
        bool c = somenteConsoantes(str);
        bool nInt = somenteInteiros(str);
        bool nReal = somenteReal(str);

        // Exibição
        printf("%s %s %s %s\n",
        v ? "SIM" : "NAO",
        c ? "SIM" : "NAO",
        nInt ? "SIM" : "NAO",
        nReal ? "SIM" : "NAO");
    }

    return 0;
}