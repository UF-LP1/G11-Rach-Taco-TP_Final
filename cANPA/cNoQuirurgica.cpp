#include "cNoQuirurgica.h"

cNoQuirurgica::cNoQuirurgica(string dim, Material* tipo, tren train, tm fecha, cFabricante* fab,const string series,unsigned int radius):cPiezaOrt(dim, tipo, train, fecha, fab,series)
{
	this->radio = radius;

}

void cNoQuirurgica::ajusta_dim(unsigned int radio)
{
	this->radio = radio;


}
unsigned int cNoQuirurgica:: get_radio() {

	return this->get_radio();


}

cNoQuirurgica::~cNoQuirurgica()
{
}

string cNoQuirurgica::tostring() 
{
	string resul = this->get_dimensiones() + " " + to_string(this->get_tipoennum()) + " " + to_string(this->get_tren()) + " " + to_string(this->get_fecha().tm_wday) + "/" + to_string(this->get_fecha().tm_mon) + "/" + to_string(this->get_fecha().tm_year) + " " + to_string(this->get_radio())+" "+this->get_num();
	return resul;

}

void cNoQuirurgica::imprimir()
{
	cout << this->tostring();

}
