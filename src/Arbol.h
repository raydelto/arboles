/*
 * Arbol.h
 *
 *  Created on: Jul 11, 2016
 *      Author: raydelto
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

namespace itla
{

class Arbol
{
public:
	Arbol(Nodo* raiz);
	virtual ~Arbol();
	void recorrer(Nodo* nodo);
	void recorrer();
private:
	Nodo* _raiz;
};

} /* namespace itla */

#endif /* ARBOL_H_ */
