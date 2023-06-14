#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H
#include <vector>
#include "cANPA.h"

class cPaciente
{
public:
	typedef enum  {Titanio,Plastico,Polimero,Acero}alergia;
	cPaciente(string nom, string ape, tm fechanac, string doc, string tel,vector<cHospital> hos, alergia Aux, unsigned int radamp,vector<cPiezaOrt> pieznec,bool protesis );
	int get_alergias();
	void set_alergias(alergia aux);
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
		cHospital* get_hospital();
		
		vector <cPiezaOrt> get_protesis();
		string to_string();
		void imprimir();
	~cPaciente();

private:
	string Nombre;
	string Apellido;
	tm FechaNacimiento;
	string Documento;
	string Telefono;
 cHospital* hospital;
	alergia Alergias;
	unsigned int RadioAmp;
	vector<cPiezaOrt> ProtesisNecesaria;
	bool protesis;


};

#endif 