#pragma once
#ifndef _CQUIRURGICA_H 
#define _CQUIRURGICA_H 

#include "cPaciente.h"




class cQuirurgica: public cPiezaOrt
{
public:

	cQuirurgica();

	bool chequearAlergia(cPaciente);

	~cQuirurgica();



};

#endif

