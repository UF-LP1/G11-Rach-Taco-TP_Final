#include "cPiezaOrt.h"
static int stock = 0;
cPiezaOrt::cPiezaOrt(string dim, tipomat tipo, tren train, tm fecha, cFabricante* fab,const string series):numdeserie(series)
{
	this->Dimensiones = dim;
	this->TipodeMaterial = tipo;
	this->Tren = train;
	this->FechaFab = fecha;
	this->Fabricante = fab;
	stock++;
}

int cPiezaOrt::get_stock()
{
	return stock;
}

const string cPiezaOrt::get_num()
{
	return this->numdeserie;
}



cPiezaOrt::~cPiezaOrt()
{
	stock--;
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

tren cPiezaOrt::get_tren()
{
	return this->Tren;
}

void cPiezaOrt::set_tren(tren train)
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

cFabricante* cPiezaOrt::get_fab()
{
	return this->Fabricante;
}


string cPiezaOrt::tostring()
{
	string resul = this->Dimensiones + " " + to_string(this->TipodeMaterial) + " " + to_string(this->Tren) + " " + to_string(this->FechaFab.tm_wday) + "/" + to_string(this->FechaFab.tm_mon) + "/" + to_string(this->FechaFab.tm_year) + " " + to_string(this->stock)+" "+this->numdeserie;
	return resul;
}

void cPiezaOrt::imprimir()
{
	cout << this->tostring();
}
