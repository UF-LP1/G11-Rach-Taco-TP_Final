#include "cPiezaOrt.h"
int cPiezaOrt::stock = 0;
cPiezaOrt::cPiezaOrt(string dim, Material* tipo, tren train, tm fecha, cFabricante* fab,const string series):numdeserie(series)
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

bool cPiezaOrt::operator==(cPiezaOrt* aux) {
	bool eslamisma = false;

	if (this->Dimensiones == aux->Dimensiones && this->Fabricante == aux->Fabricante && this->FechaFab.tm_mday == aux->FechaFab.tm_mday &&
		this->FechaFab.tm_mon == aux->FechaFab.tm_mon && this->FechaFab.tm_year == aux->FechaFab.tm_year && this->numdeserie == aux->numdeserie &&
		this->TipodeMaterial == aux->TipodeMaterial && this->Tren == aux->Tren) {
		eslamisma = true;
	}


		return eslamisma;
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

Material* cPiezaOrt::get_tipo()
{
	
	return this->TipodeMaterial;
}

int cPiezaOrt::get_tipoennum() {
	Material* aux = this->get_tipo();
	int i = (int)aux;
	return i;
}

void cPiezaOrt::set_tipo(Material* tipo)
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



//{
//	string resul = this->Dimensiones + " " + to_string(this->TipodeMaterial) + " " + to_string(this->Tren) + " " + to_string(this->FechaFab.tm_mday) + "/" + to_string(this->FechaFab.tm_mon) + "/" + to_string(this->FechaFab.tm_year) + " " + to_string(this->stock)+" "+this->numdeserie;
//	return resul;
//}
//
void cPiezaOrt::imprimir(){}
//{
//	cout << this->tostring();
//}
