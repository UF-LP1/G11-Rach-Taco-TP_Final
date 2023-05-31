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
	cPiezaOrt(string dim, string tipo,string train,time_t fecha,cFabricante fab);



	~cPiezaOrt();
private:
	string Dimensiones;
	string TipodeMaterial; //capaz enum
	string Tren;
	time_t FechaFab;
	cFabricante fabr;

};

#endif
