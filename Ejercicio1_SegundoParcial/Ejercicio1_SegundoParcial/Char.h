#pragma once
#include "object.h"
using namespace std;

#ifndef CHAR_H
#define CHAR_H

class Char :public Object {



public:

	Char();
	Char(char);


	void setValor(char valor);
	char getValor();

	void Imprimir();
	Tipo getTipo();



private:
	char valor;
};



#endif // !CHAR_H

