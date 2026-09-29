#include <string>
#include <iostream>
using namespace std;

class Funcionario
{
private:
    int matricula;
    string nome;
    double salario;

public:
    static int mat;

    Funcionario(string _nome)
    {
        Funcionario::mat++;
        matricula = Funcionario::mat;
        nome = _nome;
        salario = 0;
    }

    string getNome()
    {
        return nome;
    }

    int getMatricula()
    {
        return matricula;
    }

    double getSalario()
    {
        return salario;
    }

    void setNome(string _nome)
    {
        nome = _nome;
    }

    void setSalario(double _salario)
    {
        salario = _salario;
    }

    virtual void exibeDados()
    {
        cout << "Nome: " << nome << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Salario: " << salario << endl;
    }
};

int Funcionario::mat = 0;