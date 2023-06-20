#pragma once
#ifndef _CPIEZAORT_H
#define _CPIEZAORT_H
#include <iostream>
#include <string>
#include <ctime>

#include "Material.h"

#include "cFabricante.h"
using namespace std;

enum tren{Superior,inferior};

class cPiezaOrt
{
public:

	cPiezaOrt(string dim, Material* tipo,tren train,tm fecha,cFabricante* fab,const string series);

	string get_dimensiones();
	void set_dimensiones(string dim);
	Material* get_tipo();
	void set_tipo(Material* tipo);
	tren get_tren();
	void set_tren(tren train);
	tm get_fecha();
	void set_fecha(tm fecha);
	cFabricante* get_fab();
	virtual string tostring()=0;
	virtual void imprimir();

	static int get_stock();

	bool operator==(cPiezaOrt* aux);
		
	int get_tipoennum();
	const string get_num();
	
	~cPiezaOrt();

	static int stock;
private:
	string Dimensiones;
	Material* TipodeMaterial; 
	tren Tren;
	tm FechaFab;
	cFabricante* Fabricante;
	const string numdeserie;
	

};

#endif
