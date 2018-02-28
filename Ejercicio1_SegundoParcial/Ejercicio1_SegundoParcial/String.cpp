#include"String.h"
#include <iostream>
#include"Object.h"
using namespace std;

String::String() {


}

String::String(string dato) {
	
	this->dato = dato;
}

void String::setDato(string valor) {
this->dato = valor;
}

string String::getDato() {
	return this->dato;
}

void String::Imprimir() {
	cout << "Object: String{" << this->getDato() <<"}"<< endl;
}

Tipo String::getTipo() {
	return T_String;
}