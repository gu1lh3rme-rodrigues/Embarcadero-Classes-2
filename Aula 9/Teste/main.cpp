#include <iostream>

#include "Funcionario.h"
#include "Assistente.h"
#include "Tecnico.h"
#include "Administrativo.h"

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

#include "Pessoa.h"
#include "Rica.h"
#include "Pobre.h"
#include "Miseravel.h"

#include "Ingresso.h"
#include "Normal.h"
#include "VIP.h"
#include "CamaroteInferior.h"
#include "CamaroteSuperior.h"

#include "Imovel.h"
#include "Novo.h"
#include "Velho.h"

using namespace std;

int main(int argc, char** argv) {

    // ==========================================
    // a) Assistente administrativo e tecnico
    // ==========================================

    Administrativo *A1 = new Administrativo(
        1, "Carlos", 2500, "Noturno", 500
    );

    Tecnico *T1 = new Tecnico(
        2, "Joao", 3000, 800
    );

    cout << "Exercicio A\n\n" << endl;

    cout << "Assistente Administrativo:" << endl;
    cout << "Matricula: " << A1->getMatricula() << endl;
    cout << "Nome: " << A1->getNome() << endl;

    cout << endl;

    cout << "Tecnico:" << endl;
    cout << "Matricula: " << T1->getMatricula() << endl;
    cout << "Nome: " << T1->getNome() << endl;
	cout << "\n_________________________________________________\n" << endl;

    // ==========================================
    // b) Cachorro e Gato
    // ==========================================

    Cachorro *C1 = new Cachorro("Cao");
    Gato *G1 = new Gato("Gato");

    C1->setRaca("Pastor Alemão");
    G1->setRaca("Branco");

    cout << "\nExercicio B.1\n\n" << endl;

    cout << "Cachorro: " << C1->getNome() << endl;
    cout << "Raca: " << C1->getRaca() << endl;
    cout << "Late: " << C1->late() << endl;
    C1->caminha();

    cout << endl;

    cout << "Gato: " << G1->getNome() << endl;
    cout << "Raca: " << G1->getRaca() << endl;
    cout << "Mia: " << G1->mia() << endl;
    G1->caminha();

	cout << "\n_________________________________________________\n" << endl;
    // ==========================================
    // c) Rica, Pobre e Miseravel
    // ==========================================

    Rica *R1 = new Rica("Maria", 30, 50000);
    Pobre *P1 = new Pobre("Jose", 25);
    Miseravel *M1 = new Miseravel("Pedro", 40);

    cout << "\nExercicio B.2\n\n" << endl;

    cout << "Rica:" << endl;
    cout << "Nome: " << R1->getNome() << endl;
    cout << "Idade: " << R1->getIdade() << endl;
    R1->fazCompras();

    cout << endl;

    cout << "Pobre:" << endl;
    cout << "Nome: " << P1->getNome() << endl;
    cout << "Idade: " << P1->getIdade() << endl;
    P1->trabalha();

    cout << endl;

    cout << "Miseravel:" << endl;
    cout << "Nome: " << M1->getNome() << endl;
    cout << "Idade: " << M1->getIdade() << endl;
    M1->mendiga();
    
	cout << "\n_________________________________________________\n" << endl;

    // ==========================================
    // d) Ingresso
    // ==========================================

    int tipoIngresso;

    cout << "\nExercicio C\n\n" << endl;

    cout << "Digite 1 para ingresso Normal ou 2 para VIP: ";
    cin >> tipoIngresso;

    if(tipoIngresso == 1){

        Normal *N1 = new Normal(50);

        cout << "Ingresso do tipo Normal." << endl;
        N1->imprimeIngressoNormal();
        N1->imprimeValor();

    }
    else if(tipoIngresso == 2){

        int tipoCamarote;

        cout << "Ingresso do tipo VIP." << endl;

        cout << "Digite 1 para Camarote Superior ou 2 para Camarote Inferior: ";
        cin >> tipoCamarote;

        if(tipoCamarote == 1){

            CamaroteSuperior *CS1 =
                new CamaroteSuperior(50, 30, 50);

            cout << "VIP Camarote Superior." << endl;
            cout << "Valor do ingresso: R$ "
                 << CS1->getValorCamaroteSuperior() << endl;

        }
        else if(tipoCamarote == 2){

            CamaroteInferior *CI1 =
                new CamaroteInferior(50, 30, "Setor A");

            cout << "VIP Camarote Inferior." << endl;
            CI1->imprimeLocalizacao();

            cout << "Valor do ingresso: R$ "
                 << CI1->getValorVIP() << endl;

        }
    }
		cout << "\n_________________________________________________\n" << endl;

    // ==========================================
    // e) Imovel
    // ==========================================

    int tipoImovel;

    cout << "\nExercicio D\n\n" << endl;

    cout << "Digite 1 para Imovel Novo ou 2 para Imovel Velho: ";
    cin >> tipoImovel;

    if(tipoImovel == 1){

        Novo *N2 = new Novo(
            "Rua A, 100",
            200000,
            30000
        );

        cout << "Imovel Novo." << endl;
        cout << "Endereco: " << N2->getEndereco() << endl;

        double valorFinal =
            N2->getPreco() + N2->getAdicional();

        cout << "Valor final: R$ "
             << valorFinal << endl;

    }
    else if(tipoImovel == 2){

        Velho *V1 = new Velho(
            "Rua B, 200",
            200000,
            40000
        );

        cout << "Imovel Velho." << endl;
        cout << "Endereco: " << V1->getEndereco() << endl;

        double valorFinal =
            V1->getPreco() - V1->getDesconto();

        cout << "Valor final: R$ "
             << valorFinal << endl;
    }
		cout << "\n_________________________________________________\n" << endl;

    return 0;
}