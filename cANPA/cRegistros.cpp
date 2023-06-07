#include "cRegistros.h"

cRegistros::cRegistros(cHospital* hos,cMedico* med, cPiezaOrt* pie, cPaciente* pac, tm fechasol, tm fechaentreg, tm fechaest)
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

cHospital* cRegistros::get_hospi()
{
	return this->hospital;
}

cMedico* cRegistros::get_med()
{
	return this->medico;
}

cPiezaOrt* cRegistros::get_peiza()
{
	return this->piezaort;
}

cPaciente* cRegistros::get_pac()
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
