#pragma once
#include"Object.h"
#include<string>
using namespace std;
class String : public Object {


private:
	string dato;

public:
	String();
	String(string);
	~String();
	string getDato();
	void Imprimir();
	void setDato(string);
	void imprimir();
	Tipo getTipo();
};
