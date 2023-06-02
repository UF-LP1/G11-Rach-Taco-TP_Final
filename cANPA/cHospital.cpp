#include "cHospital.h"

cHospital::cHospital(string name, string dire, vector<cMedico> medicos, vector<cPaciente> pacientes, string especialidad)//no estoy seguro como hacer con vector
{
	this->Nombre = name;
	this->Direccion = dire;
	this->Especialidad = especialidad;

}

cHospital::~cHospital()
{

}
