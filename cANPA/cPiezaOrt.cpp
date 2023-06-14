#include "cPiezaOrt.h"

cPiezaOrt::cPiezaOrt(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab)
{
	this->Dimensiones = dim;
	this->TipodeMaterial = tipo;
	this->Tren = train;

}

cPiezaOrt::~cPiezaOrt()
{
}

string cPiezaOrt::get_dimensiones()
{
	return this->Dimensiones;
}

void cPiezaOrt::set_dimensiones(string dim)
{
	this->Dimensiones = dim;
}

tipomat cPiezaOrt::get_tipo()
{
	return this->TipodeMaterial;
}

void cPiezaOrt::set_tipo(tipomat tipo)
{
	this->TipodeMaterial = tipo;
}

string cPiezaOrt::get_tren()
{
	return this->Tren;
}

void cPiezaOrt::set_tren(string train)
{
	this->Tren = train;
}

tm cPiezaOrt::get_fecha()
{
	return this->FechaFab;
}

void cPiezaOrt::set_fecha(tm fecha)
{
	this->FechaFab = fecha;
}

string cPiezaOrt::to_string()
{
	return string();
}

void cPiezaOrt::imprimir()
{
}
