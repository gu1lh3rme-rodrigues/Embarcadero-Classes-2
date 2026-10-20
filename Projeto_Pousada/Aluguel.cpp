#include <string>
#include <iostream>
#define Diaria 100
using namespace std;

class AluguelQuarto{
	
	
	private:
		
		double valorDiaria;
		int numDiaria;
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
		//private
			double getValorDiaria();
			string getNomeLocatario();
			int getNumPessoas();
		//public
			int getDiaE();
			int getMesE();
			int getAnoE();
			int getHoraE();
			int getMinE();
			int getDiasS();
			int getMesS();
			int getAnoS();
			int getHoraS();
			int getMinS();
			
		//private
		
			
			void setDiaE(int _diaE);
			void setMesE(int _mesE);
			void setAnoE(int _anoE);
			void setHoraE(int _horaE);
			void setMinE(int _minE);
			void setDiasS(int _diasS);
			void setMesS(int _mesS);
			void setAnoS(int _anoS);
			void setHoraS(int _horaS);
			void setMinS(int _minS);
			

		//fazer método para calcular número de diárias
		 int CalcDiaria(){
		 	return diaS - diaE;
		 
		 }
		//fazer método para calcular valor devido
		
		//fazer método para imprimir recibo
		int exibeDados(){
			cout << "Dia Entrada: " << diaE << endl;
			cout << "Mes Entrada: " << mesE << endl;
			cout << "Ano Entrada: " << anoE << endl;
			cout << "Hora Entrada: " << horaE << endl;
			cout << "Min Entrada: " << minE << endl;
			
			cout << "\n-----------------" << endl;
			
			cout << "Dia Saida: " << diaS << endl;
			cout << "Mes Saida: " << mesS << endl;
			cout << "Ano Saida: " << anoS << endl;
			cout << "Hora Saidada: " << horaS << endl;
			cout << "Min Saida: " << minS << endl;
			
			cout << "\n-----------------" << endl;
			cout << "\nQtde Diarias: "<< CalcDiaria << endl;
		}
};