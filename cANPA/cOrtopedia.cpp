#include "cOrtopedia.h"
 int cOrtopedia::stock = 0;
cOrtopedia::cOrtopedia(string nom, string dir, vector<cPiezaOrt*> piezort, espec espe)
{
	this->Nombre = nom;
	this->Direccion = dir;
	this->especializacion = espe;
	this->PiezasOrt = piezort;
	stock++;
}

string cOrtopedia::get_nombre()
{
	return this->Nombre;
}

void cOrtopedia::set_nombre(string nom)
{
	this->Nombre = nom;

}

string cOrtopedia::get_direccion()
{
	return this->Direccion;
}

void cOrtopedia::set_direccion(string dire)
{

	this->Direccion = dire;

}

vector<cPiezaOrt*> cOrtopedia::get_piezas()
{
	return this->PiezasOrt;
}

int cOrtopedia::get_stock()
{
	return stock;
}

espec cOrtopedia::get_especializacion()
{
	return this->especializacion;
}

void cOrtopedia::set_especializacion(espec espe)
{
	this->especializacion = espe;

}

void cOrtopedia::entregarpieza(cPiezaOrt* aux)
{
	bool entregado = false;
	int i = 0;

	while (entregado == false) {
		if (this->PiezasOrt[i]->get_num() == aux->get_num()) { //busca por numero de serie, si lo encuentra lo elimina de la lista
			entregado = true;
			this->PiezasOrt.erase(this->PiezasOrt.begin() + i);
		}
		i++;
	}

}

void cOrtopedia::agregarpieza(cPiezaOrt* aux)
{
	this->PiezasOrt.push_back(aux);
}



string cOrtopedia::tostring()
{
	string resul = this->Nombre + " " + this->Direccion + " " + to_string(this->especializacion);



	return resul;
}

void cOrtopedia::imprimir()
{
	cout << this->tostring();
}

cOrtopedia::~cOrtopedia()
{

	stock--;
}

ostream& operator<<(ostream& out, const cOrtopedia& ort)
{
int	i = 0;
vector<cPiezaOrt*> aux = ort.PiezasOrt;
for (i = 0; i < aux.size(); i++) {

	out << aux[i]->get_dimensiones() << endl;
	out << aux[i]->get_fecha().tm_year << aux[i]->get_fecha().tm_mon<< aux[i]->get_fecha().tm_mday<<endl;
	out << aux[i]->get_tipo() << endl;
	out << aux[i]->get_tren() << endl;
	/*cNoQuirurgica* noq = dynamic_cast<cNoQuirurgica*>(aux[i]);
	if (noq != nullptr) {
		out<<noq->get_radio();
	}*/

}
	return out;
}
