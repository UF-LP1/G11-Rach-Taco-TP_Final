#pragma once
#ifndef _CPACIENTE_H
#define _CPACIENTE_H
#include <vector>
#include "cPiezaOrt.h"
#include "Material.h"
class cHospital;


class cPaciente
{
public:
	
	cPaciente(string nom, string ape, tm fechanac, string doc, string tel,string hos, Material* Aux, unsigned int radamp,cPiezaOrt* pieznec,bool protesis );
	
	Material* get_alergias();

	void set_alergias(Material* aux);

	unsigned int get_RadioAmp();

	void set_RadioAmp(unsigned int);

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

		string get_hospital();
		void set_hospital(string hosp);
		
		int get_alergiasennum();

		cPiezaOrt* get_protesisnec();

		bool get_protesis();
		void set_protesis(int aux);

		bool operator==(cPiezaOrt* aux);

		void set_dianac(int aux);
		void set_mesnac(int aux);
		void set_anionac(int aux);
		
		string tostring();
		void imprimir();
	~cPaciente();
	friend istream& operator>>(istream& in, cPaciente& aux);

	friend class cHospital;


private:
	string Nombre;

	string Apellido;

	tm FechaNacimiento;

	string Documento;

	string Telefono;

 string hospital;

	Material* Alergias;

	unsigned int RadioAmp;

 cPiezaOrt* ProtesisNecesaria;

	bool protesis;


};

#endif 