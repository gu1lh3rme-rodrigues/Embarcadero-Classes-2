#include <string>

using namespace std;

class Pessoa {
	
		private:	
		string nome;
		int idade;
		double altura;
	
	public: 
		Pessoa(string _nome, int _idade, double _altura){
			nome = _nome;
			idade = _idade;
			altura = _altura;
	}
	
	Pessoa(){
	}
	
	void setNome (string _nome) {
		nome = _nome;
	}
	
	string getNome (){
		return nome;
	}
	
	
	void setIdade (int _idade) {
		idade = _idade;
	}
	
	int getIdade(){
		return idade;
	}
	
	
	void setAltura (double _altura) {
		altura = _altura;
	}
	
	double getAltura(){
		return altura;
	}
	
};