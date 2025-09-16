// EXERCICIO 2 - STRUCTS: CARRO
#include <iostream>
#include <string>
using namespace std;
struct Data {
    int dia, mes, ano;
};

struct Carro {
    string modelo;
    string marca;
    int anoFabricacao;
    float preco;
    Data dataVenda;
};

void carroMaisCaro(Carro lista[], int n) {
    int indice = 0;
    for (int i = 1; i < n; i++) {
        if (lista[i].preco > lista[indice].preco) {
            indice = i;
        }
    }
    cout << "Carro mais caro: R$" << lista[indice].preco << endl;
    cout << "Data da venda: " << lista[indice].dataVenda.dia << "/"
         << lista[indice].dataVenda.mes << "/" << lista[indice].dataVenda.ano << endl;
}

int main(){
    int n;
    cout << "Digite o numero de carros: ";
    cin >> n;
    Carro* lista = new Carro[n];
    for (int i = 0; i < n; i++) {
        cout << "\nDigite dados do carro " << i+1 << ":" << endl;
        cout << "Modelo: "; cin >> ws; getline(cin, lista[i].modelo);
        cout << "Marca: "; getline(cin, lista[i].marca);
        cout << "Ano de fabricacao: "; cin >> lista[i].anoFabricacao;
        cout << "Preco: "; cin >> lista[i].preco;
        cout << "Data da venda (dia mes ano): ";
        cin >> lista[i].dataVenda.dia >> lista[i].dataVenda.mes >> lista[i].dataVenda.ano;
    }
    carroMaisCaro(lista, n);
    delete[] lista;

    return 0;
}