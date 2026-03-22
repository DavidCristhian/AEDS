#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ehFlag(char* str){
    return (str[0] == 'F' && str[1] == 'I' && str[2] == 'M' && str[3] == '\0');
}

int tamStr(char* str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void swap(char* str, int i, int j){
    char aux = str[i];
    str[i] = str[j];
    str[j] = aux;
}

void quickSort(char* str, int esq, int dir){
    int i = esq, j = dir;
    char pivo = str[(esq + dir) / 2];

    while(i <= j){
        while(str[i] < pivo) i++;
        while(str[j] > pivo) j--;

        if(i <= j){
            swap(str, i, j);
            i++;
            j--;
        }
    }

    if(esq < j) quickSort(str, esq, j);
    if(i < dir) quickSort(str, i, dir);
}

bool ehAnagrama(char* str1, char* str2, int tamStr1, int tamStr2){
    bool resp = true;
    if(tamStr1 != tamStr2){
        resp = false;
    }else{
        quickSort(str1, 0, tamStr1 - 1);
        quickSort(str2, 0, tamStr2 - 1);
        
        for(int i = 0; i < tamStr1; i++){
            if(str1[i] != str2[i]){
                resp = false;
                break;
            }
        }
    }
    
    return resp;   
}