#pragma once
#pragma once
#include "object.h"
using namespace std;

#ifndef INTEGER_H
#define INTEGER_H

class Integer : public Object {




public:
	Integer();
	Integer(int);

	void setDato(int dato);

	int getDato();
	void Imprimir();
	Tipo getTipo();

private:
	int dato;

};




#endif // !INTEGER_H