#include "cPaciente.h"

cPaciente::cPaciente(string nom, string ape, time_t fechanac, unsigned int doc, string tel, vector<cHospital> hos, aler, unsigned int radamp, vector<cPiezaOrt> pieznec)
{
	this->Nombre = nom;
	this->Apellido = ape;
	this->Documento = doc;
	this->Telefono = tel;
	this->RadioAmp = radamp;
}

unsigned int cPaciente::get_RadioAmp()
{
	return this->RadioAmp;
}

void cPaciente::set_RadioAmp(unsigned int rad)
{
	this->RadioAmp = rad;
}

void cPaciente::ir_ortopedia()
{
}

void cPaciente::PedirListaOrtopedias(cOrtopedia)
{
}

cPaciente::~cPaciente()
{
}
