#pragma once
#ifndef _CNOQUIRURGICA_H 
#define _CNOQUIRURGICA_H 
#include "cPiezaOrt.h"
#include "cPaciente.h"

class cNoQuirurgica: public cPiezaOrt
{
public:
	cNoQuirurgica();

	void ajusta_dim(cPaciente);

	~cNoQuirurgica();



};
#endif
