package Java;

public class Matriz {
    public NoMatriz inicio;
    public int linha;
    public int coluna;

    Matriz(){
        this(3,3);
    }

    Matriz(int linha, int coluna){
        inicio = new NoMatriz();
        NoMatriz L = inicio;
        NoMatriz C = inicio;

        // Construindo a primeira linha da matriz
        for(int i = 1; i < coluna; i++){
            C.dir = new NoMatriz();
            C.dir.esq = C;
            C = C.dir;
        }

        // Construindo as demais linhas da matriz;
        for(int i = 1; i < linha; i++){
            L.inf = new NoMatriz();
            L.inf.sup = L;
            L = L.inf;
            C = L;
            for(int j = 1; j < coluna; j++){
                C.dir = new NoMatriz();
                C.dir.esq = C;
                C.sup.dir.inf = C;
                C.dir.sup = C.sup.dir;
                C = C.dir;
            }
        }
    }

    // Metodo para transformar Matriz em circular;
    // public void matrizCircular(){
    //     NoMatriz L = inicio;
    //     NoMatriz C = inicio;


    // }
}
