#pragma once
#include <exception>
#include <string>
using namespace std;
class PacNoExiste:public exception
{
	const char* what() const throw() {
		return "El paciente no se encuentra en la lista";
	}

};

