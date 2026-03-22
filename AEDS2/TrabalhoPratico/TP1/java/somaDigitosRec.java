package AEDS.AEDS2.TrabalhoPratico.TP1.java;
import java.util.Scanner;

public class somaDigitosRec {
    // Função para validar se a string é a flag de parada
    public static boolean ehFleg(String str){
        return (str.length() == 3 &&
                str.charAt(0) == 'F' &&
                str.charAt(1) == 'I' &&
                str.charAt(2) == 'M');
    }

    // Função para transformar uma string em número
    public static int stringToInt(String str){
        int num = 0;

        for(int i = 0; i < str.length(); i++){
            char c = str.charAt(i);

            if(c >= '0' && c <= '9'){
                num = (num * 10) + (c - '0');
            }
        }
        return num;
    }

    // Função para somar os digitos de um número
    public static int somaDigitos(int num){
        if(num == 0) return 0;
        else { return (num % 10) + somaDigitos(num / 10); }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str;

        str = sc.nextLine();
        while(!ehFleg(str)){
            int num = stringToInt(str);
            int soma = somaDigitos(num);

            System.out.println(soma);
            if(sc.hasNextLine()){
                str = sc.nextLine();
            } else{
                break;
            } 
        }
        sc.close();
    }
}
