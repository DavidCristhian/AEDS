import java.util.Scanner;

public class jogoDasPilhas {
    private int[] data;
    private int topo;

    public jogoDasPilhas(int capacity){
        data = new int[capacity];
        topo = -1; 
    }

    public boolean estaVazia(){
        return topo == -1;
    }

    public boolean estaCheia(){
        return topo == data.length - 1;
    }

    public void inserirPilha(int valor){
        if (estaCheia()) {
            return;
        }
        topo++;
        data[topo] = valor;
    }

    public int somaPilha(){
        int result = 0;
        for(int i = 0; i <= topo; i++){
            result += data[i];
        }
        return result;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt()){
            int n = sc.nextInt();  
            if(n == 0) break;

            jogoDasPilhas[] vetorPilhas = new jogoDasPilhas[n];

            // cria N pilhas de tamanho 3
            for(int i = 0; i < n; i++){
                vetorPilhas[i] = new jogoDasPilhas(3);
            }

            // lê n linhas contendo A B C
            for(int i = 0; i < n; i++){
                int a = sc.nextInt();
                int b = sc.nextInt();
                int c = sc.nextInt();

                vetorPilhas[i].inserirPilha(a);
                vetorPilhas[i].inserirPilha(b);
                vetorPilhas[i].inserirPilha(c);
            }

            // soma todas as pilhas
            int somaTotal = 0;
            for(int i = 0; i < n; i++){
                somaTotal += vetorPilhas[i].somaPilha();
            }

            // verifica sua lógica
            if(somaTotal % 3 == 0)
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}