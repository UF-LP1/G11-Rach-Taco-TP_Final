#include "cHospital.h"

cHospital::cHospital(string name, string dire, vector<cMedico*> medicos, vector<cPaciente*> pacientes, espe especialidad,vector<cOrtopedia*> conv)//no estoy seguro como hacer con vector
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

vector<cMedico*> cHospital::get_medicos()
{
	return this->Medicos;
}

vector<cPaciente*> cHospital::get_pacientes()
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

void cHospital::operator+(cPaciente* aux)
{
	int i = this->operator=(aux->get_documento());
	if (i != -1)
		throw new Pacrepetido();
	else
		this->Pacientes.push_back(aux);
	return;

}

void cHospital::operator-(cPaciente* aux) 
{
	int i = this->operator=(aux->get_documento());
	if (i != -1)
		throw new PacNoExiste();
	else
		this->Pacientes.erase(this->Pacientes.begin() + i);
	return;

}

int cHospital::operator=(string doc)
{
	int i=0,k = 0;
	bool esta = false;
	vector<cPaciente*> aux = this->Pacientes;
	while (esta == false) {
		if (aux[i]->get_documento() == doc) {
			esta = true;
			k = i;
		}
	}
	return k;

}

void cHospital::buscarpieza(cPaciente* aux)
{
	bool esta = false;
	bool noconv = false;
	int i = 0,k=0;
	vector<cOrtopedia*> ort = this->convenios;

	while (i<ort.size()) { // chequeo si el paciente tiene protesis o no
		while (k<ort[i]->get_piezas().size()) {
			if (ort[i]->get_piezas()[k]->get_num() == aux->get_protesisnec()->get_num())
				this->convenios[i]->entregarpieza(aux->get_protesisnec()); //se le entrega la protesis al paciente
				aux->set_protesis(true); 
			k++;
		}
		i++;
	}
	i = 0, k = 0;;
	vector<cOrtopedia*>ortnoconv = this->noconvenio; //chequeo en las que no tiene convenio
	if (aux->get_protesis()==false) {
		while (i<ortnoconv.size()) {
			while (k<ortnoconv[i]->get_piezas().size()) {
				if (ortnoconv[i]->get_piezas()[k]->get_num() == aux->get_protesisnec()->get_num()) {
					this->noconvenio[i]->entregarpieza(aux->get_protesisnec()); //como no dice que la ortopedia puede rechazar la solicitud se la asignamos automaticamente
					aux->set_protesis(true);
					
				}
				k++;
			}
			i++;
		}
	}
	int resp;
	if (aux->get_protesis() == false) //le mando al fabricnate la solicitud
		resp = aux->get_protesisnec()->get_fab()->respuesta();
	if (resp == 1)
		aux->set_protesis(true);


	return;
}




bool cHospital::operator==(cPiezaOrt* aux) //mi idea aca es con dynamic cast ver si es quirurgica o no para ver si la que necesita lo es o no tmb
{//y despues comparar sus atributos, si es el mismo return true, sino comparar numero de serie

	return false;
}

vector<cOrtopedia*> cHospital::get_noconvenio()
{
	return this->noconvenio;
}


cHospital::~cHospital()
{

}

ostream& operator<<(ostream& out, const cHospital& aux)
{
	int i = 0;

	vector <cPaciente*> aux2 = aux.Pacientes;
	vector<cMedico*> aux3 = aux.Medicos;

	for (i = 0; i < aux2.size(); i++) {

		cHospital* aux3 = aux2[i]->get_hospital();

		out << aux2[i]->get_nombre() << endl;
		out << aux2[i]->get_apellido() << endl;
		out << aux2[i]->get_documento() << endl;
		out << aux2[i]->get_fecha().tm_year << "/" << aux2[i]->get_fecha().tm_mon << "/" << aux2[i]->get_fecha().tm_wday << endl;
		out << aux2[i]->get_RadioAmp() << endl;
		out << aux2[i]->get_telefono() << endl;
		out << aux2[i]->get_alergias() << endl;
		out << aux2[i]->get_protesis() << endl;
		
	}
	for (i = 0; i < aux3.size(); i++) {
		out << aux3[i]->get_nombre() << endl;
		out << aux3[i]->get_apellido() << endl;
		out << aux3[i]->get_matricula();

	}
		return out;
}

