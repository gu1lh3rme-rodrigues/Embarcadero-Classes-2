#include <iostream>
#include <string>
#include "Funcionario.cpp"

using namespace std;

class Assistente : public Funcionario
{
public:

    Assistente(string _nome, double _salario)
        : Funcionario(_nome)
    {
    }

    void exibeDados() override
    {
        Funcionario::exibeDados();

        cout << "Matricula: " << getMatricula() << endl;
    }
};
