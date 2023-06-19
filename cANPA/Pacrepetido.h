#pragma once
#include <exception>
#include <string>
using namespace std;
class Pacrepetido:public exception
{

	const char* what() const throw() {
		return "El paciente se encuentra en la lista";
	}

};

