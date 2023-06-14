#pragma once
#ifndef _CQUIRURGICA_H 
#define _CQUIRURGICA_H 

#include "cPaciente.h"




class cQuirurgica: public cPiezaOrt
{
public:

	cQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab);

	bool chequearAlergia(cPaciente);
	string to_string();
	void imprimir();
	~cQuirurgica();



};

#endif

