#include "cMedico.h"

cMedico::cMedico(string name, string ape, string matri, vector<cHospital> hospitales)
{
	this->Nombre = name;
	this->Apellido = ape;
	this->Matricula = matri;

}

void cMedico::entregarsolicitud()
{

}

void cMedico::solicitarprotesis()
{

}

string cMedico::get_nombre()
{
	return this->Nombre;
}

void cMedico::set_nombre(string nom)
{
	this->Nombre = nom;
}

string cMedico::get_apellido()
{
	return this->Apellido;
}

void cMedico::set_apellido(string ape)
{
	this->Apellido = ape;
}


string cMedico::get_matricula()
{
	return this->Matricula;
}

void cMedico::set_matricula(string matri)
{
	this->Matricula = matri;
}

vector<cHospital> cMedico::get_hospital()
{
	return this->Hospitales;
}

string cMedico::to_string()
{
	return string();
}

void cMedico::imprimir()
{
}

cMedico::~cMedico()
{

}
