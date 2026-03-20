package AEDS.AEDS2.algoritmosOdenacao.java;

import java.util.*;

public class Vetor {
    protected int[] array;
    protected int tam;

    // Construtor
    public Vetor(){
        array = new int[100];
        tam = array.length;
    }

    // Construtor C/ parâmetro
    public Vetor(int tamanho){
        array = new int[tamanho];
        tam = array.length;
    }

    // Preenchendo de modo crescente
    public void crescente(){
        for(int i = 0; i < tam; i++){
            array[i] = i;
        }
    }

    // Preenchendo de modo decrescente
    public void decrescente(){
        for(int i = 0; i < tam; i++){
            array[i] = tam - 1 - i;
        }
    }

    // função para fazer a troca de dois valores em um vetor
    public void swap(int i, int j){
        int aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }

    // Preenchendo de modo aleatorio
    public void aleatorio() {
        Random rand = new Random();
        crescente(); // Começamos com o vetor preenchido

        for (int i = tam - 1; i > 0; i--) {
            // Gera um índice 'j' tal que 0 <= j <= i
            int j = rand.nextInt(i + 1);
            
            swap(i, j);
        }
    }

    // Mostrar os N primeiros numeros
    public void mostrar(int n){
        if(n < 0 || n > tam){
            throw new IllegalArgumentException("O valor (" + n + ") é inválido para o tamanho " + tam);
        }

        System.out.print("[");

        for(int i = 0; i < n; i++){
            System.out.println(array[i]+ " ");
        }

        System.out.println("]");
    }

    // Mostrar vetor
    public void mostrar(){
        System.out.print("[");

        for(int i = 0; i < tam; i++){
            System.out.println(array[i]+ " ");
        }

        System.out.println("]");
    }

    public boolean isOrdenado(){
        boolean resp = true;
        for(int i = 1; i < tam; i++){
            if(array[i] < array[i - 1]){
                i = tam;
                resp = false;
            }
        }

        return resp;
    }

    // Método para se realizar polimorfismo
    public void sort(){
        System.out.println("Método a ser implementado por diferentes classes");
    }
}
