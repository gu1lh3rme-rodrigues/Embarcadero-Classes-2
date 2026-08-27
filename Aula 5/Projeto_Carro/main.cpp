#include <iostream>
#include "Carro.cpp"
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Carro *carro1 = new Carro (15, 52);
	Carro *carro2 = new Carro(10, 40);
	
	carro1->abastecer(25);
	carro2->abastecer(40);
	
	carro1->andar(100);
	carro2->andar(100);
	
	
	cout << "Carro1: " <<endl;
	cout << "Tanque: "<< carro1->getCombustivelNoTanque() << "Litros" <<endl;
	cout << "Carro : "<<carro1->getTamanhoDoTanqueDeCombustivel()<<endl;		
	
	cout <<"--------------------------- "<<endl;
	cout << "Carro2: "; 
	cout << "Tanque: "<< carro2->getCombustivelNoTanque() <<"Litros" <<endl;
	cout << "Carro : "<<carro2->getTamanhoDoTanqueDeCombustivel()<<endl;
	
	if(carro1->getTamanhoDoTanqueDeCombustivel() < carro2->getTamanhoDoTanqueDeCombustivel()){
		cout << "O carro1 viajou: " <<carro1->getTamanhoDoTanqueDeCombustivel() << endl;
	}
	else if (carro1->getTamanhoDoTanqueDeCombustivel() > carro2->getTamanhoDoTanqueDeCombustivel()){
		cout << "O carro2 viajou: " <<carro2->getTamanhoDoTanqueDeCombustivel() << endl;
	}
	else {
		cout <<"Os carros viajaram a mesma distancia" <<endl;
	}
	
	
	
	//cout << "Tamanho do Tanque: "<< carro2->getTamanhoDoTanqueDeCombustivel() <<endl;                        
	//cout << "Carro Andar: "<<carro2->getCombustivelNoTanque()<<endl;
	
	
	
	 
	
	return 0;
}