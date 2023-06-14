#include "cNoQuirurgica.h"

cNoQuirurgica::cNoQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab,unsigned int radius):cPiezaOrt(dim, tipo, train, fecha, fab)
{
	this->radio = radius;

}

void cNoQuirurgica::ajusta_dim(cPaciente aux)
{
	this->radio = aux.get_RadioAmp();


}

cNoQuirurgica::~cNoQuirurgica()
{
}

string cNoQuirurgica::to_string()
{
	return string();
}

void cNoQuirurgica::imprimir()
{
}
