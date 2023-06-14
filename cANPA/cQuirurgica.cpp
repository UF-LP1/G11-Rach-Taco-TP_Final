#include "cQuirurgica.h"

cQuirurgica::cQuirurgica(string dim, tipomat tipo, string train, tm fecha, cFabricante* fab):cPiezaOrt( dim,  tipo,  train,  fecha,  fab)
{
}

bool cQuirurgica::chequearAlergia(cPaciente aux)
{
	bool alerg;
//esperar al get

	return alerg;
}

cQuirurgica::~cQuirurgica()
{
}
