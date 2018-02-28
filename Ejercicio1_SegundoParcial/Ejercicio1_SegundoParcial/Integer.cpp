#include"Integer.h"
#include <iostream>
using namespace std;

#include "Integer.h"



Integer::Integer() :dato(1) {

}

Integer::Integer(int n) {
	this->dato = n;
}

void Integer::setDato(int Dato) {
	this->dato = Dato;
}

int Integer::getDato() {
	return this->dato;
}

void Integer::Imprimir() {
	cout << "Object: Integer{ " << getDato() << "}" << endl;
}

Tipo Integer::getTipo() {
	return T_Integer;
}