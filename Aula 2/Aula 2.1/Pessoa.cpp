#include <string>

using namespace std;

class Pessoa {
	public:
		string nome;
		int idade;
		double altura;
	
	public: Pessoa(){
		
	}
	
	public: Pessoa(string _nome, int _idade, double _altura){
		nome = _nome;
		idade = _idade;
		altura = _altura;
	}
};