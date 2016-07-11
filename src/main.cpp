//============================================================================
// Name        : Arboles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arbol.h"
using namespace std;
using namespace itla;


int main()
{
	Nodo* raiz = new Nodo("Presidente");
	Nodo* vp1 = new Nodo("VP1");
	Nodo* vp2 = new Nodo("VP2");
	Nodo* vp3 = new Nodo("VP3");
	Nodo* d1 = new Nodo("D1");
	Nodo* d2 = new Nodo("D2");
	Nodo* d3 = new Nodo("D3");
	Nodo* g1 = new Nodo("G1");
	Nodo* s1 = new Nodo("S1");
	Nodo* o1 = new Nodo("O1");
	Nodo* o2 = new Nodo("O2");
	raiz -> agregarHijo(vp1);
	raiz -> agregarHijo(vp2);
	raiz -> agregarHijo(vp3);
	vp1-> agregarHijo(d1);
	vp2-> agregarHijo(d2);
	vp3-> agregarHijo(d3);
	d1-> agregarHijo(g1);
	g1-> agregarHijo(s1);
	s1-> agregarHijo(o1);
	s1-> agregarHijo(o2);
	Arbol* arbol = new Arbol(raiz);
	arbol -> recorrer();


	return 0;
}
