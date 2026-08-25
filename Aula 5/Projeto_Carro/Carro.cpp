#include <iostream>

class Carro{
	private: 
	double tamanhoDoTanqueDeCombustivel;
	double combustivelNoTanque;
	double consumo;
	
	public:
	 Carro(double consumoDoCarro, double tamanhoDoTanqueDeCombustivelDoCarro){
		consumo = consumoDoCarro;
		tamanhoDoTanqueDeCombustivel = tamanhoDoTanqueDeCombustivelDoCarro;
		combustivelNoTanque = 0;
	}
	
	
	double getCombustivelNoTanque(){
		return combustivelNoTanque;
	}
		
	double getTamanhoDoTanqueDeCombustivel(){
		return tamanhoDoTanqueDeCombustivel;
	}
	
	void abastecer (double litros){
		double capacidadeDisponivelnoTanque = tamanhoDoTanqueDeCombustivel - combustivelNoTanque;
		
		double litrosASeremAbastecidos = litros;
		if (capacidadeDisponivelnoTanque<litrosASeremAbastecidos){
			litrosASeremAbastecidos = capacidadeDisponivelnoTanque;
		}
		combustivelNoTanque = combustivelNoTanque + litrosASeremAbastecidos;
		
	}
	
	double retirarCombustivel (double litros){
		double litrosRetiradosDoTanque = litros;
		if (combustivelNoTanque < litros){
			litrosRetiradosDoTanque = combustivelNoTanque;
		}
		combustivelNoTanque = combustivelNoTanque - litrosRetiradosDoTanque;
		return litrosRetiradosDoTanque;
	}
	
	double andar(double distanciaEmKilometros){
		double litrosNecessarios = distanciaEmKilometros / consumo;
		if (combustivelNoTanque < litrosNecessarios ){
			litrosNecessarios = combustivelNoTanque;
		}
		double distanciaPercorrida = consumo * litrosNecessarios; 
		combustivelNoTanque = combustivelNoTanque - litrosNecessarios;
		return distanciaPercorrida;
	}
	
	
	
	
};