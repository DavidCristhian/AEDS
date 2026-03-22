package AEDS.AEDS2.TrabalhoPratico.TP1.java;

import java.util.Scanner;

public class inversaoStringRec {
    public static boolean ehFlag(String str){
        return (str.length() == 3 &&
                str.charAt(0) == 'F' &&
                str.charAt(1) == 'I' &&
                str.charAt(2) == 'M');
    }

    public static String inverterStringRec(String str, String strInvertida, int tam){
        if(tam < 0){
            return strInvertida;
        }

        return inverterStringRec(str, strInvertida + str.charAt(tam), tam - 1);
    }

    public static String inverterString(String str){
        String strInvertida = "";
        int tam = str.length() - 1;

        return inverterStringRec(str, strInvertida, tam);
    }



    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        while(!ehFlag(str)){
            String strInvertida = inverterString(str);
            System.out.println(strInvertida);

            str = sc.nextLine();
        }

        sc.close();
    }
}
