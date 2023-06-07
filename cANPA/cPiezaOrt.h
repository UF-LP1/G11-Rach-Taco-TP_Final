#pragma once
#ifndef _CPIEZAORT_H
#define _CPIEZAORT_H
#include <iostream>
#include <string>
#include <ctime>
#include"cFabricante.h"


using namespace std;

class cPiezaOrt
{
public:
	cPiezaOrt(string dim, string tipo,string train,tm fecha,cFabricante* fab);

	string get_dimensiones();
	void set_dimensiones(string dim);
	string get_tipo();
	void set_tipo(string tipo);
	string get_tren();
	void set_tren(string train);
	tm get_fecha();
	void set_fecha(tm fecha);




	~cPiezaOrt();
private:
	string Dimensiones;
	string TipodeMaterial; //capaz enum
	string Tren;
	tm FechaFab;
	cFabricante* fabr;

};

#endif
