/*
 * Nodo.cpp
 *
 *  Created on: Jul 11, 2016
 *      Author: raydelto
 */

#include "Nodo.h"

namespace itla {

Nodo::Nodo(std::string nombre) : _primerHijo(NULL), _ultimoHijo(NULL),_siguiente(NULL), _nombre(nombre), _profundidad(0)
{
}

Nodo::~Nodo()
{
}

void Nodo::agregarHijo(Nodo* hijo)
{
	hijo -> _profundidad = _profundidad + 1;
	if(!_primerHijo) //Si la lista está vacía
	{
		_primerHijo = hijo;
		_ultimoHijo = hijo;
	}else //Si la lista no está vacía
	{
		_ultimoHijo -> _siguiente = hijo;
		_ultimoHijo = hijo;
	}
}

} /* namespace itla */
