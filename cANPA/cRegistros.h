#pragma once
#ifndef _CREGISTROS_H
#define _CREGISTROS_H
#include <string>
#include "cPiezaOrt.h"
#include "cHospital.h"


using namespace std;

class cRegistros
{
public:
	cRegistros(vector<cHospital> hos, vector<cMedico> med, vector<cPiezaOrt> pie, vector<cPaciente> pac, tm fechasol, tm fechaentreg, tm fechaest);

	void buscarPaciente(cPaciente);
	string imprimirPaciente(cPaciente);
	string imprimirProtesis(cPaciente);

	vector <cHospital> get_hospi();
	vector <cMedico > get_med();
	vector <cPiezaOrt> get_peiza();
	vector <cPaciente> get_pac();
	tm get_fechasoli();
	void set_fechasoli(tm fe);
	tm get_fechaentrega();
	void set_fechaentrega(tm fe);
	tm get_fechaestimada();
	void set_fechaestimada(tm fe);


	~cRegistros();



private:
	vector<cHospital> hospital;
	vector<cMedico> medico;
	vector<cPiezaOrt> piezaort;
	vector<cPaciente> paciente;
	tm FechaDeSolicitud;
	tm FechaEntrega;
	tm FechaEstimadaEntrega;
		

};

#endif
