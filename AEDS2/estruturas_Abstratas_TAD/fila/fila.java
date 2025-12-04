package AEDS.AEDS2.estruturas_Abstratas_TAD.fila;

class No{
    int valor;
    No prox;

    No(int valor){ // Contrutor do nó
        this.valor = valor;
        this.prox = null;
    }
}

public class fila{
    private No inicio;
    private No fim;

    public fila(){
        this.inicio = null;
        this.fim = null;
    }

    public boolean estaVazia(){
        return inicio == null;
    }

    public void inserirFila(int valor){
        No novo = new No(valor);

        if(fim == null){
            inicio = novo;
            fim = novo;
        } else{
            fim.prox = novo;
            fim = novo;
        }

        System.out.println("Enfilheirando: " + valor);
    }

    public int removerFila(){
        if(estaVazia()){
            System.out.println("Erro: Fila está vazia");
            return -1;
        }
        
        int valor = inicio.valor;
        inicio = inicio.prox;
        
        if(inicio == null) fim = null;

        System.out.println("Desenfileirando: " + valor);

        return valor;
    }

    public void exibirFila(){
        if(estaVazia()){
            System.out.println("Fila vazia");
            return;
        }

        System.out.println("Elementos da fila (início → fim):");

        No atual = inicio;

        while(atual != null){
            System.out.println(atual.valor + " ");
            atual = atual.prox;
        }
    }

    public static void main(String[] args){
        fila f = new fila();

        f.inserirFila(10);
        f.inserirFila(20);
        f.inserirFila(30);

        f.exibirFila();

        f.removerFila();

        f.exibirFila();
    }
}