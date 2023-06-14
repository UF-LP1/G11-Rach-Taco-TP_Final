#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H
#include <vector>
#include "cANPA.h"
enum alergia { No, Titanio, Acero, Polimero, Plastico };
class cPaciente
{
public:
	
	cPaciente(string nom, string ape, tm fechanac, string doc, string tel,vector<cHospital> hos, alergia Aux, unsigned int radamp,cPiezaOrt* pieznec,bool protesis );
	alergia get_alergias();
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
		
		cPiezaOrt* get_protesisnec();

		bool get_protesis();
		void set_protesis(bool aux);
		string tostring();
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
 cPiezaOrt* ProtesisNecesaria;
	bool protesis;


};

#endif 