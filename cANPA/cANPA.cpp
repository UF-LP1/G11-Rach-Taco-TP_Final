#include "cANPA.h"

cANPA::cANPA(vector<cRegistros*> reg, vector<cOrtopedia*> ortopedia)
{


}

bool cANPA::chequeoalergias(cPaciente*)
{
	return false;
}




vector<cRegistros*> cANPA::get_registros()
{
	return this->registros;
}



cPaciente* cANPA::buscarpacporpieza(string numdeserie) //anyadir numero de serie a la protesis y buscar con eso
{
 cPaciente* lista=nullptr;
	vector<cRegistros*> reg=this->get_registros();

	int i = 0;
	for (i = 0; i < reg.size(); i++) {
		if (reg[i]->get_pieza()->get_num() == numdeserie)
			lista=(reg[i]->get_pac());

 }
	if (lista == nullptr)
		throw new PacNoExiste();



	return lista;
}
vector<cPaciente*> cANPA::buscarpacporhosp(string nom) {
	vector<cPaciente*> pac;
	vector<cRegistros*> reg = this->registros;
	int i = 0;
	for (i = 0; i < reg.size(); i++) {
		if (reg[i]->get_hospi()->get_nombre() == nom)
			pac.push_back(reg[i]->get_pac());
	}
	
	return pac;

}


cANPA::~cANPA()
{

}

ostream& operator<<(ostream& out, const cANPA& Aux)
{
	int i = 0;

	vector<cRegistros*> auxreg = Aux.registros;


	for (i = 0; i < auxreg.size(); i++) {
		cHospital* hos = auxreg[i]->get_hospi();
		cMedico* med = auxreg[i]->get_med();
		cPiezaOrt* piez = auxreg[i]->get_pieza();
		cPaciente* pac = auxreg[i]->get_pac();

		out << hos->get_nombre() << endl;
		out << med->get_nombre() << " " << med->get_apellido() << endl;
		out << piez->get_tipo() << endl;
		out << pac->get_apellido() << "," << pac->get_documento() << endl;
		out << auxreg[i]->get_fechaentrega().tm_year << auxreg[i]->get_fechaentrega().tm_mon << auxreg[i]->get_fechaentrega().tm_mday << endl;
		out << auxreg[i]->get_fechaestimada().tm_year << auxreg[i]->get_fechaestimada().tm_mon << auxreg[i]->get_fechaestimada().tm_mday << endl;
		out << auxreg[i]->get_fechasoli().tm_year << auxreg[i]->get_fechasoli().tm_mon << auxreg[i]->get_fechasoli().tm_mday << endl;
		
	}
	
	







	return out;
}
