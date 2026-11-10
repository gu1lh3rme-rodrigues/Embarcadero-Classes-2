#include "Aluguel.h"
		
	AluguelQuarto::AluguelQuarto() {
	
	    numDiaria = 0;
	    numPessoas = 0;
	    ocupado = false;
	
	    diaE = mesE = anoE = horaE = minE = 0;
	    diaS = mesS = anoS = horaS = minS = 0;
	}
	
	double AluguelQuarto::valorDiaria = Diaria;
	
	// Gets
	
	double AluguelQuarto::getValorDiaria() {
	    return valorDiaria;
	}
	
	string AluguelQuarto::getNomeLocatario() {
	    return nomeLocatario;
	}
	
	int AluguelQuarto::getNumPessoas() {
	    return numPessoas;
	}
	
	bool AluguelQuarto::getOcupado() {
	    return ocupado;
	}
	
	// Sets
	
	void AluguelQuarto::setValorDiaria(double valor) {
	    valorDiaria = valor;
	}
	
	void AluguelQuarto::setNomeLocatario(string nome) {
	    nomeLocatario = nome;
	}
	
	void AluguelQuarto::setNumPessoas(int pessoas) {
	    numPessoas = pessoas;
	}
	
	//entrada
	
	void AluguelQuarto::registrarEntrada(
	    string nome, int _diaE, int _mesE,
	    int _anoE, int _horaE, int _minE) {
	
	    nomeLocatario = nome;
	
	    diaE = _diaE;
	    mesE = _mesE;
	    anoE = _anoE;
	
	    horaE = _horaE;
	    minE = _minE;
	
	    ocupado = true;
	}
	
	// Ano bissexto
	
	bool AluguelQuarto::anoBissexto(int ano) {
	
	    return (ano % 400 == 0) ||
	           (ano % 4 == 0 && ano % 100 != 0);
	}
	
	// Dias do mês
	
	int AluguelQuarto::diasMes(int mes, int ano) {
	
		
	    if (mes == 2) {
	        if (anoBissexto(ano))
	            return 29;
	        else
	            return 28;
	    }
	
	    if (mes == 4 || mes == 6 ||
	        mes == 9 || mes == 11)
	        return 30;
	
	    return 31;
	}
	
	// Converter data em dias
	
	int AluguelQuarto::converterData(
	    int dia, int mes, int ano) {
	
	    int dias = 0;
	
	    for (int i = 1; i < ano; i++) {
	
	        if (anoBissexto(i))
	            dias += 366;
	        else
	            dias += 365;
	    }
	
	    for (int i = 1; i < mes; i++) {
	        dias += diasMes(i, ano);
	    }
	
	    dias += dia;
	
	    return dias;
	}
	
	// Calcular diárias
	
	int AluguelQuarto::CalcDiaria() {
	
	    int entrada = converterData(diaE, mesE, anoE);
	    int saida = converterData(diaS, mesS, anoS);
	
	    numDiaria = saida - entrada;
	
	    if (horaS > 12 || (horaS == 12 && minS > 0))
	        numDiaria++;
	
	    if (numDiaria < 1)
	        numDiaria = 1;
	
	    return numDiaria;
	}
	
	// Calcular valor
	
	double AluguelQuarto::CalcValor() {
	
	    return CalcDiaria() * valorDiaria;
	}
	
	// Registrar saída
	
	void AluguelQuarto::registrarSaida(
	    int _diaS, int _mesS, int _anoS,
	    int _horaS, int _minS) {
	
	    diaS = _diaS;
	    mesS = _mesS;
	    anoS = _anoS;
	
	    horaS = _horaS;
	    minS = _minS;
	}
	
	//recibo
	
	void AluguelQuarto::exibeDados() {
	
	    cout << "\n---------- RECIBO ----------" << endl;
	
	    cout << "Locatario: " << nomeLocatario << endl;
	
	    cout << "Data e horario de entrada: "
	         << diaE << "/" << mesE << "/" << anoE
	         << " " << horaE << ":" << minE << endl;
	
	    cout << "Data e horario de saida: "
	         << diaS << "/" << mesS << "/" << anoS
	         << " " << horaS << ":" << minS << endl;
	
	    cout << "Numero de diarias: " << CalcDiaria() << endl;
	
	    cout << "Total devido: R$ " << CalcValor() << endl;
	
	    cout << "----------------------------" << endl;
	}
	
	// Liberar quarto
	
	void AluguelQuarto::liberarQuarto() {
	    ocupado = false;
	}
