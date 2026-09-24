#include <string>
#include <iostream>
using namespace std;

class Funcionario
{

	private:
		string matricula;
		string nome;
		double salario;
	
	public:
		static int mat;
		
	Funcionario(string _nome)
	{
		Funcionario::mat++;
		matricula = to_string(Funcionario::mat);
		nome = _nome;
		salario = salario;
	}
	
	string getNome(){
		return nome;
	}
	
	string getMatricula(){
		return matricula;
	}
	
	double getSalario(){
		return salario;
	}
	
////////////////////////////////////	

	void setNome(string _nome)
	{
		nome = _nome;
	}
	
	void setSalario(double _salario){
		salario = _salario;
	}
	
	virtual void exibeDados()
    {
        cout << "Nome: " << nome << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Salario: " << salario << endl;
    }
	
};
