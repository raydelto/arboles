/*
 * Arbol.cpp
 *
 *  Created on: Jul 11, 2016
 *      Author: raydelto
 */

#include "Arbol.h"
#include <iostream>

using namespace std;

namespace itla {


Arbol::Arbol(Nodo* raiz): _raiz(raiz)
{
}

Arbol::~Arbol()
{

}

void Arbol::recorrer(Nodo* nodo)
{
	for(int i = 0 ; i < nodo -> getProfundidad() ; i++)
	{
		cout << "\t";
	}
	cout << nodo -> getNombre() << endl;
	Nodo* i = nodo -> getPrimerHijo();
	while(i)
	{
		recorrer(i);
		i = i -> getSiguiente();
	}
}

void Arbol::recorrer()
{
	recorrer(_raiz);
}

} /* namespace itla */
