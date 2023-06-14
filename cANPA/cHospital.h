#pragma once
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H

#include <vector>
#include <string>
#include "cPaciente.h"
#include "cMedico.h"

using namespace std;
class cHospital
{
public:


	cHospital(string name, string dire, vector <cMedico> medicos, vector <cPaciente> pacientes, string especialidad);
	string get_nombre();
	void set_nombre(string nom);
	string get_direccion();
	void set_direccion(string dire);
	vector <cMedico> get_medicos();
	vector <cPaciente> get_pacientes();
	string get_especialidad();
	void set_especialidad(string espe);
	friend ostream& operator<<(ostream& out, const cHospital aux);
	string to_string();
	void imprimir();
	
	
	~cHospital();


private:
	string Nombre;
	string Direccion;
	vector <cMedico> Medicos;
	vector <cPaciente> Pacientes;
	string Especialidad; //capaz enum

};
#endif
