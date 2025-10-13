package AEDS.AEDS2.estruturas_Abstratas_TAD.fila;

class NoFila {
    int valor;        // Armazena o valor (dado) contido neste nó.
    NoFila proximo;   // Uma referência para o próximo nó na sequência da fila.

    // Construtor para inicializar um novo nó com um valor específico.
    NoFila(int valor) {
        this.valor = valor;    // Atribui o valor ao novo nó.
        this.proximo = null;   // Inicializa a referência 'proximo' como nula,
                               // indicando que este nó é o último da fila (por enquanto).
    }
}

class Fila {
    private NoFila inicio; // Referência para o primeiro nó da fila (onde a remoção ocorre).
    private NoFila fim;    // Referência para o último nó da fila (onde a inserção ocorre).

    // Construtor para inicializar a fila vazia.
    public Fila() {
        inicio = fim = null;
    }

    // Método para inserir um novo elemento no final da fila (operação enqueue).
    public void enqueue(int valor) {
        NoFila novo = new NoFila(valor); // Cria um novo nó com o valor especificado.
        
        if (fim == null) { // Caso 1: A fila está vazia.
            inicio = fim = novo; // O novo nó é o primeiro e o último da fila.
        } else { // Caso 2: A fila já contém elementos.
            fim.proximo = novo; // O antigo último nó aponta para o novo nó.
            fim = novo;         // O novo nó se torna o novo final da fila.
        }
    }

    // Método para remover o elemento do início da fila (operação dequeue).
    public void dequeue() {
        if (inicio == null) { // Verifica se a fila está vazia antes de tentar remover.
            System.out.println("Fila vazia!");
            return;
        }
        inicio = inicio.proximo; // O início da fila avança para o próximo nó, removendo o primeiro.
        
        if (inicio == null) { // Se a fila se esvaziou após a remoção,
            fim = null;       // o ponteiro do fim também deve ser nulo.
        }
    }

    // Método para exibir todos os elementos da fila, do início para o fim.
    public void exibir() {
        System.out.print("Fila (início → fim): ");
        NoFila atual = inicio; // Cria uma referência temporária para percorrer a fila.
        
        while (atual != null) { // Percorre a fila até que a referência seja nula.
            System.out.print(atual.valor + " "); // Imprime o valor do nó atual.
            atual = atual.proximo;               // Avança para o próximo nó.
        }
        System.out.println(); // Imprime uma nova linha para melhor formatação.
    }
}

public class fila_JAVA {
     public static void main(String[] args) {
        Fila fila = new Fila(); // Cria uma nova instância da classe Fila.

        // Adiciona elementos à fila (enfileira).
        fila.enqueue(10);
        fila.enqueue(20);
        fila.enqueue(30);
        
        // Exibe a fila, que deve mostrar "10 20 30 ".
        fila.exibir();

        // Remove o elemento do início da fila (desenfileira).
        fila.dequeue();
        
        // Exibe a fila após a remoção do 10, mostrando "20 30 ".
        fila.exibir();
    }
}