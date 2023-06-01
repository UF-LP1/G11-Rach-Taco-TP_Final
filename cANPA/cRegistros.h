#pragma once
#ifndef _CREGISTROS_H
#define _CREGISTROS_H
#include <string>
#include "cPiezaOrt.h"

using namespace std;

class cRegistros
{
public: 
	cRegistros(vector<cHospital> hos, vector<cMedico> med, vector<cPiezaOrt> pie, vector<cPaciente> pac,time_t fechasol, time_t fechaentreg, time_t fechaest );

	void buscarPaciente(cPaciente);
	string imprimirPaciente(cPaciente);
	string imprimirProtesis(cPaciente);

	~cRegistros();



private:
	vector<cHospital> hospital;
	vector<cMedico> medico;
	vector<cPiezaOrt> piezaort;
	vector<cPaciente> paciente;
	time_t FechaDeSolicitud;
	time_t FechaEntrega;
	time_t FechaEstimadaEntrega;
		

};

#endif
