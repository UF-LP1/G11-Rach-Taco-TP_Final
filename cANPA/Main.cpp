
#include "cANPA.h"



int main() {
	vector<cOrtopedia*> Ortopedias;
	vector<cOrtopedia*> NoOrtopedias;
	vector<cMedico*> Medicos;
	vector<cPaciente*> Pacientes;
	vector<cRegistros*> Registros;
	vector<cPiezaOrt*> Piezas;
    vector<cPiezaOrt*> Maspiezas;
	tm fecha = { 0,0,0,0,0,0 };
	Material* tit = (Material*)Titanio;
	Material* plas = (Material*)Plastico;
	Material* ace = (Material*)Acero;
	Material* poli = (Material*)Polimero;
	Material* nada = nullptr;

	//creacion de cANPA
	cANPA* ANPA = new cANPA(Registros);

	//creacion de cFabricantes
	cFabricante* Fabri = new cFabricante("Lotso", "INternational", 4547);


	//creacion de cHospitales
	cHospital* Fava = new  cHospital("Favaloro", "Hola", Medicos, Pacientes, Cardiologia, Ortopedias, NoOrtopedias);


	//creacion de cMedicos
	cMedico* DR = new cMedico("Luis", "Taco", "86532");


	//creacion de piezas cNoQuirurgicas
	cNoQuirurgica* Pieza = new cNoQuirurgica("7x6", tit, Superior, fecha, Fabri, "64628", 4);
	//creacion de piezas cQuirurgicas
	cQuirurgica* Piezaquir = new cQuirurgica("4x2", poli, inferior, fecha, Fabri, "8wte3r5");


	//creacion de cOrtopedias
	cOrtopedia* Ort = new cOrtopedia("Ortopedia", "San Lorenzo 565", Piezas, Pie);
	cOrtopedia* Ort2 = new cOrtopedia("LOL", "Avellaneda 331", Maspiezas, Pierna);




	//creacion de cPacientes
	cPaciente* Pedro = new cPaciente{ "Pedro","Fritser",fecha,"46336464","1174329433",Fava,nada,4, Pieza,false };
	cPaciente* Renata = new cPaciente("Renata", "Stasi", fecha, "45739443", "4444444444", Fava, plas, 5, Piezaquir, false);
	cPaciente* Bautista = new cPaciente{ "Bautista","Rach",fecha,"44632792","36787328",Fava,ace,1,Pieza,false };
	cPaciente* Stefano = new cPaciente{ "Stefano","Taco",fecha,"45571328","1161521099",Fava,nada,7,Pieza,false };





	//creacion de cRegistros
	cRegistros* Reg = new cRegistros(Fava, DR, Piezaquir, Pedro, fecha, fecha, fecha);

	Fava->get_medicos().push_back(DR);
	Fava->get_noconvenio().push_back(Ort2);
	Fava->get_convenio().push_back(Ort);
	Fava->get_pacientes().push_back(Bautista);
	try {

		Fava->operator+(Stefano);
	}
	catch (exception* e) {
		cout << e->what();
		delete e;
	}
	//cout << Fava->get_pacientes()[0]->get_nombre();
	
	getchar();



		

	return 0;
}