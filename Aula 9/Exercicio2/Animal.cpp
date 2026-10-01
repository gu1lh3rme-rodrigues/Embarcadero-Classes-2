#include "Animal.h"

Animal::Animal(){
	nome = "";
	raca = "";
}

Animal::Animal(string _nome){
	nome = _nome;
	raca = "";
}

string Animal::getNome(){
	return nome;
}

string Animal::getRaca(){
	return raca;
}

void Animal::setRaca(string _raca){
	raca = _raca;
}

string Animal::caminha(){
	return "O animal caminha";
}