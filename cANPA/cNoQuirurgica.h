#pragma once
#ifndef _CNOQUIRURGICA_H 
#define _CNOQUIRURGICA_H 
#include "cPiezaOrt.h"
#include "cPaciente.h"

class cNoQuirurgica : public cPiezaOrt
{
public:
	cNoQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab,unsigned int radius);

	void ajusta_dim(cPaciente);

	~cNoQuirurgica();
	string to_string();
	void imprimir();

private:

	unsigned int radio;


};
#endif
