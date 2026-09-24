#include <string>
#include "Funcionario.cpp"

using namespace std;

class Gerente: public Funcionario
{
	private:
		string Titulo;
		
	public:
		Gerente();
		Gerente(string _nome, double _salario, string _Titulo):Funcionario(_nome, _salario)
		{
			Titulo = _Titulo;			
		}
	
};