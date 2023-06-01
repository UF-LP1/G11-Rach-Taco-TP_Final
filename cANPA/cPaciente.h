#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H
#include <vector>
#include "cANPA.h"

class cPaciente
{
public:

	cPaciente(string nom, string ape, time_t fechanac, unsigned int doc, string tel,vector<cHospital> hos, enum aler, unsigned int radamp,vector<cPiezaOrt> pieznec );
	// get_alergias
	//void set_alergias
	unsigned int get_RadioAmp();
	void set_RadioAmp(unsigned int);
	void ir_ortopedia();
	void PedirListaOrtopedias(cOrtopedia);



	~cPaciente();

private:
	string Nombre;
	string Apellido;
	time_t FechaNacimiento;
	unsigned int Documento;
	string Telefono;
	vector<cHospital> hospital;
	enum alergias;
	unsigned int RadioAmp;
	vector<cPiezaOrt> ProtesisNecesaria;


};

#endif 