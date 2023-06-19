#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dim, tipomat tipo, tren train, tm fecha, cFabricante* fab,const string series):cPiezaOrt( dim,  tipo,  train,  fecha,  fab,series)
{
}


string cQuirurgica::tostring()
{
	string resul = this->get_dimensiones() + " " + to_string(this->get_tipo()) + " " + to_string(this->get_tren()) + " " + to_string(this->get_fecha().tm_wday) + "/" + to_string(this->get_fecha().tm_mon) + "/" + to_string(this->get_fecha().tm_year)+" "+this->get_num();
	return resul;
}

void cQuirurgica::imprimir()
{
	cout << this->tostring();

}

cQuirurgica::~cQuirurgica()
{
}
