#pragma once
#ifndef _CMEDICO_H
#define _CMEDICO_H

#include <string>
#include <iostream>
#include <vector> 
#include <string>
using namespace std;
class cMedico
{
public:
	cMedico(string name,string ape,const string matri);

	void entregarsolicitud();
	void solicitarprotesis();

	string get_nombre();
	void set_nombre(string nom);
	string get_apellido();
	void set_apellido(string ape);
	const string get_matricula();
	string tostring();
	void imprimir();

	

	~cMedico();






private:
	string Nombre;
	string Apellido;
	const string Matricula;
	
};

#endif
