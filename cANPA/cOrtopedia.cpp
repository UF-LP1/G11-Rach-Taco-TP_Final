#include "cOrtopedia.h"

cOrtopedia::cOrtopedia(string nom, string dir, vector<cPiezaOrt> piezort, int stock, string espe, vector<cHospital> conv)
{
	this->Nombre = nom;
	this->Direccion = dir;
	this->stock = stock;
	this->especializacion = espe;
}

cOrtopedia::~cOrtopedia()
{
}
