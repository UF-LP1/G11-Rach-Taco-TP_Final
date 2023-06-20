#pragma once
#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H
#include "cPiezaOrt.h"
#include "cNoQuirurgica.h"
#include "cQuirurgica.h"

#include <vector>
using namespace std;
enum espec {Pierna,Brazo,Pie};
class cOrtopedia 
{
public:
	
	cOrtopedia(string nom, string dir, vector <cPiezaOrt*> piezort, espec espe);

	string get_nombre();
	void set_nombre(string nom);
	string get_direccion();
	void set_direccion(string dire);
	vector <cPiezaOrt*> get_piezas();
	static int get_stock();
	espec get_especializacion();
	void set_especializacion(espec espe);

	void entregarpieza(cPiezaOrt* aux);
	
	string tostring();
	void imprimir();

	friend ostream& operator<<(ostream& out, const cOrtopedia& ort);

	~cOrtopedia();


	static int stock;
private:
	string Nombre;
	string Direccion;
	vector<cPiezaOrt*> PiezasOrt;

	espec especializacion;
	

};

#endif 