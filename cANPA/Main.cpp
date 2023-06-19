
#include "cANPA.h"



int main() {
	vector<cOrtopedia*> Ortopedias;
	vector<cOrtopedia*> NoOrtopedias;
	vector<cMedico*> Medicos;
	vector<cPaciente*> Pacientes;
	tm fecha = { 0,0,0,0,0,0 };

	cFabricante* Fabri=new cFabricante("Lotso", "INternational", 4547 );

	cNoQuirurgica* Pieza=new cNoQuirurgica( "hola", Titanio, Superior, fecha, Fabri, 64628, 3 );




	
	cHospital Fava ("Favaloro", "Hola", Medicos, Pacientes, Cardiologia, Ortopedias, NoOrtopedias );

	
		
		
	
	cPaciente Pedro = { "Pedro","Fritser",fecha,"45571328","1161521099",Fava,Polimero,4, };



		

	return 0;
}