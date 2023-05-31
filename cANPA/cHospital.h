#pragma once
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H

#include <vector>
#include <string>
using namespace std;
class cHospital
{
public:


	cHospital(string name, string dire, vector <cMedico> medicos, vector <cPaciente> pacientes, string especialidad);


private:
	string Nombre;
	string Direccion;
	vector <cMedico> Medicos;
	vector <cPaciente> Pacientes;
	string Especialidad; //capaz enum

};
#endif
