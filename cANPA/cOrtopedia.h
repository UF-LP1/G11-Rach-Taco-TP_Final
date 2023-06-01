#pragma once
#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H
#include "cHospital.h"


class cOrtopedia
{
public:
	
	cOrtopedia(string nom, string dir, vector <cPiezaOrt> piezort, static int stock, string espe, vector<cHospital> conv);

	~cOrtopedia();

private:
	string Nombre;
	string Direccion;
	vector<cPiezaOrt> PiezasOrt;
	static int stock;
	string especializacion;
	vector<cHospital> convenio;

};

#endif 