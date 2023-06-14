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
	cMedico(string name,string ape, string matri);

	void entregarsolicitud();
	void solicitarprotesis();

	string get_nombre();
	void set_nombre(string nom);
	string get_apellido();
	void set_apellido(string ape);
	string get_matricula();
	void set_matricula(string matri);
	string tostring();
	void imprimir();

	

	~cMedico();






private:
	string Nombre;
	string Apellido;
	string Matricula;
	
};

#endif
