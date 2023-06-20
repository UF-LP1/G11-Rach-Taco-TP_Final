#pragma once
#ifndef _CQUIRURGICA_H 
#define _CQUIRURGICA_H 

#include "cPiezaOrt.h"




class cQuirurgica: public cPiezaOrt
{
public:

	cQuirurgica(string dim, Material* tipo, tren train, tm fecha, cFabricante* fab,const string series);

	
	string tostring();
	void imprimir();
	~cQuirurgica();



};

#endif

