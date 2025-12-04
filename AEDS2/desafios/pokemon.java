import java.util.Scanner;

public class pokemon {
    private String[] pokemons;
    private int totalPokemons;
    private int primeiro;
    private int ultimo;

    public pokemon(int total){
        totalPokemons = total;
        pokemons = new String[totalPokemons];
        primeiro = -1;
        ultimo = -1;
    }

    public boolean estaCheia(){
        return ultimo == pokemons.length - 1;
    }

    public boolean estaVazia(){
        return ultimo == -1;
    }

    public int tamanho(){
        if(estaVazia()) return 0;
        return ultimo - primeiro + 1;
    }

    public void inserirPokemon(String nome){
        if(estaCheia()){
            return; // não imprime nada, como na prova
        }

        if(estaVazia()){
            primeiro = 0;
            ultimo = 0;
            pokemons[0] = nome;
        } else {
            ultimo++;
            pokemons[ultimo] = nome;
        }
    }

    // Agora conta apenas os distintos corretamente
    public int tamanhoSemRepeticao(){
        if (estaVazia()) return 0;

        int distintos = 0;

        for(int i = primeiro; i <= ultimo; i++){
            boolean repetido = false;

            // verifica se já apareceu antes
            for(int j = primeiro; j < i; j++){
                if(pokemons[i].equals(pokemons[j])){
                    repetido = true;
                    break;
                }
            }

            if(!repetido){
                distintos++;
            }
        }

        return distintos;
    }

    public void imprimirFaltam(int faltam){
        System.out.println("Falta(m) " + faltam + " pomekon(s).");
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        pokemon p = new pokemon(n); // agora o vetor é do tamanho correto

        for(int i = 0; i < n; i++){
            String nome = sc.nextLine();
            p.inserirPokemon(nome);
        }

        int distintos = p.tamanhoSemRepeticao();

        int faltam = 151 - distintos;

        p.imprimirFaltam(faltam);
    }
}