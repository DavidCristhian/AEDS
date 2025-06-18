#include <iostream>
using namespace std;

class Carro {
private:
    float qtLitros;
    float distanciaTotal;
    float consumo = 15.0; // 15 km por litro
    float capacidadeMax = 50.0;

public:
    Carro() {
        qtLitros = 0;
        distanciaTotal = 0;
        cout << "Carro criado!" << endl;
    }

    ~Carro() {
        cout << "Carro destruído!" << endl;
    }

    void abastecer(float litros) {
        if (litros <= 0) {
            cout << "Valor inválido para abastecimento!" << endl;
            return;
        }

        if (qtLitros + litros > capacidadeMax) {
            qtLitros = capacidadeMax;
            cout << "Tanque cheio! Só foi possível completar até 50 litros." << endl;
        } else {
            qtLitros += litros;
        }
    }

    void mover(float distancia) {
        float litrosNecessarios = distancia / consumo;

        if (litrosNecessarios <= qtLitros) {
            qtLitros -= litrosNecessarios;
            distanciaTotal += distancia;
        } else {
            float distanciaPossivel = qtLitros * consumo;
            distanciaTotal += distanciaPossivel;
            qtLitros = 0;
            cout << "Combustível insuficiente! Só foi possível percorrer " << distanciaPossivel << " km." << endl;
        }
    }

    void imprimirInfo() {
        cout << "Combustível restante: " << qtLitros << " litros" << endl;
        cout << "Distância total percorrida: " << distanciaTotal << " km" << endl;
    }
};

int main() {
    Carro carro1, carro2;

    // Abastecendo conforme o enunciado
    carro1.abastecer(20);
    carro2.abastecer(30);

    // Movendo os carros conforme o enunciado
    carro1.mover(200);
    carro2.mover(400);

    // Exibindo os dados finais
    cout << "\n--- Carro 1 ---" << endl;
    carro1.imprimirInfo();

    cout << "\n--- Carro 2 ---" << endl;
    carro2.imprimirInfo();

    return 0;
}