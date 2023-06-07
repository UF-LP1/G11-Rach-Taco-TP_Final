#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H
#include <vector>
#include "cANPA.h"

class cPaciente
{
public:

	cPaciente(string nom, string ape, tm fechanac, string doc, string tel,vector<cHospital> hos, enum aler, unsigned int radamp,vector<cPiezaOrt> pieznec );
	// get_alergias
	//void set_alergias
	unsigned int get_RadioAmp();
	void set_RadioAmp(unsigned int);
	void ir_ortopedia();
	void PedirListaOrtopedias(cOrtopedia);

	string get_nombre();
	void set_nombre(string nom);
	string get_apellido();
	void set_apellido(string ape);
	tm get_fecha();
	void set_fecha(tm fech);
 string get_documento();
	void set_documento(string doc);
	string get_telefono();
	void set_telefono(string tele);
		vector <cHospital> get_hospital();
		unsigned int get_radio();
		void set_radio(unsigned int rad);
		vector <cPiezaOrt> get_protesis();
	
	~cPaciente();

private:
	string Nombre;
	string Apellido;
	tm FechaNacimiento;
	string Documento;
	string Telefono;
	vector<cHospital> hospital;
	enum alergias;
	unsigned int RadioAmp;
	vector<cPiezaOrt> ProtesisNecesaria;


};

#endif 