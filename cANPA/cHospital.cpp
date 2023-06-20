#include "cHospital.h"

cHospital::cHospital(string name, string dire, vector<cMedico*> medicos, vector<cPaciente*> pacientes, espe especialidad,vector<cOrtopedia*> conv,vector <cOrtopedia*> noconv)//no estoy seguro como hacer con vector
{
	this->Nombre = name;
	this->Direccion = dire;
	this->Especialidad = especialidad;
	this->Medicos = medicos;
	this->Pacientes = pacientes;
	this->convenios = conv;
	this->noconvenio = noconv;

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
	if (i == -1)
		throw new PacNoExiste();
	else
		this->Pacientes.erase(this->Pacientes.begin() + i);
	return;

}

int cHospital::operator=(string doc) 
{
	int i=0,k = -1;
	bool esta = false;
	vector<cPaciente*> aux = this->Pacientes;
	while (esta == false || i<aux.size()) {
		if (aux[i]->get_documento() == doc) {
			esta = true;
			k = i;
		}
		i++;
	}
	return k;

}

void cHospital::buscarpieza(cPaciente* aux)
{
	bool alergia = false;
	bool esta = false;
	bool noconv = false;
	int i = 0,k=0;
	vector<cOrtopedia*> ort = this->convenios;

	while (i<ort.size()) { // chequeo si el paciente tiene protesis o no
		while (k<ort[i]->get_piezas().size()) {
			if (ort[i]->get_piezas()[k]->get_num() == aux->get_protesisnec()->get_num()) {
				if (chequearAlergia(aux,ort[i]->get_piezas()[k])) { //chequeo las alergias y el material
					this->convenios[i]->entregarpieza(aux->get_protesisnec()); //se le entrega la protesis al paciente
					aux->set_protesis(true);
				}
			}
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
					if (chequearAlergia(aux,ortnoconv[i]->get_piezas()[k]) ){
						this->noconvenio[i]->entregarpieza(aux->get_protesisnec()); //como no dice que la ortopedia puede rechazar la solicitud se la asignamos automaticamente
						aux->set_protesis(true);
					}
				}
				k++;
			}
			i++;
		}
	}
	int resp=0;
	if (aux->get_protesis() == false) //le mando al fabricnate la solicitud
		resp = aux->get_protesisnec()->get_fab()->respuesta();
	if (resp == 1)
		aux->set_protesis(true);


	return;
}


bool cHospital::chequearAlergia(cPaciente* aux,cPiezaOrt* ort) {

	if (aux->get_alergias() == nullptr)
		return false;
	else if (aux->get_alergias() == ort->get_tipo())
		return true;

	return false;
}



vector<cOrtopedia*> cHospital::get_convenio()
{
	return this->convenios;
}

vector<cOrtopedia*> cHospital::get_noconvenio()
{
	return this->noconvenio;
}


cHospital::~cHospital()
{

}

ostream& operator<<(ostream& out, const cHospital& aux) {

	int i = 0;

	vector <cPaciente*> aux2 = aux.Pacientes;
	vector<cMedico*> aux3 = aux.Medicos;
	vector<cOrtopedia*> conv = aux.convenios;
	vector<cOrtopedia*> noconv = aux.noconvenio;
	if (aux2[0] == nullptr)
		throw new VectorVacio();
	else {
		for (i = 0; i < aux2.size(); i++) {

			cHospital* aux3 = aux2[i]->get_hospital();

			out << aux2[i]->get_nombre() << endl;
			out << aux2[i]->get_apellido() << endl;
			out << aux2[i]->get_documento() << endl;
			out << aux2[i]->get_fecha().tm_year << "/" << aux2[i]->get_fecha().tm_mon << "/" << aux2[i]->get_fecha().tm_mday << endl;
			out << aux2[i]->get_RadioAmp() << endl;
			out << aux2[i]->get_telefono() << endl;
			out << aux2[i]->get_alergias() << endl;
			out << aux2[i]->get_protesis() << endl;

		}
	}
	if (aux3[0] == nullptr)
		throw new VectorVacio();
	else {

		for (i = 0; i < aux3.size(); i++) {
			out << aux3[i]->get_nombre() << endl;
			out << aux3[i]->get_apellido() << endl;
			out << aux3[i]->get_matricula();

		}
	}

	if (conv[0] == nullptr)
		throw new VectorVacio();
	else {
		for (i = 0; i < conv.size(); i++) {
			out << conv[i]->get_direccion() << endl;
			out << conv[i]->get_especializacion() << endl;
			out << conv[i]->get_nombre() << endl;
		}
	}
	if (noconv[0] == nullptr)
		throw new VectorVacio();
	else {
		for (i = 0; i < noconv.size(); i++) {
			out << noconv[i]->get_direccion() << endl;
			out << noconv[i]->get_especializacion() << endl;
			out << noconv[i]->get_nombre() << endl;


		}
	}
	return out;
}

