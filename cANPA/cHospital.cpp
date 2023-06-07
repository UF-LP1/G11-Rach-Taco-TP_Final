#include "cHospital.h"

cHospital::cHospital(string name, string dire, vector<cMedico> medicos, vector<cPaciente> pacientes, string especialidad)//no estoy seguro como hacer con vector
{
	this->Nombre = name;
	this->Direccion = dire;
	this->Especialidad = especialidad;

}

string cHospital::get_nombre()
{
	return this->Nombre;
}

void cHospital::set_nombre(string nom)
{
	this->Nombre = nom;
}

string cHospital::get_direccion()
{
	return this->Direccion;
}

void cHospital::set_direccion(string dire)
{
	this->Direccion = dire;
}

vector<cMedico> cHospital::get_medicos()
{
	return this->Medicos;
}

vector<cPaciente> cHospital::get_pacientes()
{
	return this->Pacientes;
}

string cHospital::get_especialidad()
{
	return this->Especialidad;
}

void cHospital::set_especialidad(string espe)
{
	this->Especialidad = espe;
}

cHospital::~cHospital()
{

}
