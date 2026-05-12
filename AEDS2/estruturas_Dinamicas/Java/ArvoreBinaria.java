package Java;

public class ArvoreBinaria {
    public NoArvore raiz;

    // === Construtor ===
    ArvoreBinaria(){
        raiz = null;
    }

    // === Metodos ===
    
    // Inserindo com retorno por referencia
    public void inserir(int x) throws Exception{
        raiz = inserir(x, raiz);
    }

    // Inserindo com retorno por referencia
    public NoArvore inserir(int x, NoArvore i) throws Exception{
        if(i == null){
            i = new NoArvore(x);
        }
        else if (x > i.elemento){
            i.dir = inserir(x, i.dir);
        }
        else if(x < i.elemento){
            i.esq = inserir(x, i.esq);
        }
        else{
            throw new Exception("Error, item ja inserido");
        }
        return i;
    }

    // Metodo de pesquisa
    public boolean pesquisa(int x){
        return pesquisa(x, raiz);
    }

    public boolean pesquisa(int x, NoArvore i){
        boolean resp;
        if(i == null){
            resp = false;
        }
        else if(i.elemento == x){ 
            resp = true; 
        }
        else if(x > i.elemento){
            resp = pesquisa(x, i.dir); 
        }
        else{
            resp = pesquisa(x, i.esq); 
        }
        return resp;
    }

    // Metodo para retornar maior elemento
    public int getMaior(){
        int resp = -1;

        if(raiz != null){
            NoArvore i;
            for(i = raiz; i.dir != null; i = i.dir);
            resp = i.elemento;
        }

        return resp;
    }

    // Metodo para retornar o menor elemento
    public int getMenor(){
        int resp = -1;

        if(raiz != null){
            NoArvore i;
            for(i = raiz; i.esq != null; i = i.esq);
            resp = i.elemento;
        }

        return resp;
    }

    // Exibiçao em ordem
    public void caminharCentral(){
        caminharCentral(raiz);
    }

    public void caminharCentral(NoArvore i){
        if(i != null){
            caminharCentral(i.esq);
            System.out.print(i.elemento + " ");
            caminharCentral(i.dir);
        }
    }

    // Exibiçao dos filhos primeiro
    public void caminharPos(){
        caminharPos(raiz);
    }

    public void caminharPos(NoArvore i){
        if(i != null){
            caminharPos(i.esq);
            caminharPos(i.dir);
            System.out.print(i.elemento + " ");
        }
    }

    // Exibiçao dos filhos primeiro
    public void caminharPre(){
        caminharPos(raiz);
    }

    public void caminharPre(NoArvore i){
        if(i != null){
            System.out.print(i.elemento + " ");
            caminharPos(i.esq);
            caminharPos(i.dir);
        }
    }

    // Metodo que retorna altura da arvore
    public int getAltura(){
        return getAltura(raiz);
    }

    public int getAltura(NoArvore i){
        if(i == null){
            return - 1;
        }

        int alturaEsq = getAltura(i.esq);
        int alturaDir = getAltura(i.dir);

        return 1 + Math.max(alturaEsq, alturaDir);
    }

    // Metodo que retorna a soma dos elementos
    public int getSoma(){
        return getSoma(raiz);
    }

    public int getSoma(NoArvore i){
        if(i != null){
            return 0;
        }
        
        return i.elemento + getSoma(i.esq) + getSoma(i.dir);
    }

    // Metodo que retorna o numero de elementos pares
    public int getQtdPares(){
        return getQtdPares(raiz);
    }

    public int getQtdPares(NoArvore i){
        int resp = 0;

        if(i != null){
            resp = ((i.elemento % 2 == 0) ? 1 : 0) + getQtdPares(i.esq) + getQtdPares(i.dir);
        }

        return resp;
    }

    // Metodo para saber se as arvores sao iguais
    public boolean igual(ArvoreBinaria a1, ArvoreBinaria a2){
        return igual(a1.raiz, a2.raiz);
    }

    public boolean igual(NoArvore a1, NoArvore a2){
        boolean resp;
        if(a1 != null && a2 != null){
            resp = (a1.elemento == a2.elemento) && igual(a1.esq, a2.esq) && igual(a1.dir, a2.dir);
        }
        else if(a1 == null && a2 == null){
            resp = true;
        }
        else{
            resp = false;
        }

        return resp;
    }

}
