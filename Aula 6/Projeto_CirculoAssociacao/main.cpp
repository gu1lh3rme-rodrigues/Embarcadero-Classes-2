#include <iostream>
#include "circulo.h"

using namespace std;

int main(int argc, char** argv) {

    Circulo *circulo1 = new Circulo(12, 2, 8);
    Circulo *circulo2 = new Circulo(1, 5, 3);

    cout << "Circulo 1:" << endl;
    cout << "Valor de X: " << circulo1->getX() << endl;
    cout << "Valor de Y: " << circulo1->getY() << endl;
    cout << "Raio: " << circulo1->getRaio() << endl;
    
    cout << "\n_______________\nResultados: \n" << endl;
    cout << "Comprimento: " << circulo1->calculeComprimento() << endl;
    cout << "Area: " << circulo1->calculeArea() << endl;

    cout << "------------------------------" << endl << endl;

    cout << "Circulo 2" << endl;
    cout << "X: " << circulo2->getX() << endl;
    cout << "Y: " << circulo2->getY() << endl;
    cout << "Raio: " << circulo2->getRaio() << endl;
    
    cout << "\n_______________\nResultados: \n" << endl;
    cout << "Comprimento: " << circulo2->calculeComprimento() << endl;
    cout << "Area: " << circulo2->calculeArea() << endl;


    return 0;
}

