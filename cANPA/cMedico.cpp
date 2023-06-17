#include "cMedico.h"

cMedico::cMedico(string name, string ape, string matri):Matricula(matri)
{
	this->Nombre = name;
	this->Apellido = ape;


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


const string cMedico::get_matricula()
{
	return this->Matricula;
}




string cMedico::tostring()
{
	string resul = this->Nombre + " " + this->Apellido + " " + this->Matricula;


	return resul;
}

void cMedico::imprimir()
{
	cout << this->tostring();
}

cMedico::~cMedico()
{

}
