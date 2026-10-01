#pragma once
#include "Assistente.h"

class Administrativo : public Assistente{
	
	private:
		string turno;
		double adicionalNoturno;
		
	public:
		Administrativo(int _id, string _nome, double _salario, string _turno, double _adicionalNoturno);
		
		string getTurno();
		double getAdicionalNoturno();
		
		void exibeDados();
};