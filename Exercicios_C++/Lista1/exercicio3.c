#include <iostream>
#include <string>
using namespace std;

class Elevador {
private:
    int andarAtual;
    int totalAndares;
    int capacidadeTotal;
    int pessoasPresentes;

public:
    Elevador() {
        andarAtual = 0;
        totalAndares = 0;
        capacidadeTotal = 0;
        pessoasPresentes = 0;
        cout << "Objeto criado" << endl;
    }

    ~Elevador() {
        cout << "Objeto destruído" << endl;
    }

    void inicializa(int cap, int total) {
        capacidadeTotal = cap;
        totalAndares = total;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    void entra() {
        if (pessoasPresentes < capacidadeTotal) {
            pessoasPresentes++;
            cout << "Pessoa entrou" << endl;
        } else {
            cout << "Elevador cheio" << endl;
        }
    }

    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
            cout << "Pessoa saiu" << endl;
        } else {
            cout << "Elevador vazio" << endl;
        }
    }

    void sobe() {
        if (andarAtual < totalAndares) {
            andarAtual++;
            cout << "Subiu um andar" << endl;
        } else {
            cout << "Elevador está no último andar" << endl;
        }
    }

    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
            cout << "Desceu um andar" << endl;
        } else {
            cout << "Elevador está no térreo" << endl;
        }
    }

    // Métodos get
    int getAndarAtual() { return andarAtual; }
    int getTotalAndares() { return totalAndares; }
    int getCapacidadeTotal() { return capacidadeTotal; }
    int getPessoasPresentes() { return pessoasPresentes; }

    void imprimirInfo() {
        cout << "\n=== Informações do Elevador ===" << endl;
        cout << "Andar Atual: " << andarAtual << endl;
        cout << "Total de andares: " << totalAndares << endl;
        cout << "Capacidade total: " << capacidadeTotal << endl;
        cout << "Pessoas presentes: " << pessoasPresentes << endl;
    }
};

int main() {
    Elevador elevador;
    int totalAndares, capacidadeTotal;

    cout << "Total de andares: ";
    cin >> totalAndares;
    cout << "Capacidade total: ";
    cin >> capacidadeTotal;

    elevador.inicializa(capacidadeTotal, totalAndares);

    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sai();
    elevador.desce();

    elevador.imprimirInfo();

    return 0;
}
