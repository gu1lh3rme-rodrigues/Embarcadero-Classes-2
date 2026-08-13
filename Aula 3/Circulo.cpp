#include <string>

class Circulo
{
	private: 
    	int x;
    	int y;
    	int raio;
    	double PI = 3.14;
    	
    public: Circulo(){
    	
	}
	
	public: Circulo(int _x, int _y, int _raio, double _PI){
		x = _x;
		y = _y;
		raio = _raio;
		PI = _PI;
	}
	
	
	void setX (int _x){
		x = _x;
	}
	
	int getX(){
		return x;
	}
	
	
	void setY (int _Y){
		y = y;
	}
	
	int getY(){
		return y;
	}
	
	
	void setRaio (int _raio){
		raio = _raio;
	}
	
	int getRaio(){
		return raio;
	}
	
	
	void setPI (int _PI){
		PI = _PI;
	}
	
	double getPI(){
		return PI;
	}

	double calculeComprimento(){
		double comp = 2*PI*raio;
		return comp;
		
		/*return 2*PI*raio;*/
		
	}
};