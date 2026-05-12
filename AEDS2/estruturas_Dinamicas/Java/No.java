package Java;

public class No {
    public int elemento; // Elemento que a célula / Nó possuí
    public No prox; // Ponteiro para próximo Nó
    
    // === Construtores ===
    No(){
        this(0);
    }

    No(int elemento){
        this.elemento = elemento;
        prox = null;
    }
}