#include <iostream>
#include <string>
using namespace std;

// Classe mãe
class Empregado {
private:
    static int totalEmpregados;
protected:
    string nome;
    double salarioBase;
    double imposto;
public:
    Empregado(string nome, double salarioBase, double imposto) {
        this->nome = nome;
        this->salarioBase = salarioBase;
        this->imposto = imposto;
        cout << "Empregado criado: " << nome << endl;
        totalEmpregados++;
    }

    virtual void exibirDados() {
        cout << "Nome: " << nome << ", Salário Base: R$ " << salarioBase << ", Imposto: " << imposto * 100 << "%" << endl;
    }

    static int getTotalEmpregados() {
        return totalEmpregados;
    }

    virtual ~Empregado() {
        cout << "Empregado destruído: " << nome << endl;
        totalEmpregados--;
    }
};

int Empregado::totalEmpregados = 0;

// Classe filha
class Vendedor : public Empregado {
private:
    static int totalVendedores;
    double valorVendas;
    double comissao;
public:
    Vendedor(string nome, double salarioBase, double imposto, double valorVendas, double comissao)
        : Empregado(nome, salarioBase, imposto) {
        this->valorVendas = valorVendas;
        this->comissao = comissao;
        cout << "Vendedor criado: " << nome << endl;
        totalVendedores++;
    }

    double calcularSalario() {
        return (salarioBase + (valorVendas * comissao)) * (1 - imposto);
    }

    void exibirDados() override {
        Empregado::exibirDados();
        cout << "Vendas: R$ " << valorVendas << ", Comissão: " << comissao * 100 << "%" << endl;
        cout << "Salário Líquido: R$ " << calcularSalario() << endl;
    }

    static int getTotalVendedores() {
        return totalVendedores;
    }

    ~Vendedor() override {
        cout << "Vendedor destruído: " << nome << endl;
        totalVendedores--;
    }
};

int Vendedor::totalVendedores = 0;

int main() {
    int tam = 2;
    Empregado* funcionarios[tam];

    // Criando vendedores
    funcionarios[0] = new Vendedor("Mariano", 1000.00, 0.14, 80000.00, 0.05);
    funcionarios[1] = new Vendedor("Joana", 1500.00, 0.12, 120000.00, 0.06);

    // Estatísticas iniciais
    cout << "\nEstatísticas" << endl;
    cout << "Total de empregados: " << Empregado::getTotalEmpregados() << endl;
    cout << "Total de vendedores: " << Vendedor::getTotalVendedores() << endl;

    // Exibindo dados dos vendedores
    cout << "\nInformações dos funcionários:" << endl;
    for (int i = 0; i < tam; i++) {
        funcionarios[i]->exibirDados();
        cout << endl;
    }

    // Deletando memória
    cout << "\nDeletando funcionários..." << endl;
    for (int i = 0; i < tam; i++) {
        delete funcionarios[i];
    }

    // Estatísticas finais
    cout << "\nEstatísticas após destruição:" << endl;
    cout << "Total de empregados: " << Empregado::getTotalEmpregados() << endl;
    cout << "Total de vendedores: " << Vendedor::getTotalVendedores() << endl;

    return 0;
}