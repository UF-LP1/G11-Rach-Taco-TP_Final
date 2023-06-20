
#include "cANPA.h"

int menu();

cPaciente* crearpac(string name, string ape, tm date, string dni, string tele, string hosp, Material* aux, unsigned int radius, cPiezaOrt* lol, bool pro);
cRegistros* crearreg(cHospital* hosp, cMedico* med, cPiezaOrt* pie, cPaciente* pac, tm fecha1, tm fecha2, tm fecha3);
int main() {
	int opcion = 0;
	vector<cOrtopedia*> Ortopedias;
	vector<cOrtopedia*> NoOrtopedias;
	vector<cMedico*> Medicos;
	vector<cPaciente*> Pacientes;
	vector<cRegistros*> Registros;
	vector<cPiezaOrt*> Piezas;
    vector<cPiezaOrt*> Maspiezas;


	vector<cPaciente*> Vacia;

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
	cNoQuirurgica* Pieza2 = new cNoQuirurgica("5x7", ace, Superior, fecha, Fabri, "454343", 5);
	cNoQuirurgica* Pieza = new cNoQuirurgica("7x6", tit, inferior, fecha, Fabri, "64628", 4);
	//creacion de piezas cQuirurgicas
	cQuirurgica* Piezaquir = new cQuirurgica("4x2", poli, inferior, fecha, Fabri, "8wte3r5");
	cQuirurgica* Piezaquir2 = new cQuirurgica("4x9", plas, Superior, fecha, Fabri, "43454f");
	



	//creacion de cOrtopedias
	cOrtopedia* Ort = new cOrtopedia("Ortopedia", "San Lorenzo 565", Piezas, Pie);
	cOrtopedia* Ort2 = new cOrtopedia("LOL", "Avellaneda 331", Maspiezas, Pierna);




	//creacion de cPacientes
	cPaciente* Pedro = new cPaciente{ "Pedro","Fritser",fecha,"46336464","1174329433","Favaloro",nada,4, Pieza2,true};
	cPaciente* Renata = new cPaciente("Renata", "Stasi", fecha, "45739443", "4444444444", "Favaloro", plas, 5, Piezaquir, false);
	cPaciente* Bautista = new cPaciente{ "Bautista","Rach",fecha,"44632792","36787328","Favaloro",ace,1,Piezaquir2,true};
	cPaciente* Stefano = new cPaciente{ "Stefano","Taco",fecha,"45571328","1161521099","Favaloro",nada,7,Pieza,false};
	cPaciente* Bot=new cPaciente{"","",fecha,"","","",nada,0,Pieza,false};
	cPaciente* Nuevo = new cPaciente{ "","",fecha,"","","",nada,0,Pieza,false };





	//creacion de cRegistros
	cRegistros* Reg = new cRegistros(Fava, DR, Piezaquir2, Bautista, fecha, fecha, fecha);
	cRegistros* Reg2 = new cRegistros{ Fava,DR,Pieza,Stefano,fecha,fecha,fecha };
	cRegistros* Reg3 = new cRegistros{ Fava,DR,Pieza2,Pedro,fecha,fecha,fecha };
	cRegistros* Reg4 = new cRegistros{ Fava,DR,Piezaquir,Renata,fecha,fecha,fecha };
	cRegistros* Reg5 = new cRegistros{ Fava,DR,Pieza,Nuevo,fecha,fecha,fecha };

	string numdeserie, nomhospi;
	
	







	Fava->agregarMed(DR);
	Fava->agregarnoconv(Ort2);
	Fava->agregarconv(Ort);

	Ort->agregarpieza(Piezaquir);
	Ort->agregarpieza(Pieza);
	Ort2->agregarpieza(Piezaquir);

	try {

		Fava->operator+(Stefano);
		Fava->operator+(Bautista);
		Fava->operator+(Pedro);
		Fava->operator+(Renata);
		
	}
	catch (exception* e) {
		cout << e->what()<<endl;
		delete e;
	}
	//cout << *Fava;
	
	//cout << Bautista->get_protesis() << endl;

	//Fava->buscarpieza(Bautista);

	//cout << Bautista->get_protesis();
	
	ANPA->agregarregistros(Reg);
	ANPA->agregarregistros(Reg2);
	ANPA->agregarregistros(Reg3);
	ANPA->agregarregistros(Reg4);
	
	//cout << ANPA->buscarpacporpieza(Bautista->get_protesisnec()->get_num())->get_nombre();

	
	//cout<<ANPA->buscarpacporhosp("Favaloro")[0]->get_nombre()<<endl<< ANPA->buscarpacporhosp("Favaloro")[1]->get_nombre()<<endl;

	//cout << *ANPA;

	//cout << Bautista->operator==(Piezaquir);

	string nombre, apellido, dni, telefono, hospi;
	int protesis, radio,prot;
	int dia, mes, anio;
	bool prote;
	string dnibusqueda;
		tm date = { 0,0,0,0,0,0 };

		cout<<Stefano->get_protesis();
	do {
		opcion = menu();

		switch (opcion) {

		case 1:
			cout << "Ingrese el nombre del paciente" << endl;
			cin >>nombre;
			cout << "Ingrese el apellido del paciente" << endl;
			cin >>apellido;
			cout << "Ingrese el documento del paciente" << endl;
			cin >>dni;
			cout << "Ingrese el radio de amputacion del paciente" << endl;
			cin >>radio;

			cout << "Ingrese el telefono del paciente" << endl;
			cin >> telefono;
			cout << "ingrese dia de nacimiento" << endl;
			cin >> dia;
			
			cout << "ingrese mes de nacimiento" << endl;
			cin >> mes;
			
			cout << "ingrese anio de nacimiento" << endl;
			cin >> anio;
			
			cout << "Ingrese el nombre del hospital del paciente" << endl;
			cin >> hospi;
			do {
				cout << "Indique si tiene una protesis (0 o 1)" << endl;
				cin >> prot;
			} while (prot != 1 && prot != 0);
			
		 prote = prot;
			 date = { 0,0,0,dia,mes - 1,anio - 1900 };

			Nuevo = crearpac(nombre, apellido, date, dni, telefono, hospi, nada, 3, Pieza, prot);
			try {
				Fava->operator+(Nuevo);
			}
			catch (exception* e) {
				cout << e->what() << endl;
				delete e;
			}
		    Reg5 = crearreg(Fava,DR,Pieza,Nuevo,fecha,fecha,fecha);
			ANPA->agregarregistros(Reg5);
			break;

		case 2:
			cout << "Ingrese el numero de serie" << endl;
			cin >> numdeserie;
			try {
				Bot = ANPA->buscarpacporpieza(numdeserie);
			}
			catch (exception* e) {
				cout << e->what() << endl;
				delete e;
			}
			Bot->imprimir();
			break;

		case 3:
			cout << "Ingrese el nombre del hospital" << endl;
			cin >> nomhospi;
			try {
				Vacia = ANPA->buscarpacporhosp(nomhospi);
			}
			catch (exception* e) {
				cout << e->what() << endl;
				delete e;
			}
			for (int i = 0; i < Vacia.size(); i++) {
				Vacia[i]->imprimir();
			}
			break;
		case 4:
			cout << "Ingrese el Dni del paciente a eliminar" << endl;
			cin >> dni;
			ANPA->operator-(dni);
			break;

		case 5:
			cout << "Ingrese el dni del paciente que recibira la protesis" << endl;
			cin >> dnibusqueda;
			try {
				Fava->buscarpieza(Fava->buscarpac(dnibusqueda));
			}
			catch (exception* e) {
				cout << e->what() << endl;
				delete e;
			}
			break;
		case 6:
			cout << "Hasta luego" << endl;
			break;

		default:
			cout << "Seleccion invalida" << endl;
			break;

		}
	} while (opcion != 6);

	cout << Stefano->get_protesis();

	getchar();



		

	return 0;
}

int menu() {
cout << "\t\t Menu" << endl;
cout << "\t1) Agregar Paciente" << endl;
cout << "\t2) Buscar paciente por Protesis" << endl;
cout << "\t3) Buscar Paciente por Hospital" << endl;
cout << "\t4) Eliminar Paciente" << endl;
cout << "\t5) Asignar Protesis" << endl;
cout << "\t6) Salir" << endl;

int opcion;
cin >> opcion;
return opcion;
}
cPaciente* crearpac(string name, string ape, tm date, string dni, string tele, string hosp, Material* aux, unsigned int radius, cPiezaOrt* lol, bool pro) {

	cPaciente* po = new cPaciente(name, ape, date, dni, tele, hosp, aux, radius, lol, pro);
	return po;
}

cRegistros* crearreg(cHospital* hosp, cMedico* med, cPiezaOrt* pie, cPaciente* pac, tm fecha1, tm fecha2, tm fecha3)
{
	cRegistros* aux = new cRegistros(hosp, med, pie, pac, fecha1, fecha2, fecha3);
	return aux;
}


