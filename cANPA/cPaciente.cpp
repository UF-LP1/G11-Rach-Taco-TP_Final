#include "cPaciente.h"

cPaciente::cPaciente(string nom, string ape, tm fechanac, string doc, string tel,cHospital* hos, alergia aux, unsigned int radamp, cPiezaOrt* pieznec,bool prot)
{
	this->Nombre = nom;
	this->Apellido = ape;
	this->Documento = doc;
	this->Telefono = tel;
	this->RadioAmp = radamp;
	this->FechaNacimiento = fechanac;
	this->Alergias = aux;
	this->protesis = prot;
	this->hospital = hos;
}

alergia cPaciente::get_alergias()
{
	return this->Alergias;
}

void cPaciente::set_alergias(alergia aux)
{
	this->Alergias = aux;
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

void cPaciente::PedirListaOrtopedias(cOrtopedia*)
{
}

string cPaciente::get_nombre()
{
	return this->Nombre;
}

void cPaciente::set_nombre(string nom)
{
	this->Nombre = nom;
}

string cPaciente::get_apellido()
{
	return this->Apellido;
}

void cPaciente::set_apellido(string ape)
{
	this->Apellido = ape;
}

tm cPaciente::get_fecha()
{
	return this->FechaNacimiento;
}

void cPaciente::set_fecha(tm fech)
{
	this->FechaNacimiento = fech;

}

string cPaciente::get_documento()
{
	return this->Documento;
}

void cPaciente::set_documento(string doc)
{
	this->Documento = doc;

}

string cPaciente::get_telefono()
{
	return this->Telefono;
}

void cPaciente::set_telefono(string tele)
{
	this->Telefono = tele;
}

cHospital* cPaciente::get_hospital()
{
	return this->hospital;
}



cPiezaOrt* cPaciente::get_protesisnec()
{
	return this->ProtesisNecesaria;
}

bool cPaciente::get_protesis()
{
	return this->protesis;
}

void cPaciente::set_protesis(bool aux)
{
	this->protesis = aux;
}



string cPaciente::tostring()
{
	string resul = this->Nombre + " " + this->Apellido + " " + to_string(this->FechaNacimiento.tm_wday) + "/" + to_string(this->FechaNacimiento.tm_mon) + "/" + to_string(this->FechaNacimiento.tm_year) + " " + this->Documento + " " + this->Telefono + " " + to_string(this->Alergias) + " " + to_string(this->RadioAmp) + " " + to_string(this->protesis);

	return resul;
}

void cPaciente::imprimir()
{
	cout << this->tostring();
}

cPaciente::~cPaciente()
{
}
