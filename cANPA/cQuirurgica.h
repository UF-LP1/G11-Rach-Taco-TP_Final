#pragma once
#ifndef _CQUIRURGICA_H 
#define _CQUIRURGICA_H 

#include "cPaciente.h"




class cQuirurgica: public cPiezaOrt
{
public:

	cQuirurgica(string dim, tipomat tipo, tren train, tm fecha, cFabricante* fab,const string series);

	bool chequearAlergia(cPaciente* aux);
	string tostring();
	void imprimir();
	~cQuirurgica();



};

#endif

