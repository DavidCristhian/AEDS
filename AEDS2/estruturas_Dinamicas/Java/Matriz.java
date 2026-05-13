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

    // Metodo de pesquisa
    public boolean pesquisar(int x) {
        for (NoMatriz i = inicio; i != null; i = i.inf) { // Percorre as linhas
            for (NoMatriz j = i; j != null; j = j.dir) { // Percorre as colunas
                if (j.elemento == x) {
                    return true;
                }
            }
        }
        return false;
    }

    // Metodo para transformar matriz em circular
    public void matrizCircular() {
        if (inicio == null) return;

        NoMatriz linhaAtual = inicio;

        // Percorremos linha por linha
        while (linhaAtual != null) {
            NoMatriz primeiroDaLinha = linhaAtual;
            NoMatriz ultimoDaLinha = linhaAtual;

            // 1. Encontrar o último nó da linha atual
            while (ultimoDaLinha.dir != null) {
                ultimoDaLinha = ultimoDaLinha.dir;
            }

            // 2. Conectar o fim com o início (Horizontal)
            ultimoDaLinha.dir = primeiroDaLinha;
            primeiroDaLinha.esq = ultimoDaLinha;

            linhaAtual = linhaAtual.inf; // Desce para a próxima linha
        }

        NoMatriz colunaAtual = inicio;
        for (int j = 0; j < this.coluna; j++) {
            NoMatriz primeiroDaColuna = colunaAtual;
            NoMatriz ultimoDaColuna = colunaAtual;

            // 1. Encontrar o último nó da coluna atual
            while (ultimoDaColuna.inf != null) {
                ultimoDaColuna = ultimoDaColuna.inf;
            }

            // 2. Conectar o fim com o início (Vertical)
            ultimoDaColuna.inf = primeiroDaColuna;
            primeiroDaColuna.sup = ultimoDaColuna;

            colunaAtual = colunaAtual.dir; // Move para a próxima coluna
        }
    }

    // Metodo para validar se a matriz e quadrada
    public boolean ehQuadrada(){
        boolean resp = (this.linha == this.coluna);
        return resp;
    }

    // Metodo para mostrar diagonal principal
    public void mostrarDiagonalPrincipal(){
        if(ehQuadrada()){
            NoMatriz P = inicio;

            while(P != null){
                System.out.print(P.elemento + " ");

                if(P.inf != null){
                    P = P.inf.dir;
                }
                else{
                    P = null;
                }
            }
        }
    }

    // Metodo para mostrar diagonal secundaria
    public void mostrarDiagonalSecundaria() {
        if (ehQuadrada()) {
            NoMatriz p = inicio;
            
            // 1. Vai até o último nó da primeira linha
            while (p.dir != null) p = p.dir;
            
            // 2. Desce na diagonal (inferior + esquerda)
            while (p != null) {
                System.out.print(p.elemento + " ");
                if (p.inf != null) {
                    p = p.inf.esq;
                } else {
                    p = null;
                }
            }
        }
    }
}