
#include "cANPA.h"

int menu() {
	cout << "\t\t Menu" << endl;
	cout << "\t1) Agregar Paciente" << endl;
	cout << "\t2) Buscar paciente por Protesis" << endl;
	cout << "\t3) Buscar Paciente por Hospital"<<endl;
	cout << "\t4) Eliminar Paciente" << endl;
	cout << "\t5) Asignar Protesis" << endl;

	int opcion;
	cin >> opcion;
	return opcion;
}


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
	cPaciente* Pedro = new cPaciente{ "Pedro","Fritser",fecha,"46336464","1174329433","Favaloro",nada,4, Pieza,false};
	cPaciente* Renata = new cPaciente("Renata", "Stasi", fecha, "45739443", "4444444444", "Favaloro", plas, 5, Piezaquir, false);
	cPaciente* Bautista = new cPaciente{ "Bautista","Rach",fecha,"44632792","36787328","Favaloro",ace,1,Pieza,false};
	cPaciente* Stefano = new cPaciente{ "Stefano","Taco",fecha,"45571328","1161521099","FAvaloro",nada,7,Pieza,false};





	//creacion de cRegistros
	cRegistros* Reg = new cRegistros(Fava, DR, Pieza, Bautista, fecha, fecha, fecha);
	cRegistros* Reg2 = new cRegistros{ Fava,DR,Piezaquir,Stefano,fecha,fecha,fecha };

	Fava->agregarMed(DR);
	Fava->agregarnoconv(Ort2);
	Fava->agregarconv(Ort);

	Ort->agregarpieza(Piezaquir);
	Ort2->agregarpieza(Piezaquir);

	try {

		Fava->operator+(Stefano);
		Fava->operator+(Bautista);
		
	}
	catch (exception* e) {
		cout << e->what()<<endl;
		delete e;
	}
	cout << *Fava;
	
	cout << Bautista->get_protesis() << endl;

	Fava->buscarpieza(Bautista);

	cout << Bautista->get_protesis();
	
	ANPA->agregarregistros(Reg);
	ANPA->agregarregistros(Reg2);
	cout << ANPA->buscarpacporpieza(Bautista->get_protesisnec()->get_num())->get_nombre();

	
	cout<<ANPA->buscarpacporhosp("Favaloro")[0]->get_nombre()<<endl<< ANPA->buscarpacporhosp("Favaloro")[1]->get_nombre()<<endl;

	cout << *ANPA;

	cout << Bautista->operator==(Piezaquir);


	getchar();



		

	return 0;
}