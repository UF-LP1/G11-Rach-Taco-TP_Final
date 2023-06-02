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


	~cFabricante();
private:
	string Nombre;
	string Apellido;
	unsigned int NumerodeHab;

};
#endif
