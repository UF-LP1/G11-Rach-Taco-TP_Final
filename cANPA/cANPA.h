#pragma once
#ifndef _CANPA_H
#define _CANPA_H

#include <vector>
#include "cRegistros.h"
#include "cOrtopedia.h"
using namespace std;
class cANPA
{
public:
	cANPA(vector<cRegistros*> reg, vector <cOrtopedia*> ortopedia);
	bool chequeoalergias(cPaciente*);
	bool busquedapieza(cPiezaOrt*);
	void mandar_sol();
	friend ostream& operator<<(ostream& out, const cANPA& Aux);
	vector<cRegistros*> get_registros();

	vector<cOrtopedia*> get_ort();

	vector<cPaciente*> buscarpacporpieza(cPiezaOrt* aux);
	vector<cPaciente*> buscarpacporhosp(cHospital* aux);

	

	~cANPA();
private:

	vector <cRegistros*> registros;
	
	vector<cOrtopedia*> Ortopedias;

};

#endif
