#include <iostream>
#include <string>
using namespace std;

// Classe mãe
class Animal{
    private:
        static int totalAnimais;
    protected: // Atributo
        string nome;
    public: // Métodos
        Animal(string nome){ // Construtor
            this->nome = nome;
            cout << "animal criado: " << nome << endl;
            totalAnimais++;
        }

        virtual void falar(){ // Método que poderá ser editado
            cout << nome << "Faz algum som generico" << endl;
        }

        string getNome(){
            return nome;
        }

        static int getTotalAnimais(){
            return totalAnimais;
        }

        void setNome(string novoNome){
            nome = novoNome;
        }

        virtual ~Animal(){ // Destrutor
            cout << "Animal destruido" << endl;
            totalAnimais--;
        }
};

int Animal::totalAnimais = 0; // Inicializando o contador de intâncias da classe Animal

class Cachorro : public Animal{ // Classe filha
    private:
        static int totalCachorros;
    public:
        Cachorro(string nome) : Animal(nome){
            cout << "Cachorro criado" << endl;
            totalCachorros++;
        }

        void falar() override{
            cout << nome << " fala: au au" << endl;
        }

        static int getTotalCachorros(){
            return totalCachorros;
        }

        ~Cachorro() override{
            cout << "Cachorro destruído: " << nome << endl;
            totalCachorros--;
        }
};

int Cachorro::totalCachorros = 0; // Inicializando o contador de intâncias da classe Cachorro

class Gato : public Animal{ // Classe filha
    private:
        static int totalGatos;
    public:
        Gato(string nome) : Animal(nome){
            cout << "Gato criado" << endl;
            totalGatos++;
        }

        void falar() override{
            cout << nome << " fala: miau, miau" << endl;
        }

        static int getTotalGatos(){
            return totalGatos;
        }

        ~Gato() override{
            cout << "Gato destruido: " << nome << endl;
            totalGatos--;
        }
};

int Gato::totalGatos = 0; // Inicializando o contador de intâncias da classe Gato

int main(){
    int tam = 2;
    Animal* animais[tam];

    // Estanciando manualmente
    animais[0] = new Cachorro("Rex");
    animais[1] = new Gato("Mimi");

    // Estatísticas de criação
    cout << "Estatísticas" << endl;
    cout << "Total de animais criados: " << Animal::getTotalAnimais() << endl;
    cout << "Total de cachorros criados: " << Cachorro::getTotalCachorros() << endl;
    cout << "Total de gatos criados: " << Gato::getTotalGatos() << endl;

    // Invocando o método falar
    cout << "\nAnimais falando" << endl;
    for(int i = 0; i < tam; i++){
        animais[i]->falar();
    }

    // Deletando na memoria
    cout << "\nDeletando animais" << endl;
    for (int i = 0; i < tam; i++){
       delete animais[i];
    }

    // Estatísticas de criação, após deletar
    cout << "\nEstatísticas" << endl;
    cout << "Total de animais criados: " << Animal::getTotalAnimais() << endl;
    cout << "Total de cachorros criados: " << Cachorro::getTotalCachorros() << endl;
    cout << "Total de gatos criados: " << Gato::getTotalGatos() << endl;

    return 0;
}