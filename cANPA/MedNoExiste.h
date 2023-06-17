#pragma once
#include <exception>
#include <string>
using namespace std;
class MedNoExiste:public exception
{
	const char* what() const throw() {
		return "El medico no se encuentra en la lista";
	}

};

