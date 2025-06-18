/*
Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e
altura. Crie os métodos públicos necessários para sets e gets e também um método para
imprimir os dados de uma pessoa.
*/

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;
        float altura;
    public:
        Pessoa(){
            nome = "";
            idade = 0;
            altura = 0;
        }

        virtual ~Pessoa(){
            cout << "Pessoa destruída" << endl;
        }

        void setNome(string novoNome){
            this->nome = novoNome;
        }

        void setIdade(int novaIdade){
            if(novaIdade >= 0){
                this->idade = novaIdade;
            } else{
                cout << "Idade iválida!" << endl;
            }
        }

        void setAltura(float novaAltura){
            if(novaAltura > 0){
                this->altura = novaAltura;
            } else{
                cout << "Altura inválida" << endl;
            }
        }

        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        float getAltura(){
            return altura;
        }

        void imprimirDados(){
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << " anos" << endl;
            cout << "Altura: " << altura << " metros" << endl;
        }
};

int main(){
    int qtPessoas;
    string nome;
    int idade;
    float altura;

    cout << "Digite a quantidade de pessoas que deseja cadastrar: " << endl;
    cin >> qtPessoas;

    Pessoa* pessoas[qtPessoas];

    for (int i = 0; i < qtPessoas; i++)
    {
        pessoas[i] = new Pessoa;
    }

    for (int i = 0; i < qtPessoas; i++)
    {
        cin.ignore();
        cout << "Digite o nome: " << endl;
        getline(cin, nome);
        cout << "Digite a idade: " << endl;
        cin >> idade;
        cout << "Digite a altura: " << endl;
        cin >> altura;

        pessoas[i]->setNome(nome);
        pessoas[i]->setIdade(idade);
        pessoas[i]->setAltura(altura);
    }

    cout << "\nDados da pessoa: \n";
    for (int i = 0; i < qtPessoas; i++)
    {
        pessoas[i]->imprimirDados();
    }

    return 0;
}