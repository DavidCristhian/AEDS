/*
Implemente um condicionador de ar. O condicionador possui 10 potências diferentes.
Cada unidade da potência do condicionador diminui a temperatura do ambiente em 1.8ºC.
A variação que o condicionador consegue causar está no intervalo [0ºC - 18ºC], ou seja,
zero graus de variação quando desligado e dezoito graus de variação quando ligado na
potência máxima.
Através de um sensor, o condicionador é informado da temperatura externa. Dada essa
temperatura e a potência selecionada, o condicionador calcula e retorna a temperatura
do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas
diferentes para cada um (ex: 25ºC e 31ºC), ajuste o segundo em potência máxima (10) e
o primeiro em potência média (5). Finalmente, exiba a temperatura resultante de cada
ambiente.
*/

#include <iostream>
using namespace std;

class CondicionadorAr {
private:
    int potencia; // de 0 a 10
    float temperaturaExterna;
    float efeitoPorNivel = 1.8; // cada nível reduz 1.8°C
    int potenciaMaxima = 10;

public:
    CondicionadorAr() {
        potencia = 0;
        temperaturaExterna = 25.0;
        cout << "Condicionador criado!" << endl;
    }

    ~CondicionadorAr() {
        cout << "Condicionador destruído!" << endl;
    }

    void setPotencia(int nivel) {
        if (nivel >= 0 && nivel <= potenciaMaxima) {
            potencia = nivel;
        } else {
            cout << "Potência inválida. Deve estar entre 0 e 10." << endl;
        }
    }

    void setTemperaturaExterna(float temp) {
        temperaturaExterna = temp;
    }

    float calcularTemperaturaInterna() {
        float reducao = potencia * efeitoPorNivel;
        float temperaturaInterna = temperaturaExterna - reducao;

        // Garante que a redução está dentro dos limites [0°C - 18°C]
        if (reducao > 18.0) reducao = 18.0;
        if (reducao < 0.0) reducao = 0.0;

        return temperaturaInterna;
    }

    void imprimirDados() {
        cout << "Temperatura externa: " << temperaturaExterna << "°C" << endl;
        cout << "Potência atual: " << potencia << endl;
        cout << "Temperatura interna estimada: " << calcularTemperaturaInterna() << "°C" << endl;
    }
};

int main() {
    CondicionadorAr ar1, ar2;

    // Ajustando dados conforme o enunciado
    ar1.setTemperaturaExterna(25.0);
    ar1.setPotencia(5); // potência média

    ar2.setTemperaturaExterna(31.0);
    ar2.setPotencia(10); // potência máxima

    // Exibindo resultados
    cout << "\n--- Condicionador 1 ---" << endl;
    ar1.imprimirDados();

    cout << "\n--- Condicionador 2 ---" << endl;
    ar2.imprimirDados();

    return 0;
}