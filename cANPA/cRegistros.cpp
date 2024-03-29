#include "cRegistros.h"

cRegistros::cRegistros(cHospital* hos,cMedico* med, cPiezaOrt* pie, cPaciente* pac, tm fechasol, tm fechaentreg, tm fechaest)
{
	this->hospital = hos;
	this->medico = med;
	this->piezaort = pie;
	this->paciente = pac;
	this->FechaDeSolicitud = fechasol;
	this->FechaEntrega = fechaentreg;
	this->FechaEstimadaEntrega = fechaest;
}



cHospital* cRegistros::get_hospi()
{
	return this->hospital;
}

cMedico* cRegistros::get_med()
{
	return this->medico;
}

cPiezaOrt* cRegistros::get_pieza()
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

string cRegistros::tostring()
{
	string resul = to_string(this->FechaDeSolicitud.tm_mday) + "/" + to_string(this->FechaDeSolicitud.tm_mon) + "/" + to_string(this->FechaDeSolicitud.tm_year) +
		" " + to_string(this->FechaEntrega.tm_mday) + "/" + to_string(this->FechaEntrega.tm_mon) + "/" + to_string(this->FechaEntrega.tm_year) + 
		" " + to_string(this->FechaEstimadaEntrega.tm_mday) + "/" + to_string(this->FechaEstimadaEntrega.tm_mon) + "/" + to_string(this->FechaEstimadaEntrega.tm_year);
	return resul;
}

void cRegistros::imprimir()
{
	cout << this->tostring();

}

cRegistros::~cRegistros()
{
}
