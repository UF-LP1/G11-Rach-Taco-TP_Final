#include "cRegistros.h"

cRegistros::cRegistros(vector<cHospital> hos, vector<cMedico> med, vector<cPiezaOrt> pie, vector<cPaciente> pac, tm fechasol, tm fechaentreg, tm fechaest)
{
}

void cRegistros::buscarPaciente(cPaciente)
{
}

string cRegistros::imprimirPaciente(cPaciente)
{
	return string();
}

string cRegistros::imprimirProtesis(cPaciente)
{
	return string();
}

vector<cHospital> cRegistros::get_hospi()
{
	return this->hospital;
}

vector<cMedico> cRegistros::get_med()
{
	return this->medico;
}

vector<cPiezaOrt> cRegistros::get_peiza()
{
	return this->piezaort;
}

vector<cPaciente> cRegistros::get_pac()
{
	return this->paciente;
}

tm cRegistros::get_fechasoli()
{
	return this->FechaDeSolicitud;
}

void cRegistros::set_fechasoli(tm fe)
{
	this->FechaDeSolicitud = fe;
}

tm cRegistros::get_fechaentrega()
{
	return this->FechaEntrega;
}

void cRegistros::set_fechaentrega(tm fe)
{
	this->FechaEntrega = fe;
}

tm cRegistros::get_fechaestimada()
{
	return this->FechaEstimadaEntrega;
}

void cRegistros::set_fechaestimada(tm fe)
{
	this->FechaEstimadaEntrega = fe;
}

cRegistros::~cRegistros()
{
}
