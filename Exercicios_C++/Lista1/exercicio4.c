#include <iostream>
#include <iomanip>
using namespace std;

class Relogio {
private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio() {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    ~Relogio() {
        cout << "Instância destruída" << endl;
    }

    void setHora(int hora, int minuto, int segundo) {
        if (hora >= 0 && hora < 24) this->hora = hora;
        else this->hora = 0;

        if (minuto >= 0 && minuto < 60) this->minuto = minuto;
        else this->minuto = 0;

        if (segundo >= 0 && segundo < 60) this->segundo = segundo;
        else this->segundo = 0;
    }

    int getHora() { return hora; }
    int getMinuto() { return minuto; }
    int getSegundo() { return segundo; }

    void avancarSegundo() {
        segundo++;
        if (segundo >= 60) {
            segundo = 0;
            minuto++;
            if (minuto >= 60) {
                minuto = 0;
                hora++;
                if (hora >= 24) {
                    hora = 0;
                }
            }
        }
    }

    void imprimirHora() {
        cout << setfill('0') << setw(2) << hora << ":"
             << setfill('0') << setw(2) << minuto << ":"
             << setfill('0') << setw(2) << segundo << endl;
    }
};

int main() {
    Relogio relogio;
    int hora, minuto, segundo;

    cout << "Digite a hora (0-23): ";
    cin >> hora;
    cout << "Digite os minutos (0-59): ";
    cin >> minuto;
    cout << "Digite os segundos (0-59): ";
    cin >> segundo;

    relogio.setHora(hora, minuto, segundo);

    cout << "Hora atual: ";
    relogio.imprimirHora();

    relogio.avancarSegundo();

    cout << "Hora após avançar 1 segundo: ";
    relogio.imprimirHora();

    return 0;
}
