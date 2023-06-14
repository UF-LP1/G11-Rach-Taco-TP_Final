#include "cOrtopedia.h"
int stock = 0;
cOrtopedia::cOrtopedia(string nom, string dir, vector<cPiezaOrt> piezort, string espe, vector<cHospital> conv)
{
	this->Nombre = nom;
	this->Direccion = dir;
	this->stock = stock;
	this->especializacion = espe;
	stock++;
}

string cOrtopedia::get_nombre()
{
	return this->Nombre;
}

void cOrtopedia::set_nombre(string nom)
{
	this->Nombre = nom;

}

string cOrtopedia::get_direccion()
{
	return this->Direccion;
}

void cOrtopedia::set_direccion(string dire)
{

	this->Direccion = dire;

}

vector<cPiezaOrt> cOrtopedia::get_piezas()
{
	return this->PiezasOrt;
}

int cOrtopedia::get_stock()
{
	return stock;
}

string cOrtopedia::get_especializacion()
{
	return this->especializacion;
}

void cOrtopedia::set_especializacion(string espe)
{
	this->especializacion = espe;

}

vector<cHospital> cOrtopedia::get_convenio()
{
	return this->convenio;
}

cOrtopedia::~cOrtopedia()
{

	stock--;
}

ostream& operator<<(ostream& out, const cOrtopedia& ort)
{
int	i = 0;
vector<cPiezaOrt> aux = ort.PiezasOrt;
for (i = 0; i < aux.size(); i++) {

	out << aux[i].get_dimensiones() << endl;
	out << aux[i].get_fecha().tm_year << aux[i].get_fecha().tm_mon<< aux[i].get_fecha().tm_wday<<endl;
	out << aux[i].get_tipo() << endl;
	out << aux[i].get_tren() << endl;
}

	return out;
}