package AEDS.AEDS2.estruturas_Abstratas_TAD.pilha;

class NoPilha {
    int valor;        // Armazena o valor (dado) contido neste nó.
    NoPilha proximo;  // Uma referência para o próximo nó na sequência da pilha.

    // Construtor para inicializar um novo nó com um valor específico.
    NoPilha(int valor) {
        this.valor = valor;    // Atribui o valor ao novo nó.
        this.proximo = null;   // Inicializa a referência 'proximo' como nula,
                               // indicando que este é o último nó adicionado.
    }
}


class Pilha {
    private NoPilha topo;  // Referência para o nó do topo da pilha.

    // Construtor para inicializar a pilha vazia.
    public Pilha() {
        topo = null;
    }

    // Método para inserir um novo elemento no topo da pilha (operação push).
    public void push(int valor) {
        NoPilha novo = new NoPilha(valor); // Cria um novo nó com o valor especificado.
        novo.proximo = topo;              // Faz o novo nó apontar para o antigo topo.
        topo = novo;                      // O novo nó se torna o novo topo da pilha.
    }

    // Método para remover o elemento do topo da pilha (operação pop).
    public void pop() {
        // Verifica se a pilha está vazia antes de tentar remover.
        if (topo == null) {
            System.out.println("Pilha vazia!");
            return;
        }
        topo = topo.proximo; // Remove o topo, fazendo com que o segundo nó se torne o novo topo.
                             // O coletor de lixo do Java lida com a memória do nó removido.
    }

    // Método para exibir todos os elementos da pilha, do topo para a base.
    public void exibir() {
        System.out.print("Pilha (topo → base): ");
        NoPilha atual = topo; // Cria uma referência temporária para percorrer a pilha.
        
        // Percorre a pilha a partir do topo até que a referência seja nula.
        while (atual != null) {
            System.out.print(atual.valor + " "); // Imprime o valor do nó atual.
            atual = atual.proximo;               // Avança para o próximo nó.
        }
        System.out.println(); // Imprime uma nova linha para melhor formatação.
    }
}


public class pilha_JAVA {
    public static void main(String[] args) {
        Pilha pilha = new Pilha(); // Cria uma nova instância da classe Pilha.

        // Adiciona elementos à pilha (empilha).
        pilha.push(10);
        pilha.push(20);
        pilha.push(30);
        
        // Exibe a pilha, que deve mostrar "30 20 10".
        pilha.exibir();

        // Remove o elemento do topo da pilha (desempilha).
        pilha.pop();
        
        // Exibe a pilha após a remoção do 30, mostrando "20 10".
        pilha.exibir();
    }
}