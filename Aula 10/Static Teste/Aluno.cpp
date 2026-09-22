#include <string>
using namespace std;

class Aluno
{
	private:
		int matricula;
		string nome;
		
	public:
		static int ultimaMatricula;
	
	Aluno(string _nome)
	{
		Aluno::ultimaMatricula++;
		matricula = Aluno::ultimaMatricula;
		nome = _nome;
	}
	
	string getNome(){
		return nome;
	}
	
	void setNome(string _nome){
		nome = _nome;
	}
	
	int getMatricula(){
		return matricula;
	}
};