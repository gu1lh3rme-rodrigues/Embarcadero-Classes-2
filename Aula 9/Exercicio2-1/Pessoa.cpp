#include "Pessoa.h"

Pessoa::Pessoa(){
	nome = "";
	idade = 0;
}

Pessoa::Pessoa(string _nome, int _idade){
	nome = _nome;
	idade = _idade;
}

string Pessoa::getNome(){
	return nome;
}

int Pessoa::getIdade(){
	return idade;
}

void Pessoa::setNome(string _nome){
	nome = _nome;
}

void Pessoa::setIdade(int _idade){
	idade = _idade;
}