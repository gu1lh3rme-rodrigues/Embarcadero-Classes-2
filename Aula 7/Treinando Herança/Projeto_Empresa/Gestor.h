#pragma once
#include "Empregado.h"

class Gestor: public Empregado{
		
		
	private:
		int classeGestor;
		
		public: 
		Gestor();
		Gestor(int _codDepartamento, string _nome, int _classeGestor);
		
		int getClasseGestor();
		void setClasseGestor(int _classeGestor);
	
};