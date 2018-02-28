#pragma once
#ifndef OBJECT_H

#define OBJECT_H
enum Tipo {T_Char,T_String,T_Integer};
class Object {

public:

	virtual Tipo getTipo() = 0;
	virtual void Imprimir() = 0;



};




#endif // !OBJECT_H

