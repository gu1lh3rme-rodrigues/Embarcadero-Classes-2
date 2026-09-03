#pragma once

class Ponto
{
	private:
	    int id;
	    int x;
	    int y;

	public:
	
	    Ponto();
	    Ponto(int _id, int _x, int _y);
	
	    int getId();
	    int getX();
	    int getY();
	
	    void setId(int _id);
	    void setX(int _x);
	    void setY(int _y);
};

