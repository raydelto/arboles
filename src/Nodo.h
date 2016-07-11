/*
 * Nodo.h
 *
 *  Created on: Jul 11, 2016
 *      Author: raydelto
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>

namespace itla {

class Nodo
{
public:
	Nodo(std::string nombre);
	virtual ~Nodo();
	void agregarHijo(Nodo* hijo);
	Nodo* getPrimerHijo()	 { return _primerHijo;	}
	Nodo* getSiguiente() 	 { return _siguiente;  	}
	std::string getNombre()  { return _nombre; 		}
	int getProfundidad()  	 { return _profundidad;	}

private:
	std::string _nombre;
	Nodo* _primerHijo;
	Nodo* _ultimoHijo;
	Nodo* _siguiente;
	int _profundidad;
};

} /* namespace itla */

#endif /* NODO_H_ */
