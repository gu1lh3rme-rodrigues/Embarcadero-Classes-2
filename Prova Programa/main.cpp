#include <iostream>
#include <string>
#include "Aluno.cpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Aluno::UltMatricula = 0;
int main(int argc, char** argv) {
	
  	Aluno *a1 = new Aluno("Joao");
  	a1->getMatricula();
    a1->setNota(10, 10, 9, 6);
    
    
    Aluno *a2 = new Aluno("Pedro");
    a2->getMatricula();
    a2->setNota(6, 7, 5, 5);
    
    
    int matricula;

    cout << "Digite a Matricula: ";
    cin >> matricula;

    if (matricula == a1->getMatricula()) {
        cout << "Aluno: " << a1->getNome() << endl;
         if (a1->getMedia() >= 7){
        	cout << "Aprovado" << endl;
		}
		else if (a1->getMedia() >=4 && a1->getMedia()<7){
			cout << "Exame Pendente" << endl;
		}
		else if(a1->getMedia()<4){
			cout << "Reprovado" << endl;
		}
		
		
        cout << "Media: " << a1->getMedia() << endl;
    }
    else if (matricula == a2->getMatricula()) {
        cout << "Aluno: " << a2->getNome() << endl;
        if (a2->getMedia() >= 7){
        	cout << "Aprovado" << endl;
		}
		else if (a2->getMedia() >=4 && a2->getMedia()<7){
			cout << "Exame Pendente" << endl;
		}
		else if(a2->getMedia()<4){
			cout << "Reprovado" << endl;
		}
		
        cout << "Media: " << a2->getMedia() << endl;
    }
    else {
        cout << "Matricula nao encontrada!" << endl;
    }
    

    return 0;
}