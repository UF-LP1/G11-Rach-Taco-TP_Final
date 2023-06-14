#include "cFabricante.h"

cFabricante::cFabricante(string name, string ape, unsigned int num)
{
	this->Nombre = name;
	this->Apellido = ape;
	this->NumerodeHab = num;

}

void cFabricante::recibirsolicitud()
{


}

void cFabricante::rechazarsolicitud()
{


}

void cFabricante::fabricarprotesis(cPiezaOrt)
{


}

string cFabricante::get_nombre()
{
	return this->Nombre;
}

void cFabricante::set_nombre(string nom)
{
	this->Nombre = nom;
}

string cFabricante::get_apellido()
{
	return this->Apellido;
}

void cFabricante::set_apellido(string ape)
{
	this->Apellido = ape;
}

unsigned int cFabricante::get_numerodehab()
{
	return this->NumerodeHab;
}

void cFabricante::set_numerodehab(unsigned int num)
{
	this->NumerodeHab = num;
}

string cFabricante::tostring()
{

	string resul = this->Nombre+""+this->Apellido+""+to_string(this->NumerodeHab);
	return resul;
}

void cFabricante::imprimir()
{
}

cFabricante::~cFabricante()
{

}
