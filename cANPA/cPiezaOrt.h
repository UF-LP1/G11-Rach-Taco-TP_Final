#pragma once
#ifndef _CPIEZAORT_H
#define _CPIEZAORT_H
#include <iostream>
#include <string>
#include <ctime>
#include"cFabricante.h"


using namespace std;
enum tipomat { Titanio=1, Acero, Polimero, Plastico };
enum tren{Superior,inferior};

class cPiezaOrt
{
public:

	cPiezaOrt(string dim, tipomat tipo,tren train,tm fecha,cFabricante* fab,const string series);

	string get_dimensiones();
	void set_dimensiones(string dim);
	tipomat get_tipo();
	void set_tipo(tipomat tipo);
	tren get_tren();
	void set_tren(tren train);
	tm get_fecha();
	void set_fecha(tm fecha);
	cFabricante* get_fab();
	virtual string tostring();
	virtual void imprimir();

	static int get_stock();

	bool operator==(cPiezaOrt* aux);
		

	const string get_num();
	
	~cPiezaOrt();
private:
	string Dimensiones;
	tipomat TipodeMaterial; 
	tren Tren;
	tm FechaFab;
	cFabricante* Fabricante;
	const string numdeserie;
	static int stock;

};

#endif
