#pragma once
#ifndef _CFABRICANTE_H
#define _CFABRICANTE_H
#include <string>
#include "cPiezaOrt.h"

class cFabricante
{
public:

	cFabricante(string name, string ape, unsigned int num);
	void recibirsolicitud();
	void rechazarsolicitud();
	void fabricarprotesis(cPiezaOrt);

	string get_nombre();
	void set_nombre(string nom);
	string get_apellido();
	void set_apellido(string ape);
	unsigned int get_numerodehab();
	void set_numerodehab(unsigned int num);

	~cFabricante();
private:
	string Nombre;
	string Apellido;
	unsigned int NumerodeHab;

};
#endif
