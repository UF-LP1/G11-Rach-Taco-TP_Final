#include "cNoQuirurgica.h"

cNoQuirurgica::cNoQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab,unsigned int radius):cPiezaOrt(dim, tipo, train, fecha, fab)
{
	this->radio = radius;

}

void cNoQuirurgica::ajusta_dim(cPaciente aux)
{
	this->radio = aux.get_RadioAmp();


}
unsigned int cNoQuirurgica:: get_radio() {

	return this->get_radio();


}

cNoQuirurgica::~cNoQuirurgica()
{
}

string cNoQuirurgica::tostring() //ver
{
	string resul = this->get_dimensiones() + " " + to_string(this->get_tipo()) + " " + this->get_tren() + " " + to_string(this->get_fecha().tm_wday) + "/" + to_string(this->get_fecha().tm_mon) + "/" + to_string(this->get_fecha().tm_year) + " " + to_string(this->get_radio());
	return resul;

}

void cNoQuirurgica::imprimir()
{
	cout << this->tostring();

}
