package Java;

public class NoMatriz {
    public int elemento;
    public NoMatriz dir;
    public NoMatriz esq;
    public NoMatriz sup;
    public NoMatriz inf;

    NoMatriz(){
        this(0);
    }

    NoMatriz(int elemento){
        this.elemento = elemento;
        this.dir = this.esq = this.sup = this.inf = null;
    }
}
