#pragma once
#include "Ponto.h"

class Reta{
	private:
		int id;
		Ponto *a;
		Ponto *b;
		
		public:
			void setId(int _id);
			void setA(Ponto *_a);
			void setB(Ponto *_b);
			
			int getId();
			Ponto *getA();
			Ponto *getB();
			
			void print();
};