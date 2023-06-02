#pragma once
#ifndef _CMEDICO_H
#define _CMEDICO_H

#include <string>
#include "cHospital.h"
#include <vector> 
using namespace std;
class cMedico
{
public:
	cMedico(string name,string ape, string matri, vector <cHospital> hospitales);

	void entregarsolicitud();
	void solicitarprotesis();

	~cMedico();






private:
	string Nombre;
	string Apellido;
	string Matricula;
	vector <cHospital> Hospitales;
};

#endif
