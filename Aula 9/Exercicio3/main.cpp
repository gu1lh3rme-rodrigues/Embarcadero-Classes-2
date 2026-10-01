#include <iostream>
#include "Ingresso.h"
#include "VIP.h"
#include "Normal.h"
#include "CamaroteInferior.h"
#include "CamaroteSuperior.h"

using namespace std;

int main(int argc, char** argv) {
	
	Ingresso *I1 = new Ingresso(50);
	
	cout << "Show IF: Exercicio 3 \n\n" << endl;
	cout << "Ingresso: " << endl;
	I1->imprimeValor();
	
	cout << "\n___________________________________________\n" << endl;
	
	Normal *N1 = new Normal(50);
	
	cout << "Valor do Ingresso: " << endl;
	N1->imprimeValor();
	N1->imprimeIngressoNormal();
	
	cout << "\n___________________________________________\n" << endl;
	
	VIP *V1 = new VIP(50, 30);
	
	cout << "Valor do Ingresso VIP: " << endl;
	V1->imprimeValor();
	cout << "Valor VIP: R$ " << V1->getValorVIP() << endl;
	
	cout << "\n___________________________________________\n" << endl;
	
	CamaroteInferior *C1 = new CamaroteInferior(50, 30, "Setor A");
	
	cout << "Camarote Basico" << endl;
	C1->imprimeValor();
	cout << "Valor VIP: R$ " << C1->getValorVIP() << endl;
	cout << "Localizacao: " << C1->getLocalizacao() << endl;
	C1->imprimeLocalizacao();
	
	cout << "\n___________________________________________\n" << endl;
	
	CamaroteSuperior *C2 = new CamaroteSuperior(50, 30, 50);
	
	cout << "Camarote Plus" << endl;
	C2->imprimeValor();
	cout << "Valor do Camarote Superior: R$ " 
		 << C2->getValorCamaroteSuperior() << endl;
	
	return 0;
}