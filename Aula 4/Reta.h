#pragma once 
#include "Ponto.h"

class Reta
	{
		private:
		int id;
		Ponto *a;
		Ponto *b;
		
		public:
			void setId(int val);
			int getId();
			void setA(Ponto *val);
			Ponto *getA();
			void setB(Ponto *val);
			Ponto *getB();
			void print ();//assinatura (declaração de metodo)
	};