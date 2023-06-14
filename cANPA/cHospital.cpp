#include "cHospital.h"

cHospital::cHospital(string name, string dire, vector<cMedico> medicos, vector<cPaciente> pacientes, espe especialidad)//no estoy seguro como hacer con vector
{
	this->Nombre = name;
	this->Direccion = dire;
	this->Especialidad = especialidad;

}

string cHospital::get_nombre()
{
	return this->Nombre;
}

void cHospital::set_nombre(string nom)
{
	this->Nombre = nom;
}

string cHospital::get_direccion()
{
	return this->Direccion;
}

void cHospital::set_direccion(string dire)
{
	this->Direccion = dire;
}

vector<cMedico> cHospital::get_medicos()
{
	return this->Medicos;
}

vector<cPaciente> cHospital::get_pacientes()
{
	return this->Pacientes;
}

espe cHospital::get_especialidad()
{
	return this->Especialidad;
}

void cHospital::set_especialidad(espe espe)
{
	this->Especialidad = espe;
}

string cHospital::tostring()
{
	string resul = this->Nombre + " " + this->Direccion + " " + to_string(this->Especialidad);


	return resul ;
}

void cHospital::imprimir()
{
	cout << this->tostring();
}

cHospital::~cHospital()
{

}

ostream& operator<<(ostream& out, const cHospital& aux)
{
	int i = 0;

	vector <cPaciente> aux2 = aux.Pacientes;

	for (i = 0; i < aux2.size(); i++) {

		cHospital* aux3 = aux2[i].get_hospital();

		out << aux2[i].get_nombre() << endl;
		out << aux2[i].get_apellido() << endl;
		out << aux2[i].get_documento() << endl;
		out << aux2[i].get_fecha().tm_year << endl << aux2[i].get_fecha().tm_mon << endl << aux2[i].get_fecha().tm_wday << endl;
		out << aux3->Nombre << endl;
		out << aux2[i].get_RadioAmp() << endl;
		out << aux2[i].get_telefono() << endl;
		
	}
		return out;
}

