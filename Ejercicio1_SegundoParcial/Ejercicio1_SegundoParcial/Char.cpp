#include "Char.h"
#include<iostream>

Char::Char() :valor(' ') {

}

Char::Char(char x) {
	setValor(x);
}

void Char::setValor(char valor) {
	this->valor = valor;
}

char Char::getValor() {
	return valor;
}

void Char::Imprimir() {
	cout << "Object: Char{ " << valor <<"}"<< endl;
}

Tipo Char::getTipo() {
	return T_Char;
}