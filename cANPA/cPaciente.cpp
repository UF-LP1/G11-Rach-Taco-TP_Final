#include "cPaciente.h"

cPaciente::cPaciente(string nom, string ape, tm fechanac, string doc, string tel,string hos, Material* aux, unsigned int radamp, cPiezaOrt* pieznec,bool prot)
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
	this->ProtesisNecesaria = pieznec;
}

Material* cPaciente::get_alergias()
{
	return this->Alergias;
}

void cPaciente::set_alergias(Material* aux)
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

string cPaciente::get_hospital()
{
	return this->hospital;
}

void cPaciente::set_hospital(string aux) {
	this->hospital = aux;
}

bool cPaciente::operator==(cPiezaOrt* aux) {
	bool eslamisma = false;

	if (this->ProtesisNecesaria->get_dimensiones() == aux->get_dimensiones() && this->ProtesisNecesaria->get_fab() == aux->get_fab()
		&& this->ProtesisNecesaria->get_fecha().tm_mday == aux->get_fecha().tm_mday && this->ProtesisNecesaria->get_fecha().tm_mon == aux->get_fecha().tm_mon &&
		this->ProtesisNecesaria->get_fecha().tm_year == aux->get_fecha().tm_year && this->ProtesisNecesaria->get_num() == aux->get_num() &&
		this->ProtesisNecesaria->get_tipo() == aux->get_tipo() && this->ProtesisNecesaria->get_tren() == aux->get_tren()) {
		eslamisma = true;
	}


	return eslamisma;
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
int cPaciente::get_alergiasennum() {
	Material* aux = this->get_alergias();
	int i = (int)aux;
	return i;
}

string cPaciente::tostring()
{
	string resul = this->Nombre + " " + this->Apellido + " " + to_string(this->FechaNacimiento.tm_mday) + "/" + to_string(this->FechaNacimiento.tm_mon) + "/" + to_string(this->FechaNacimiento.tm_year) + " " + this->Documento + " " + this->Telefono + " " + to_string(this->get_alergiasennum()) + " " + to_string(this->RadioAmp) + " " + to_string(this->protesis)+" "+this->hospital;

	return resul;
}

void cPaciente::imprimir()
{
	cout << this->tostring();
}

cPaciente::~cPaciente()
{
}

istream& operator>>(istream& in, cPaciente& aux)
{
	
	in >> aux.Nombre;
		in >> aux.Apellido;
		in >> aux.Documento;
		in >> aux.FechaNacimiento.tm_mday;
		in >> aux.FechaNacimiento.tm_mon;
		in >> aux.FechaNacimiento.tm_year;
		
		in >> aux.hospital;

		return in;
}
