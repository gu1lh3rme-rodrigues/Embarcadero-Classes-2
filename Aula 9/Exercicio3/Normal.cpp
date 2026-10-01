#include <iostream>
#include "Normal.h"

using namespace std;

Normal::Normal(double _valor)
	: Ingresso(_valor){
}

void Normal::imprimeIngressoNormal(){
	cout << "Ingresso Normal" << endl;
}