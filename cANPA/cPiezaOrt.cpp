#include "cPiezaOrt.h"

cPiezaOrt::cPiezaOrt(string dim, string tipo, string train, time_t fecha, cFabricante fab)
{
	this->Dimensiones = dim;
	this->TipodeMaterial = tipo;
	this->Tren = train;

}

cPiezaOrt::~cPiezaOrt()
{
}
