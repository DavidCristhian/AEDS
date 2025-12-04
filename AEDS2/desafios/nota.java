import java.util.Scanner;

public class nota {
    public static void swap(int[] vet, int i, int j){
        int tmp = vet[i];
        vet[i] = vet[j];
        vet[j] = tmp; 
        
    }

    public static void ordenarVetor(int[] vet){
        for(int i = 0; i < vet.length - 1; i++){
            for(int j = i + 1; j < vet.length; j++){
                if(vet[i] > vet[j]){
                    swap(vet, i, j);
                }
            }
        }
    }
    
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);    

        while(sc.hasNext()){
            int n = sc.nextInt();
            int k = sc.nextInt();
            
            int []notas = new int[n];

            for(int i = 0; i < n; i++){
                notas[i] = sc.nextInt();
            }


            // Ordenando vetor
            ordenarVetor(notas);

            // Somatório de k-ésima maiores notas
            int result = 0;
            for(int i = n - 1; i >= n - k; i--){
                result += notas[i];
            }

            System.out.println(result);
        }
    }
}
