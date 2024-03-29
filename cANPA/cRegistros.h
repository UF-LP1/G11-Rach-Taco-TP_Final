#pragma once
#ifndef _CREGISTROS_H
#define _CREGISTROS_H
#include <string>

#include "cHospital.h"
#include"cFabricante.h"
#include "cMedico.h"
#include "cPaciente.h"
#include "cNoQuirurgica.h"
#include "cQuirurgica.h"


using namespace std;

class cRegistros
{
public:
	cRegistros(cHospital* hos, cMedico* med, cPiezaOrt* pie, cPaciente* pac, tm fechasol, tm fechaentreg, tm fechaest);

	cHospital* get_hospi();
	cMedico* get_med();
	cPiezaOrt* get_pieza();
	cPaciente* get_pac();
	tm get_fechasoli();
	void set_fechasoli(tm fe);
	tm get_fechaentrega();
	void set_fechaentrega(tm fe);
	tm get_fechaestimada();
	void set_fechaestimada(tm fe);

	string tostring();
	void imprimir();
	~cRegistros();



private:
	cHospital* hospital;
	cMedico* medico;
	cPiezaOrt* piezaort;
	cPaciente* paciente;
	tm FechaDeSolicitud;
	tm FechaEntrega;
	tm FechaEstimadaEntrega;
		

};

#endif
