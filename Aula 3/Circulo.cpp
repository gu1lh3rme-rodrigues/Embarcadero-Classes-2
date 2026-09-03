#include <string>

class Circulo
{
private:
    int x;
    int y;
    int raio;
    double PI = 3.14;

public:

    Circulo()
    {
    }

    Circulo(int _x, int _y, int _raio)
    {
        x = _x;
        y = _y;
        raio = _raio;
    }

    void setX(int _x)
    {
        x = _x;
    }

    int getX()
    {
        return x;
    }

    void setY(int _y)
    {
        y = _y;
    }

    int getY()
    {
        return y;
    }

    void setRaio(int _raio)
    {
        raio = _raio;
    }

    int getRaio()
    {
        return raio;
    }

    void setPI(double _PI)
    {
        PI = _PI;
    }

    double getPI()
    {
        return PI;
    }

    double calculeComprimento()
    {
        double comp = 2 * PI * raio;
        return comp;
    }
};