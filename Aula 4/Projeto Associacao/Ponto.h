#pragma once //Faz com que o ficheiro atual seja incluido uma unica ve na compilação
//ponto.H é a declaração de metodos e tals pro ponto.Cpp
class Ponto
{
	private: 
	int id;
	int x;
	int y;
	
	public:
		//Ponto(int _id, int _x, int _y){
			
			int getId();
			int getX();
			int getY();
			
			void setId(int _id);
			void setX(int _x);
			void setY(int _y);
			
		};