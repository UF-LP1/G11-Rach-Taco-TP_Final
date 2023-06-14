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

	typedef enum  { Titanio, Acero, Polimero,Plastico }tipomat;
	cPiezaOrt(string dim, tipomat tipo,string train,tm fecha,cFabricante* fab);

	string get_dimensiones();
	void set_dimensiones(string dim);
	tipomat get_tipo();
	void set_tipo(tipomat tipo);
	string get_tren();
	void set_tren(string train);
	tm get_fecha();
	void set_fecha(tm fecha);

	string to_string();
	void imprimir();


	~cPiezaOrt();
private:
	string Dimensiones;
	tipomat TipodeMaterial; //capaz enum
	string Tren;
	tm FechaFab;
	cFabricante* fabr;

};

#endif
