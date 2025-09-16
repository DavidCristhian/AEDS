// EXERCICIO 1 - CLASSES: PONTO, CIRCULO, ESFERA
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Ponto {
protected:
    float x, y;
public:
    Ponto() : x(0), y(0) {}
    Ponto(float x, float y) : x(x), y(y) {}

    void setPosicao(float x, float y) {
        this->x = x;
        this->y = y;
    }

    void getPosicao() {
        cout << "Posição: (" << x << ", " << y << ")" << endl;
    }

    float distancia(const Ponto& outro) {
        return sqrt(pow(x - outro.x, 2) + pow(y - outro.y, 2));
    }

    float distancia(float x2, float y2) {
        return sqrt(pow(x - x2, 2) + pow(y - y2, 2));
    }
};

class Circulo : public Ponto {
protected:
    float raio;
public:
    Circulo() : Ponto(), raio(0) {}
    Circulo(float x, float y, float r) : Ponto(x, y), raio(r) {}

    float getRaio() { return raio; }
    void setRaio(float r) { raio = r; }
    float area() { return 3.14 * raio * raio; }
};

class Esfera : public Circulo {
public:
    Esfera() : Circulo() {}
    Esfera(float x, float y, float r) : Circulo(x, y, r) {}

    float volume() {
        return (4.0/3.0) * 3.14 * pow(raio, 3);
    }
};

int main() {
    Esfera e(2, 3, 4);
    e.getPosicao();
    cout << "Volume da esfera: " << e.volume() << endl;

    return 0;
}