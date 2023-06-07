#include "cANPA.h"

cANPA::cANPA(vector<cRegistros> reg, vector<cOrtopedia> ortopedia)
{


}

bool cANPA::chequeoalergias(cPaciente)
{
	return false;
}

bool cANPA::busquedapieza(cPiezaOrt)
{
	return false;
}

void cANPA::mandar_sol()
{


}

vector<cRegistros> cANPA::get_registros()
{
	return this->registros;
}

vector<cOrtopedia> cANPA::get_ort()
{
	return this->Ortopedias;
}

cANPA::~cANPA()
{

}

ostream& operator<<(ostream& out, const cANPA& Aux)
{
	int i = 0;

	vector<cRegistros> auxreg = Aux.registros;
	vector<cOrtopedia> auxort = Aux.Ortopedias;

	for (i = 0; i < auxreg.size(); i++) {
		cHospital* hos = auxreg[i].get_hospi();
		cMedico* med = auxreg[i].get_med();
		cPiezaOrt* piez = auxreg[i].get_peiza();
		cPaciente* pac = auxreg[i].get_pac();

		out << hos->get_nombre() << endl;
		out << med->get_nombre() << " " << med->get_apellido() << endl;
		out << piez->get_tipo() << endl; //dynamic cast para quiru o no quieru??
		out << pac->get_apellido() << "," << pac->get_documento() << endl;
		out << auxreg[i].get_fechaentrega().tm_year << auxreg[i].get_fechaentrega().tm_mon << auxreg[i].get_fechaentrega().tm_wday << endl;
		out << auxreg[i].get_fechaestimada().tm_year << auxreg[i].get_fechaestimada().tm_mon << auxreg[i].get_fechaestimada().tm_wday << endl;
		out << auxreg[i].get_fechasoli().tm_year << auxreg[i].get_fechasoli().tm_mon << auxreg[i].get_fechasoli().tm_wday << endl;

	}

	for (i = 0; i < auxort.size(); i++) {




	}







	return out;
}
