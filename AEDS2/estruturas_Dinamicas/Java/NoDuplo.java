package Java;

public class NoDuplo {
    public int elemento;
    public NoDuplo ant;
    public NoDuplo prox;

    // === Construtores ===;
    NoDuplo(){
        this(0);
    }

    NoDuplo(int elemento){
        this.elemento = elemento;
        this.ant = this.prox = null;
    }
}
