#pragma once
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H

#include <vector>
#include <string>
#include "cPaciente.h"
#include "cMedico.h"

using namespace std;
enum espe { Cardiologo, Neurologo, Traumatologo, Pediatra };
class cHospital
{
public:

	

	cHospital(string name, string dire, vector <cMedico> medicos, vector <cPaciente> pacientes, espe especialidad);
	string get_nombre();
	void set_nombre(string nom);
	string get_direccion();
	void set_direccion(string dire);
	vector <cMedico> get_medicos();
	vector <cPaciente> get_pacientes();
	espe get_especialidad();
	void set_especialidad( espe aux);
	friend ostream& operator<<(ostream& out, const cHospital& aux);
	string tostring();
	void imprimir();
	
	
	~cHospital();


private:
	string Nombre;
	string Direccion;
	vector <cMedico> Medicos;
	vector <cPaciente> Pacientes;
	espe Especialidad;

};
#endif
