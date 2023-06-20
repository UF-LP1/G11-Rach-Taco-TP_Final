#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dim, Material* tipo, tren train, tm fecha, cFabricante* fab,const string series):cPiezaOrt( dim,  tipo,  train,  fecha,  fab,series)
{
}


string cQuirurgica::tostring()
{
	string resul = this->get_dimensiones() + " " + to_string(this->get_tipoennum()) + " " + to_string(this->get_tren()) + " " + to_string(this->get_fecha().tm_mday) + "/" + to_string(this->get_fecha().tm_mon) + "/" + to_string(this->get_fecha().tm_year)+" "+this->get_num();
	return resul;
}

void cQuirurgica::imprimir()
{
	cout << this->tostring();

}

cQuirurgica::~cQuirurgica()
{
}
