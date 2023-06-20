
#include "cANPA.h"



int main() {
	vector<cOrtopedia*> Ortopedias;
	vector<cOrtopedia*> NoOrtopedias;
	vector<cMedico*> Medicos;
	vector<cPaciente*> Pacientes;
	tm fecha = { 0,0,0,0,0,0 };
	Material* aux = (Material*)Titanio;

	cFabricante* Fabri=new cFabricante("Lotso", "INternational", 4547 );

	cNoQuirurgica* Pieza=new cNoQuirurgica("hola", aux, Superior, fecha, Fabri, "64628",4);


	cMedico* DR = new cMedico("Luis","Taco","86532");

	
	cHospital* Fava=new  cHospital ("Favaloro", "Hola", Medicos, Pacientes, Cardiologia, Ortopedias, NoOrtopedias );

	
		
		
	
	cPaciente* Pedro =new cPaciente { "Pedro","Fritser",fecha,"45571328","1161521099",Fava,aux,4, Pieza,false};



		

	return 0;
}