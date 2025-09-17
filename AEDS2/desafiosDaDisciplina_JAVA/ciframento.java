package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class ciframento {
    public static boolean flegStop(String str){ 
        return(str.length() == 3 && str.charAt(0) == 'F' &&
               str.charAt(1) == 'I' && str.charAt(2) == 'M');
    }
    
    public static String ciframentoCesar(String str){
        String resultado = "";

        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i); 

            if (c <= 127) {
                resultado = resultado + (char)(c + 3); // concatena cifrado
            } else {
                resultado = resultado + c; // mantém caractere especial
            }
        }

        return resultado;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String linha = sc.nextLine();
        while(!(flegStop(linha))){

            System.out.println(ciframentoCesar(linha));

            linha = sc.nextLine();
        }
    }
}