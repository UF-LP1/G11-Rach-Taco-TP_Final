#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab):cPiezaOrt( dim,  tipo,  train,  fecha,  fab)
{
}

bool cQuirurgica::chequearAlergia(cPaciente aux)
{
	bool alerg=true;
	if (aux.get_alergias() == this->get_tipo())
		return false;

	return alerg;
}

string cQuirurgica::tostring()
{
	string resul = this->get_dimensiones() + " " + to_string(this->get_tipo()) + " " + this->get_tren() + " " + to_string(this->get_fecha().tm_wday) + "/" + to_string(this->get_fecha().tm_mon) + "/" + to_string(this->get_fecha().tm_year) ;
	return resul;
}

void cQuirurgica::imprimir()
{
	cout << this->tostring();

}

cQuirurgica::~cQuirurgica()
{
}
