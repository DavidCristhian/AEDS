/*
Definir uma classe que represente um círculo. Esta classe deve possuir métodos
Privados para:
• calcular a área do círculo;
• calcular a distância entre os centros de 2 círculos;
• calcular a circunferência do círculo.
E métodos Públicos para:
• definir o raio do círculo, dado um número real;
• aumentar o raio do círculo, dado um percentual de aumento;
• definir o centro do círculo, dada uma posição (X,Y);
• imprimir o valor do raio;
• imprimir o centro do círculo;
• imprimir a área do círculo.
Criar um programa principal para testar a classe.
*/

#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

class Circulo {
private:
    float raio;
    float x, y; // Coordenadas do centro

    // Método privado para calcular a área
    float calcularArea() {
        return M_PI * raio * raio;
    }

    // Método privado para calcular a circunferência
    float calcularCircunferencia() {
        return 2 * M_PI * raio;
    }

    // Método privado para calcular a distância entre dois círculos
    float calcularDistancia(Circulo outro) {
        float dx = x - outro.x;
        float dy = y - outro.y;
        return sqrt(dx * dx + dy * dy);
    }

public:
    Circulo() {
        raio = 1.0;
        x = 0;
        y = 0;
    }

    void definirRaio(float r) {
        if (r > 0)
            raio = r;
        else
            cout << "Raio inválido!" << endl;
    }

    void aumentarRaio(float percentual) {
        if (percentual > 0) {
            raio += raio * (percentual / 100);
        }
    }

    void definirCentro(float x_, float y_) {
        x = x_;
        y = y_;
    }

    void imprimirRaio() {
        cout << "Raio: " << raio << endl;
    }

    void imprimirCentro() {
        cout << "Centro: (" << x << ", " << y << ")" << endl;
    }

    void imprimirArea() {
        cout << "Área: " << calcularArea() << endl;
    }

    void imprimirCircunferencia() {
        cout << "Circunferência: " << calcularCircunferencia() << endl;
    }

    void imprimirDistancia(Circulo outro) {
        cout << "Distância entre os centros: " << calcularDistancia(outro) << endl;
    }
};


int main() {
    Circulo c1, c2;

    // Define valores para o primeiro círculo
    c1.definirRaio(5.0);
    c1.definirCentro(2.0, 3.0);

    // Define valores para o segundo círculo
    c2.definirRaio(3.0);
    c2.definirCentro(7.0, 8.0);

    cout << "Círculo 1:" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();
    cout << endl;

    cout << "Círculo 2:" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();
    cout << endl;

    cout << "Distância entre centros dos círculos:" << endl;
    c1.imprimirDistancia(c2);

    cout << "\nAumentando raio do círculo 1 em 50%..." << endl;
    c1.aumentarRaio(50);
    c1.imprimirRaio();
    c1.imprimirArea();

    return 0;
}