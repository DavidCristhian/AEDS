/*
Implemente uma classe televisão. A televisão tem um controle de volume do som e um
controle de seleção de canal. O controle de volume permite aumentar ou diminuir a po-
tência do volume de som em uma unidade de cada vez. O controle de canal também
permite aumentar e diminuir o número do canal em uma unidade, porém, também pos-
sibilita trocar para um canal indicado. Também devem existir métodos para consultar o
valor do volume de som e o canal selecionado. No programa principal, crie uma televisão
e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos
os atributos.
*/

#include <iostriem>
using namespace std;

class Televisao{
    private: 
        int volume;
        int canal;
    public:
        Televisao(){
            valume = 0;
            canal = 0;
            cout << "Intancia criada" << endl;
        }
        ~Televisao(){
            cout << "Objeto destruido" << endl;
        }

        void setDados(int volume, int canal){
            this->volume = volume;
            this->canal = canal;
        }

        int getVolume(){return volume;}
        int getCanal(){return canal;}

        void almentarVolume(){
            volume++;
            if(volume == 100){
                cout << "Volume está na capacidade máxima" << endl;
                volume = 100;
            }
        }

        void almentarCanal(){
            canal++;
        }

        void alterarCanal(int novoCanal){
            if(novoCanal > 0){
                this->canal = novoCanal;
            }else{
                cout << "Canal inválido" << endl;
            }
        }

        void imprimirInfo(){
            cout << "Canal: " << canal << endl;
            cout << "Volume: " << volume << endl;
        }
};

int main(){
    Televisao televisao;
    int volume, canal, novoCanal;

    cout << "Digite o canal: " << endl;
    cin >> canal;
    cout << "Digite o volume: " << endl;
    cin >> volume;

    televisao.setDados(volume, canal);

    cout << "Informações atuais" << endl
    televisao.imprimirInfo();

    televisao.almentarVolume();
    televisao.almentarCanal();

    cout << "Informações alteradas" << endl
    televisao.imprimirInfo();

    cout << "Digite o canal: " << endl;
    cin >> novoCanal;

    televisao.alterarCanal(novoCanal);

    cout << "Informações alteradas" << endl
    televisao.imprimirInfo();

    return 0;
}