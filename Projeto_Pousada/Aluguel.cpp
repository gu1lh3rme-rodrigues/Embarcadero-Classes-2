#include <string>

using namespace std;

class AluguelQuarto{
	
	
	private:
		
		double valorDiaria;
		
		string nomeLocatario;
		int numPessoas;
		int diaE, mesE, anoE, horaE, minE;
		int diaS, mesS, anoS, horaS, minS;
		
	public:
		
		AluguelQuarto(int _diaE, int _mesE, int _anoE, int _horaE, int _minE, int _diaS, int _mesS, int _anoS, int _horaS, int _minS)
		{
			diaE = _diaE;
			mesE = _mesE;
			anoE = _anoE;
			horaE = _horaE;
			minE = _minE;
			diaS = _diaS;
			mesS = _mesS;
			anoS = _anoS;
			horaS = _horaS;
			minS = _minS;
		}
		
		//fazer os métodos get e set dos campos privados
		
		//fazer método para calcular número de diárias
		
		//fazer método para calcular valor devido
		
		//fazer método para imprimir recibo
	
};