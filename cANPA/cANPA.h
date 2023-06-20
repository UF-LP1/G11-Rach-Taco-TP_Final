#pragma once
#ifndef _CANPA_H
#define _CANPA_H

#include <vector>
#include "cRegistros.h"
using namespace std;
class cANPA
{
public:
	cANPA(vector<cRegistros*> reg);
	bool chequeoalergias(cPaciente*);
	friend ostream& operator<<(ostream& out, const cANPA& Aux);
	vector<cRegistros*> get_registros();

	
	void agregarregistros(cRegistros* aux);
	cPaciente* buscarpacporpieza(string aux);
	vector<cPaciente*> buscarpacporhosp(string aux);

	

	~cANPA();
private:

	vector <cRegistros*> registros;
	


};

#endif
