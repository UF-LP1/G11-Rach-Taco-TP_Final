#pragma once
#ifndef _CFABRICANTE_H
#define _CFABRICANTE_H
#include <string>

#include <iostream>
using namespace std;
class cPiezaOrt;
class cFabricante
{
public:

	cFabricante(string name, string ape, unsigned int num);

	

	string get_nombre();
	void set_nombre(string nom);
	string get_apellido();
	void set_apellido(string ape);
	unsigned int get_numerodehab();
	void set_numerodehab(unsigned int num);

	int respuesta();
	string tostring();
	void imprimir();

	friend class cPiezaOrt;

	~cFabricante();
private:
	string Nombre;
	string Apellido;
	unsigned int NumerodeHab;

};
#endif
