package Java;

public class NoArvore {
    public int elemento;
    public NoArvore dir;
    public NoArvore esq;

    public NoArvore(int elemento){
        this(elemento, null, null);
    }

    public NoArvore(int elemento, NoArvore dir, NoArvore esq){
        this.elemento = elemento;
        this.dir = dir;
        this.esq = esq;
    }
}
