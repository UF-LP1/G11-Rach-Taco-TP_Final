#pragma once
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H

#include <vector>
#include <string>
#include "cPaciente.h"
#include "cMedico.h"
#include "Pacrepetido.h"
#include "PacNoExiste.h"
#include "cOrtopedia.h"
#include "VectorVacio.h"

using namespace std;
enum espe { Cardiologia, Neurologia, Traumatologia, Pediatria };
class cHospital
{
public:

	

	cHospital(string name, string dire, vector <cMedico*> medicos, vector <cPaciente*> pacientes, espe especialidad,vector<cOrtopedia*> conv,vector<cOrtopedia*> noconv);
	string get_nombre();

	void set_nombre(string nom);

	string get_direccion();

	void set_direccion(string dire);

	vector <cMedico*> get_medicos();

	vector <cPaciente*> get_pacientes();

	espe get_especialidad();

	void set_especialidad( espe aux);

	friend ostream& operator<<(ostream& out, const cHospital& aux);

	string tostring();

	void imprimir();

	void operator+(cPaciente* aux);

	void operator-(cPaciente* aux);

	int operator=(string doc);

	void buscarpieza(cPaciente* aux);

	bool chequearAlergia(cPaciente* aux,cPiezaOrt* ort);

	void agregarconv(cOrtopedia* aux) {
		this->convenios.push_back(aux);
	}

	void agregarnoconv(cOrtopedia* aux) {
		this->noconvenio.push_back(aux);
	}
	
	void agregarMed(cMedico* aux) {
		this->Medicos.push_back(aux);
	}
	vector<cOrtopedia*>get_convenio();
	vector<cOrtopedia*> get_noconvenio();
	
	
	~cHospital();


private:
	string Nombre;
	string Direccion;
	vector <cMedico*> Medicos;
	vector <cPaciente*> Pacientes;
	espe Especialidad;
	vector<cOrtopedia*> convenios;
	vector<cOrtopedia*> noconvenio;

};
#endif
