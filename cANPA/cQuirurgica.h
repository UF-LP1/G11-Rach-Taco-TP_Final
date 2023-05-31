#pragma once
#ifndef _CQUIRURGICA_H 
#define _CQUIRURGICA_H 
#include "cPiezaOrt.h"




class cQuirurgica: public cPiezaOrt
{
public:

	cQuirurgica();

	bool chequearAlergia(cPaciente);

	~cQuirurgica();



};

#endif

