package AEDS.AEDS2.desafiosDaDisciplina_JAVA;

import java.util.Scanner;

public class somaDigitos{

    public static boolean flegStop(String str){ 
        return(str.length() == 3 && str.charAt(0) == 'F' &&
               str.charAt(1) == 'I' && str.charAt(2) == 'M');
    }

    public static int stringParaInteiro(String str){
        int num = 0;

        for(int i = 0; i < str.length(); i++){
            num = num * 10 + (str.charAt(i) - '0');
        }

        return num;
    }

    public static int somaDigitosRec(int num){
        if(num == 0){
            return 0;
        }

        return (num % 10) + somaDigitosRec(num / 10);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        String linha = sc.nextLine();
        while(!(flegStop(linha))){

            int num = stringParaInteiro(linha);
            int soma = somaDigitosRec(num);

            System.out.println(soma);

            linha = sc.nextLine();
        }
    }
}