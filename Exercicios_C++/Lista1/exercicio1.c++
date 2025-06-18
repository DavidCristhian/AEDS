#include <iostream>
#include <string>
using namespace std;

// Classe mãe
class Animal{
    protected: // Atributo
        string nome;
    public: // Métodos
        Animal(string nome){ // Construtor
            this->nome = nome;
            cout << "animal criado: " << nome << endl;
        }
        virtual void falar(){ // Método que poderá ser editado
            cout << nome << "Faz algum som generico" << endl;
        }
        string getNome(){
            return nome;
        }
        void setNome(string novoNome){
            nome = novoNome;
        }
        virtual ~Animal(){ // Destrutor
            cout << "Animal destruido" << endl;
        }
};

class Cachorro : public Animal{ // Classe filha
    public:
        Cachorro(string nome) : Animal(nome){
            cout << "Cachorro criado" << endl;
        }

        void falar() override{
            cout << nome << " fala: au au" << endl;
        }

        ~Cachorro() override{
            cout << "Cachorro destruído: " << nome << endl;
        }
};

class Gato : public Animal{ // Classe filha
    public:
        Gato(string nome) : Animal(nome){
            cout << "Gato criado" << endl;
        }

        void falar() override{
            cout << nome << " fala: miau, miau" << endl;
        }

        ~Gato() override{
            cout << "Gato destruido: " << nome << endl;
        }
};

int main(){
    int tam = 2;
    Animal* animais[tam];

    // Estanciando manualmente
    animais[0] = new Cachorro("Rex");
    animais[1] = new Gato("Mimi");

    cout << "Animais falando" << endl;
    for(int i = 0; i < tam; i++){
        animais[i]->falar();
    }

    // Deletando na memoria
    for (int i = 0; i < tam; i++){
       delete animais[i];
    }

    return 0;
}