#pragma once
#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H
#include "cHospital.h"
using namespace std;
enum espec {Pierna,Brazo,Pie};
class cOrtopedia
{
public:
	
	cOrtopedia(string nom, string dir, vector <cPiezaOrt*> piezort, espec espe, vector<cHospital*> conv);

	string get_nombre();
	void set_nombre(string nom);
	string get_direccion();
	void set_direccion(string dire);
	vector <cPiezaOrt*> get_piezas();
	static int get_stock();
	espec get_especializacion();
	void set_especializacion(espec espe);
	vector <cHospital*> get_convenio();
	string tostring();
	void imprimir();

	friend ostream& operator<<(ostream& out, const cOrtopedia& ort);

	~cOrtopedia();

private:
	string Nombre;
	string Direccion;
	vector<cPiezaOrt*> PiezasOrt;
	static int stock;
	espec especializacion;
	vector<cHospital*> convenio;

};

#endif 