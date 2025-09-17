package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class anagrama {

    public static boolean flegStop(String str){ 
        return (str.length() == 3 && str.charAt(0) == 'F' &&
                str.charAt(1) == 'I' && str.charAt(2) == 'M');
    }

    // Função para colocar em minúsculas 
    public static String paraMinuscula(String str){
        String resultado = "";
        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);
            if(c >= 'A' && c <= 'Z'){
                c = (char)(c + 32); // converte para minúscula
            }
            resultado += c;
        }
        return resultado;
    }

    // Ordenar string usando seleção (Selection Sort)
    public static String ordernarString(String str){
        char[] vetor = new char[str.length()];

        // Copia string para vetor de chars
        for(int i = 0; i < str.length(); i++){
            vetor[i] = str.charAt(i);
        }

        // Selection sort
        for(int i = 0; i < vetor.length - 1; i++){
            int minIndex = i;
            for(int j = i + 1; j < vetor.length; j++){
                if(vetor[j] < vetor[minIndex]){
                    minIndex = j;
                }
            }
            // swap manual
            char tmp = vetor[i];
            vetor[i] = vetor[minIndex];
            vetor[minIndex] = tmp;
        }

        // Reconstrói string ordenada
        String strOrdenada = "";
        for(int i = 0; i < vetor.length; i++){
            strOrdenada += vetor[i];
        }

        return strOrdenada;
    }

    public static boolean validarAnagrama(String str1, String str2){
        if(str1.length() != str2.length()) return false;

        str1 = paraMinuscula(str1);
        str2 = paraMinuscula(str2);

        String str1Ordenada = ordernarString(str1);
        String str2Ordenada = ordernarString(str2);

        for(int i = 0; i < str1Ordenada.length(); i++){
            if(str1Ordenada.charAt(i) != str2Ordenada.charAt(i)){
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String linha1, linha2;
        
        linha1 = sc.nextLine();
        while(!(flegStop(linha1))){
            linha2 = sc.nextLine();

            if(validarAnagrama(linha1, linha2)){
                System.out.println("SIM");
            } else {
                System.out.println("NÃO");
            }
            linha1 = sc.nextLine();
        }
        sc.close();
    }
}