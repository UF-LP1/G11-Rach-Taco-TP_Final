#pragma once
#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H
#include "cHospital.h"


class cOrtopedia
{
public:
	
	cOrtopedia(string nom, string dir, vector <cPiezaOrt> piezort, string espe, vector<cHospital> conv);

	string get_nombre();
	void set_nombre(string nom);
	string get_direccion();
	void set_direccion(string dire);
	vector <cPiezaOrt> get_piezas();
	static int get_stock();
	string get_especializacion();
	void set_especializacion(string espe);
	vector <cHospital> get_convenio();

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