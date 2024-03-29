#pragma once
#ifndef _CNOQUIRURGICA_H 
#define _CNOQUIRURGICA_H 
#include "cPiezaOrt.h"
#include "cPaciente.h"

class cNoQuirurgica : public cPiezaOrt
{
public:
	cNoQuirurgica(string dim, Material* tipo, tren train, tm fecha, cFabricante* fab,const string series,unsigned int radius);

	void ajusta_dim(unsigned int radio);

	~cNoQuirurgica();
	string tostring();
	void imprimir();
	unsigned int get_radio();

private:

	unsigned int radio;


};
#endif
