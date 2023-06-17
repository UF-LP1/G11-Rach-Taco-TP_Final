#pragma once
#include <exception>
#include <string>
using namespace std;
class Medrepetido:public exception
{

	const char* what() const throw() {
		return "El medico se encuentra en la lista";
	}

};

