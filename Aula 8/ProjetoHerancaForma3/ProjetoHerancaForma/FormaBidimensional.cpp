#pragma once
#include <string>
#include "FormaBidimensional.h"

using namespace std;

FormaBidimensional::FormaBidimensional(int _id, string _nome) : Forma(_id) {
	nome = _nome;
}
