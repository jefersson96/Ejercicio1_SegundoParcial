
#include <iostream>
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include "object.h"
using namespace std;

int main() {
	Object *Objeto[100];
	Objeto[0] = new String("Hola");

	Objeto[1] = new Integer(10);
	Objeto[2] = new Char('C');
	for (int x = 0; x < 3;x++) {
	
		Objeto[x]->Imprimir();
	
	}/*
	string datoSt;
	int datoInt;
	char datoChar;
	int opcion = 0;
	do {

		cout << "**Menu**\n1-Agregar String\n2-Agregar Integer\3-Agregar Char\n4-salir"<<endl;
		cout << "ingresar una opcion"<<endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:

			break;
		
		
		
		}
	
	
	} while (opcion != 4);*/

	system("pause");

}


